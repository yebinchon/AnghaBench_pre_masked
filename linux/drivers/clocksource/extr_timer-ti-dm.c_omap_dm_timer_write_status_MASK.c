
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dm_timer {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct omap_dm_timer*,unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct omap_dm_timer *VAR_1, unsigned int VAR_2)
{
 if (FUNC_2(!VAR_1 || FUNC_1(&VAR_1->pdev->dev)))
  return -VAR_0;

 FUNC_0(VAR_1, VAR_2);

 return 0;
}
