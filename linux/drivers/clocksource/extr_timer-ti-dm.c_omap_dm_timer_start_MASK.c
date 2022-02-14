
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tclr; } ;
struct omap_dm_timer {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omap_dm_timer*) ;
 int FUNC_1 (struct omap_dm_timer*,int ) ;
 int FUNC_2 (struct omap_dm_timer*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct omap_dm_timer *VAR_3)
{
 u32 VAR_4;

 if (FUNC_3(!VAR_3))
  return -VAR_0;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (!(VAR_4 & VAR_2)) {
  VAR_4 |= VAR_2;
  FUNC_2(VAR_3, VAR_1, VAR_4);
 }


 VAR_3->context.tclr = VAR_4;
 return 0;
}
