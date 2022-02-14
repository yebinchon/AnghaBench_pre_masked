
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tclr; } ;
struct omap_dm_timer {int capability; TYPE_1__ context; int posted; int fclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omap_dm_timer*,int ,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct omap_dm_timer*) ;
 int FUNC_3 (struct omap_dm_timer*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct omap_dm_timer *VAR_3)
{
 unsigned long VAR_4 = 0;

 if (FUNC_4(!VAR_3))
  return -VAR_0;

 if (!(VAR_3->capability & VAR_2))
  VAR_4 = FUNC_1(VAR_3->fclk);

 FUNC_0(VAR_3, VAR_3->posted, VAR_4);






 VAR_3->context.tclr =
   FUNC_3(VAR_3, VAR_1);
 FUNC_2(VAR_3);
 return 0;
}
