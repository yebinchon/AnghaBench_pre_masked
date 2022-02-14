
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_dev_info {int dev; int * regs; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int) ;
 int FUNC_3 (struct resource*) ;

__attribute__((used)) static int FUNC_4(struct sec_dev_info *VAR_3, struct platform_device *VAR_4)
{
 struct resource *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_6);

  if (!VAR_5) {
   FUNC_0(VAR_3->dev, "Memory resource %d not found\n", VAR_6);
   return -VAR_0;
  }

  VAR_3->regs[VAR_6] = FUNC_1(VAR_3->dev, VAR_5->start,
          FUNC_3(VAR_5));
  if (!VAR_3->regs[VAR_6]) {
   FUNC_0(VAR_3->dev,
    "Memory resource %d could not be remapped\n",
    VAR_6);
   return -VAR_0;
  }
 }

 return 0;
}
