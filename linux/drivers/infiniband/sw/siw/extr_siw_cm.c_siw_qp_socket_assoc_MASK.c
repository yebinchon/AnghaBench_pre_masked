
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_callback_lock; int sk_write_space; int sk_data_ready; } ;
struct TYPE_2__ {struct socket* sk; } ;
struct siw_qp {TYPE_1__ attrs; } ;
struct siw_cep {struct socket* sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct siw_cep *VAR_2, struct siw_qp *VAR_3)
{
 struct socket *VAR_4 = VAR_2->sock;
 struct sock *VAR_5 = VAR_4->sk;

 FUNC_0(&VAR_5->sk_callback_lock);

 VAR_3->attrs.sk = VAR_4;
 VAR_5->sk_data_ready = VAR_0;
 VAR_5->sk_write_space = VAR_1;

 FUNC_1(&VAR_5->sk_callback_lock);
}
