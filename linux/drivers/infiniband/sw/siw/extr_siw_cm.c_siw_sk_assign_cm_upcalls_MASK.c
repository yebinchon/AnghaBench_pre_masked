
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; int sk_error_report; int sk_write_space; int sk_data_ready; int sk_state_change; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_4)
{
 FUNC_0(&VAR_4->sk_callback_lock);
 VAR_4->sk_state_change = VAR_2;
 VAR_4->sk_data_ready = VAR_0;
 VAR_4->sk_write_space = VAR_3;
 VAR_4->sk_error_report = VAR_1;
 FUNC_1(&VAR_4->sk_callback_lock);
}
