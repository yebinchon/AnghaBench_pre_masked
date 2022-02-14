
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int base; } ;
struct gr3d {scalar_t__ clk; scalar_t__ clk_secondary; TYPE_1__ client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 struct gr3d* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct gr3d *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_3->client.base);
 if (VAR_4 < 0) {
  FUNC_1(&VAR_2->dev, "failed to unregister host1x client: %d\n",
   VAR_4);
  return VAR_4;
 }

 if (VAR_3->clk_secondary) {
  FUNC_4(VAR_1);
  FUNC_0(VAR_3->clk_secondary);
 }

 FUNC_4(VAR_0);
 FUNC_0(VAR_3->clk);

 return 0;
}
