
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rdma_cm_id {TYPE_1__* qp; scalar_t__ context; } ;
struct iser_conn {scalar_t__ state; int snd_w_inv; int up_completion; } ;
struct ib_qp_init_attr {int dummy; } ;
struct ib_qp_attr {struct iser_conn* dest_qp_num; } ;
struct TYPE_2__ {char* qp_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,struct ib_qp_attr*,int ,struct ib_qp_init_attr*) ;
 int FUNC_2 (char*,struct iser_conn*,char*) ;

__attribute__((used)) static void FUNC_3(struct rdma_cm_id *VAR_3,
       const void *VAR_4)
{
 struct iser_conn *VAR_5;
 struct ib_qp_attr VAR_6;
 struct ib_qp_init_attr VAR_7;

 VAR_5 = (struct iser_conn *)VAR_3->context;
 if (VAR_5->state != VAR_0)

  return;

 (void)FUNC_1(VAR_3->qp, &VAR_6, ~0, &VAR_7);
 FUNC_2("remote qpn:%x my qpn:%x\n", VAR_6.dest_qp_num, VAR_3->qp->qp_num);

 if (VAR_4) {
  u8 VAR_8 = *(u8 *)VAR_4;

  VAR_5->snd_w_inv = !(VAR_8 & VAR_2);
 }

 FUNC_2("conn %p: negotiated %s invalidation\n",
    VAR_5, VAR_5->snd_w_inv ? "remote" : "local");

 VAR_5->state = VAR_1;
 FUNC_0(&VAR_5->up_completion);
}
