
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {unsigned int tclr; unsigned int tldr; } ;
struct omap_dm_timer {TYPE_1__ context; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct omap_dm_timer*) ;
 int FUNC_1 (struct omap_dm_timer*) ;
 unsigned int FUNC_2 (struct omap_dm_timer*,int ) ;
 int FUNC_3 (struct omap_dm_timer*,int ,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct omap_dm_timer *VAR_5, int VAR_6,
      unsigned int VAR_7)
{
 u32 VAR_8;

 if (FUNC_4(!VAR_5))
  return -VAR_0;

 FUNC_1(VAR_5);
 VAR_8 = FUNC_2(VAR_5, VAR_2);
 if (VAR_6)
  VAR_8 |= VAR_1;
 else
  VAR_8 &= ~VAR_1;
 FUNC_3(VAR_5, VAR_2, VAR_8);
 FUNC_3(VAR_5, VAR_3, VAR_7);

 FUNC_3(VAR_5, VAR_4, 0);

 VAR_5->context.tclr = VAR_8;
 VAR_5->context.tldr = VAR_7;
 FUNC_0(VAR_5);
 return 0;
}
