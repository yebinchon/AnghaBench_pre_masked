
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head_state {scalar_t__ waiting_extra_page; } ;
struct stripe_head {int state; struct r5conf* raid_conf; } ;
struct r5conf {scalar_t__ log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r5conf*,struct stripe_head*) ;
 int FUNC_1 (scalar_t__,struct stripe_head*) ;
 int FUNC_2 (scalar_t__,struct stripe_head*) ;
 scalar_t__ FUNC_3 (struct r5conf*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static inline int FUNC_5(struct stripe_head *VAR_3, struct stripe_head_state *VAR_4)
{
 struct r5conf *VAR_5 = VAR_3->raid_conf;

 if (VAR_5->log) {
  if (!FUNC_4(VAR_2, &VAR_3->state)) {

   if (VAR_4->waiting_extra_page)
    return 0;
   return FUNC_2(VAR_5->log, VAR_3);
  } else if (FUNC_4(VAR_1, &VAR_3->state)) {

   return FUNC_1(VAR_5->log, VAR_3);
  }
 } else if (FUNC_3(VAR_5)) {
  return FUNC_0(VAR_5, VAR_3);
 }

 return -VAR_0;
}
