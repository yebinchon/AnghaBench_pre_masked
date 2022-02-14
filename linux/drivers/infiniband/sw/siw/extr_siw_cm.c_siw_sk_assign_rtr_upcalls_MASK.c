
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; int sk_write_space; int sk_data_ready; } ;
struct siw_cep {TYPE_1__* sock; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct siw_cep *VAR_2)
{
 struct sock *VAR_3 = VAR_2->sock->sk;

 FUNC_0(&VAR_3->sk_callback_lock);
 VAR_3->sk_data_ready = VAR_1;
 VAR_3->sk_write_space = VAR_0;
 FUNC_1(&VAR_3->sk_callback_lock);
}
