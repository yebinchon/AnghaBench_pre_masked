
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; int sk_callback_lock; } ;
struct siw_cep {void (* sk_state_change ) (struct sock*) ;int state; TYPE_2__* qp; } ;
struct TYPE_3__ {int tx_suspend; } ;
struct TYPE_4__ {TYPE_1__ tx_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct siw_cep*,int ) ;
 int FUNC_3 (struct siw_cep*,char*,int) ;
 struct siw_cep* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2)
{
 struct siw_cep *VAR_3;
 void (*VAR_4)(struct sock *VAR_5);

 FUNC_0(&VAR_2->sk_callback_lock);

 VAR_3 = FUNC_4(VAR_2);
 if (!VAR_3) {

  FUNC_1(&VAR_2->sk_callback_lock);
  return;
 }
 VAR_4 = VAR_3->sk_state_change;

 FUNC_3(VAR_3, "state: %d\n", VAR_3->state);

 switch (VAR_2->sk_state) {
 case 128:




  FUNC_2(VAR_3, VAR_0);
  break;

 case 130:
 case 129:
  if (VAR_3->qp)
   VAR_3->qp->tx_ctx.tx_suspend = 1;
  FUNC_2(VAR_3, VAR_1);
  break;

 default:
  FUNC_3(VAR_3, "unexpected socket state %d\n", VAR_2->sk_state);
 }
 FUNC_1(&VAR_2->sk_callback_lock);
 VAR_4(VAR_2);
}
