
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int base; } ;
struct gr2d {int clk; TYPE_1__ client; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 struct gr2d* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct gr2d *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->client.base);
 if (VAR_2 < 0) {
  FUNC_1(&VAR_0->dev, "failed to unregister host1x client: %d\n",
   VAR_2);
  return VAR_2;
 }

 FUNC_0(VAR_1->clk);

 return 0;
}
