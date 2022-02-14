
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct omap_dm_timer*) ;
 int FUNC_1 (struct omap_dm_timer*) ;
 int FUNC_2 (struct omap_dm_timer*,int ) ;
 int FUNC_3 (struct omap_dm_timer*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct omap_dm_timer *VAR_5, int VAR_6,
     int VAR_7, int VAR_8)
{
 u32 VAR_9;

 if (FUNC_4(!VAR_5))
  return -VAR_0;

 FUNC_1(VAR_5);
 VAR_9 = FUNC_2(VAR_5, VAR_3);
 VAR_9 &= ~(VAR_1 | VAR_4 |
        VAR_2 | (0x03 << 10));
 if (VAR_6)
  VAR_9 |= VAR_4;
 if (VAR_7)
  VAR_9 |= VAR_2;
 VAR_9 |= VAR_8 << 10;
 FUNC_3(VAR_5, VAR_3, VAR_9);


 VAR_5->context.tclr = VAR_9;
 FUNC_0(VAR_5);
 return 0;
}
