
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {struct r5conf* raid_conf; } ;
struct r5conf {scalar_t__ log; } ;


 int FUNC_0 (struct stripe_head*) ;
 int FUNC_1 (struct stripe_head*) ;
 scalar_t__ FUNC_2 (struct r5conf*) ;

__attribute__((used)) static inline void FUNC_3(struct stripe_head *VAR_0)
{
 struct r5conf *VAR_1 = VAR_0->raid_conf;

 if (VAR_1->log)
  FUNC_1(VAR_0);
 else if (FUNC_2(VAR_1))
  FUNC_0(VAR_0);
}
