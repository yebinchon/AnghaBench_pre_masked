
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; struct accept_wait_data* sk_user_data; } ;
struct accept_wait_data {void (* original_sk_state_change ) (struct sock*) ;int door_bell; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_1)
{
 struct accept_wait_data *VAR_2 = VAR_1->sk_user_data;
 void (*VAR_3)(struct sock *VAR_4);

 VAR_3 = VAR_2->original_sk_state_change;
 if (VAR_1->sk_state == VAR_0)
  FUNC_0(&VAR_2->door_bell);
 VAR_3(VAR_1);
}
