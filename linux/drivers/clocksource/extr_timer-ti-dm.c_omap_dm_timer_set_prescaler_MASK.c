
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
 int FUNC_1 (struct omap_dm_timer*) ;
 int FUNC_2 (struct omap_dm_timer*,int ) ;
 int FUNC_3 (struct omap_dm_timer*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct omap_dm_timer *VAR_3,
     int VAR_4)
{
 u32 VAR_5;

 if (FUNC_4(!VAR_3) || VAR_4 < -1 || VAR_4 > 7)
  return -VAR_0;

 FUNC_1(VAR_3);
 VAR_5 = FUNC_2(VAR_3, VAR_2);
 VAR_5 &= ~(VAR_1 | (0x07 << 2));
 if (VAR_4 >= 0) {
  VAR_5 |= VAR_1;
  VAR_5 |= VAR_4 << 2;
 }
 FUNC_3(VAR_3, VAR_2, VAR_5);


 VAR_3->context.tclr = VAR_5;
 FUNC_0(VAR_3);
 return 0;
}
