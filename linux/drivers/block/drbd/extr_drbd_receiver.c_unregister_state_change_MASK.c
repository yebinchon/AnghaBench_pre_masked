
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; int * sk_user_data; int sk_state_change; } ;
struct accept_wait_data {int original_sk_state_change; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0, struct accept_wait_data *VAR_1)
{
 FUNC_0(&VAR_0->sk_callback_lock);
 VAR_0->sk_state_change = VAR_1->original_sk_state_change;
 VAR_0->sk_user_data = ((void*)0);
 FUNC_1(&VAR_0->sk_callback_lock);
}
