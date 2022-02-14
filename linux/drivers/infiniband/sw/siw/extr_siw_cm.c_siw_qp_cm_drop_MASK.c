
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ valid; } ;
struct TYPE_6__ {int tx_suspend; } ;
struct TYPE_5__ {int rx_suspend; } ;
struct siw_qp {TYPE_3__ term_info; struct siw_cep* cep; TYPE_2__ tx_ctx; TYPE_1__ rx_stream; } ;
struct siw_cep {scalar_t__ state; int * qp; int * sock; TYPE_4__* cm_id; } ;
struct TYPE_8__ {int (* rem_ref ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct siw_cep*) ;
 int FUNC_1 (struct siw_cep*) ;
 int FUNC_2 (struct siw_cep*) ;
 int FUNC_3 (struct siw_cep*,int ) ;
 int FUNC_4 (struct siw_cep*,int ,int ) ;
 int FUNC_5 (struct siw_cep*,char*,...) ;
 int FUNC_6 (struct siw_qp*) ;
 int FUNC_7 (struct siw_qp*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_4__*) ;

void FUNC_11(struct siw_qp *VAR_4, int VAR_5)
{
 struct siw_cep *VAR_6 = VAR_4->cep;

 VAR_4->rx_stream.rx_suspend = 1;
 VAR_4->tx_ctx.tx_suspend = 1;

 if (!VAR_4->cep)
  return;

 if (VAR_5) {
  FUNC_3(VAR_6, VAR_3);
 } else {
  FUNC_2(VAR_6);

  if (VAR_6->state == 133) {
   FUNC_5(VAR_6, "already closed\n");
   goto out;
  }
  FUNC_5(VAR_6, "immediate close, state %d\n", VAR_6->state);

  if (VAR_4->term_info.valid)
   FUNC_7(VAR_4);

  if (VAR_6->cm_id) {
   switch (VAR_6->state) {
   case 135:
    FUNC_4(VAR_6, VAR_2,
           -VAR_0);
    break;

   case 129:
    FUNC_4(VAR_6, VAR_1, 0);
    break;

   case 131:
   case 130:
   case 132:
   case 134:
   case 128:
   case 133:
   default:
    break;
   }
   VAR_6->cm_id->rem_ref(VAR_6->cm_id);
   VAR_6->cm_id = ((void*)0);
   FUNC_0(VAR_6);
  }
  VAR_6->state = 133;

  if (VAR_6->sock) {
   FUNC_8(VAR_6->sock);



   FUNC_9(VAR_6->sock);
   VAR_6->sock = ((void*)0);
  }
  if (VAR_6->qp) {
   VAR_6->qp = ((void*)0);
   FUNC_6(VAR_4);
  }
out:
  FUNC_1(VAR_6);
 }
}
