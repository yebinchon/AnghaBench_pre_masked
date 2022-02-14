
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_cmt_channel {TYPE_2__* cmt; int cs_enabled; } ;
struct clocksource {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 struct sh_cmt_channel* FUNC_0 (struct clocksource*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sh_cmt_channel*,int ) ;

__attribute__((used)) static void FUNC_3(struct clocksource *VAR_1)
{
 struct sh_cmt_channel *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2->cs_enabled)
  return;

 FUNC_1(&VAR_2->cmt->pdev->dev);
 FUNC_2(VAR_2, VAR_0);
}
