
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {unsigned int tclr; unsigned int tmar; } ;
struct omap_dm_timer {TYPE_1__ context; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omap_dm_timer*) ;
 int FUNC_1 (struct omap_dm_timer*) ;
 unsigned int FUNC_2 (struct omap_dm_timer*,int ) ;
 int FUNC_3 (struct omap_dm_timer*,int ,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct omap_dm_timer *VAR_4, int VAR_5,
       unsigned int VAR_6)
{
 u32 VAR_7;

 if (FUNC_4(!VAR_4))
  return -VAR_0;

 FUNC_1(VAR_4);
 VAR_7 = FUNC_2(VAR_4, VAR_2);
 if (VAR_5)
  VAR_7 |= VAR_1;
 else
  VAR_7 &= ~VAR_1;
 FUNC_3(VAR_4, VAR_3, VAR_6);
 FUNC_3(VAR_4, VAR_2, VAR_7);


 VAR_4->context.tclr = VAR_7;
 VAR_4->context.tmar = VAR_6;
 FUNC_0(VAR_4);
 return 0;
}
