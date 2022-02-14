
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; int sk_error_report; int sk_write_space; int sk_data_ready; int sk_state_change; } ;
struct siw_cep {int sk_error_report; int sk_write_space; int sk_data_ready; int sk_state_change; } ;


 struct siw_cep* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct siw_cep *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->sk_callback_lock);
 VAR_1->sk_state_change = VAR_0->sk_state_change;
 VAR_1->sk_data_ready = VAR_0->sk_data_ready;
 VAR_1->sk_write_space = VAR_0->sk_write_space;
 VAR_1->sk_error_report = VAR_0->sk_error_report;
 FUNC_2(&VAR_0->sk_callback_lock);
}
