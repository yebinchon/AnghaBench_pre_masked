
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int tier; unsigned int twer; } ;
struct omap_dm_timer {TYPE_1__ context; } ;


 int VAR_0 ;
 int FUNC_0 (struct omap_dm_timer*,unsigned int) ;
 int FUNC_1 (struct omap_dm_timer*) ;
 int FUNC_2 (struct omap_dm_timer*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct omap_dm_timer *VAR_1,
     unsigned int VAR_2)
{
 if (FUNC_3(!VAR_1))
  return -VAR_0;

 FUNC_2(VAR_1);
 FUNC_0(VAR_1, VAR_2);


 VAR_1->context.tier = VAR_2;
 VAR_1->context.twer = VAR_2;
 FUNC_1(VAR_1);
 return 0;
}
