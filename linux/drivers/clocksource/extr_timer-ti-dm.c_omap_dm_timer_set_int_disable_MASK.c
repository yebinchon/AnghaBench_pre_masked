
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tier; int twer; } ;
struct omap_dm_timer {int revision; TYPE_1__ context; int irq_dis; int irq_ena; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_dm_timer*) ;
 int FUNC_1 (struct omap_dm_timer*) ;
 int FUNC_2 (struct omap_dm_timer*,int ) ;
 int FUNC_3 (struct omap_dm_timer*,int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct omap_dm_timer *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = VAR_3;

 if (FUNC_5(!VAR_2))
  return -VAR_0;

 FUNC_1(VAR_2);

 if (VAR_2->revision == 1)
  VAR_4 = FUNC_4(VAR_2->irq_ena) & ~VAR_3;

 FUNC_6(VAR_4, VAR_2->irq_dis);
 VAR_4 = FUNC_2(VAR_2, VAR_1) & ~VAR_3;
 FUNC_3(VAR_2, VAR_1, VAR_4);


 VAR_2->context.tier &= ~VAR_3;
 VAR_2->context.twer &= ~VAR_3;
 FUNC_0(VAR_2);
 return 0;
}
