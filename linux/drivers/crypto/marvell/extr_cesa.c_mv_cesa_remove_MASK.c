
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct mv_cesa_dev {TYPE_2__* engines; TYPE_1__* caps; } ;
struct TYPE_4__ {int clk; int zclk; } ;
struct TYPE_3__ {int nengines; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct platform_device*,int) ;
 int FUNC_2 (struct mv_cesa_dev*) ;
 struct mv_cesa_dev* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct mv_cesa_dev *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_2(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->caps->nengines; VAR_2++) {
  FUNC_0(VAR_1->engines[VAR_2].zclk);
  FUNC_0(VAR_1->engines[VAR_2].clk);
  FUNC_1(VAR_0, VAR_2);
 }

 return 0;
}
