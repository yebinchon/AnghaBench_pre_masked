
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_device {int * clk_bus; int * clk_gpu; int dev; int * reset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int) ;
 void* FUNC_5 (int ,char*) ;
 int * FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct lima_device *VAR_1)
{
 int VAR_2;

 VAR_1->clk_bus = FUNC_5(VAR_1->dev, "bus");
 if (FUNC_0(VAR_1->clk_bus)) {
  VAR_2 = FUNC_1(VAR_1->clk_bus);
  if (VAR_2 != -VAR_0)
   FUNC_4(VAR_1->dev, "get bus clk failed %d\n", VAR_2);
  return VAR_2;
 }

 VAR_1->clk_gpu = FUNC_5(VAR_1->dev, "core");
 if (FUNC_0(VAR_1->clk_gpu)) {
  VAR_2 = FUNC_1(VAR_1->clk_gpu);
  if (VAR_2 != -VAR_0)
   FUNC_4(VAR_1->dev, "get core clk failed %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1->clk_bus);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1->clk_gpu);
 if (VAR_2)
  goto error_out0;

 VAR_1->reset = FUNC_6(VAR_1->dev, ((void*)0));
 if (FUNC_0(VAR_1->reset)) {
  VAR_2 = FUNC_1(VAR_1->reset);
  if (VAR_2 != -VAR_0)
   FUNC_4(VAR_1->dev, "get reset controller failed %d\n",
    VAR_2);
  goto error_out1;
 } else if (VAR_1->reset != ((void*)0)) {
  VAR_2 = FUNC_7(VAR_1->reset);
  if (VAR_2) {
   FUNC_4(VAR_1->dev,
    "reset controller deassert failed %d\n", VAR_2);
   goto error_out1;
  }
 }

 return 0;

error_out1:
 FUNC_2(VAR_1->clk_gpu);
error_out0:
 FUNC_2(VAR_1->clk_bus);
 return VAR_2;
}
