
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int sk_callback_lock; int sk_user_data; } ;
struct TYPE_8__ {int rx_suspend; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct siw_qp {TYPE_3__ rx_stream; int state_lock; TYPE_2__ attrs; } ;
struct TYPE_6__ {struct siw_qp* data; } ;
struct TYPE_9__ {int count; TYPE_1__ arg; } ;
typedef TYPE_4__ read_descriptor_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct siw_qp*,char*,int ) ;
 int VAR_1 ;
 struct siw_qp* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct sock *VAR_2)
{
 struct siw_qp *VAR_3;

 FUNC_2(&VAR_2->sk_callback_lock);

 if (FUNC_7(!VAR_2->sk_user_data || !FUNC_5(VAR_2)))
  goto done;

 VAR_3 = FUNC_5(VAR_2);

 if (FUNC_1(!VAR_3->rx_stream.rx_suspend &&
     FUNC_0(&VAR_3->state_lock))) {
  read_descriptor_t VAR_4 = { .arg.data = VAR_3, .count = 1 };

  if (FUNC_1(VAR_3->attrs.state == VAR_0))






   FUNC_6(VAR_2, &VAR_4, VAR_1);

  FUNC_8(&VAR_3->state_lock);
 } else {
  FUNC_4(VAR_3, "unable to process RX, suspend: %d\n",
      VAR_3->rx_stream.rx_suspend);
 }
done:
 FUNC_3(&VAR_2->sk_callback_lock);
}
