
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head_state {scalar_t__ failed; scalar_t__ injournal; } ;
struct stripe_head {int state; int reconstruct_state; int check_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct stripe_head*,struct stripe_head_state*,int,int) ;
 int FUNC_1 (struct stripe_head*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct stripe_head *VAR_3,
          struct stripe_head_state *VAR_4,
          int VAR_5)
{
 int VAR_6;





 if (!FUNC_3(VAR_0, &VAR_3->state) && !VAR_3->check_state &&
     !VAR_3->reconstruct_state) {
  if (VAR_4->injournal && VAR_4->failed) {
   if (FUNC_3(VAR_2, &VAR_3->state))
    FUNC_1(VAR_3);
   goto out;
  }

  for (VAR_6 = VAR_5; VAR_6--; )
   if (FUNC_0(VAR_3, VAR_4, VAR_6, VAR_5))
    break;
 }
out:
 FUNC_2(VAR_1, &VAR_3->state);
}
