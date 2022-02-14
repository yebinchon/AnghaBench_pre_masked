
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdn_dp_device {int grf_clk; int dev; int grf; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct cdn_dp_device *VAR_0,
       unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0->grf_clk);
 if (VAR_3) {
  FUNC_0(VAR_0->dev, "Failed to prepare_enable grf clock\n");
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_0->grf, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_0->dev, "Could not write to GRF: %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_1(VAR_0->grf_clk);

 return 0;
}
