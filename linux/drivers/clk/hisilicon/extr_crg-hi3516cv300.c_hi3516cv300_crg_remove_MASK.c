
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct hisi_crg_dev {TYPE_1__* funcs; int rstc; } ;
struct TYPE_2__ {int (* unregister_clks ) (struct platform_device*) ;} ;


 int FUNC_0 (int ) ;
 struct hisi_crg_dev* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct hisi_crg_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->rstc);
 VAR_1->funcs->unregister_clks(VAR_0);
 return 0;
}
