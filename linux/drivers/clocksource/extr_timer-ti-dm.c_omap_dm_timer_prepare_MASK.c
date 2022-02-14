
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dm_timer {int capability; TYPE_1__* pdev; int fclk; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct omap_dm_timer*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct omap_dm_timer*) ;
 int FUNC_6 (struct omap_dm_timer*) ;
 int FUNC_7 (struct omap_dm_timer*) ;
 int FUNC_8 (struct omap_dm_timer*) ;
 int FUNC_9 (struct omap_dm_timer*,int ) ;

__attribute__((used)) static int FUNC_10(struct omap_dm_timer *VAR_4)
{
 int VAR_5;





 if (!(VAR_4->capability & VAR_2)) {
  VAR_4->fclk = FUNC_3(&VAR_4->pdev->dev, "fck");
  if (FUNC_1(FUNC_0(VAR_4->fclk))) {
   FUNC_4(&VAR_4->pdev->dev, ": No fclk handle.\n");
   return -VAR_0;
  }
 }

 FUNC_6(VAR_4);

 if (VAR_4->capability & VAR_2) {
  VAR_5 = FUNC_8(VAR_4);
  if (VAR_5) {
   FUNC_5(VAR_4);
   return VAR_5;
  }
 }

 FUNC_2(VAR_4);
 FUNC_5(VAR_4);

 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5 == -VAR_1)
  return FUNC_9(VAR_4, VAR_3);

 return VAR_5;
}
