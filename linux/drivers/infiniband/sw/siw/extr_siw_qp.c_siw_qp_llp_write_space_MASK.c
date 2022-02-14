
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; TYPE_1__* sk_socket; } ;
struct siw_cep {int qp; int (* sk_write_space ) (struct sock*) ;} ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct siw_cep* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct sock *VAR_1)
{
 struct siw_cep *VAR_2;

 FUNC_0(&VAR_1->sk_callback_lock);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  VAR_2->sk_write_space(VAR_1);

  if (!FUNC_5(VAR_0, &VAR_1->sk_socket->flags))
   (void)FUNC_2(VAR_2->qp);
 }

 FUNC_1(&VAR_1->sk_callback_lock);
}
