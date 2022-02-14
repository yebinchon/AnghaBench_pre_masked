
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int resid; int length; scalar_t__ sge_offset; scalar_t__ cur_sge; } ;
struct TYPE_12__ {int remote_addr; } ;
struct TYPE_11__ {int remote_addr; } ;
struct TYPE_13__ {TYPE_4__ rdma; TYPE_3__ atomic; } ;
struct TYPE_14__ {TYPE_5__ wr; int opcode; } ;
struct rxe_send_wqe {scalar_t__ state; int iova; int first_psn; TYPE_8__ dma; TYPE_6__ wr; } ;
struct TYPE_15__ {int psn; } ;
struct TYPE_10__ {int queue; } ;
struct TYPE_9__ {int psn; int opcode; void* wqe_index; } ;
struct rxe_qp {int mtu; TYPE_7__ comp; TYPE_2__ sq; TYPE_1__ req; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct rxe_send_wqe* FUNC_0 (int ,unsigned int) ;
 void* FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct rxe_qp*,struct rxe_send_wqe*,unsigned int,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_5 (int ,struct rxe_qp*) ;

__attribute__((used)) static void FUNC_6(struct rxe_qp *VAR_7)
{
 struct rxe_send_wqe *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12 = 1;

 VAR_7->req.wqe_index = FUNC_1(VAR_7->sq.queue);
 VAR_7->req.psn = VAR_7->comp.psn;
 VAR_7->req.opcode = -1;

 for (VAR_9 = FUNC_1(VAR_7->sq.queue);
  VAR_9 != FUNC_3(VAR_7->sq.queue);
  VAR_9 = FUNC_2(VAR_7->sq.queue, VAR_9)) {
  VAR_8 = FUNC_0(VAR_7->sq.queue, VAR_9);
  VAR_10 = FUNC_5(VAR_8->wr.opcode, VAR_7);

  if (VAR_8->state == VAR_6)
   break;

  if (VAR_8->state == VAR_5)
   continue;

  VAR_8->iova = (VAR_10 & VAR_1) ?
        VAR_8->wr.wr.atomic.remote_addr :
        (VAR_10 & VAR_3) ?
        VAR_8->wr.wr.rdma.remote_addr :
        0;

  if (!VAR_12 || (VAR_10 & VAR_2) == 0) {
   VAR_8->dma.resid = VAR_8->dma.length;
   VAR_8->dma.cur_sge = 0;
   VAR_8->dma.sge_offset = 0;
  }

  if (VAR_12) {
   VAR_12 = 0;

   if (VAR_10 & VAR_4) {
    VAR_11 = (VAR_7->comp.psn - VAR_8->first_psn) &
     VAR_0;
    FUNC_4(VAR_7, VAR_8, VAR_10, VAR_11);
   }

   if (VAR_10 & VAR_2) {
    VAR_11 = (VAR_8->dma.length - VAR_8->dma.resid) /
     VAR_7->mtu;
    VAR_8->iova += VAR_11 * VAR_7->mtu;
   }
  }

  VAR_8->state = VAR_6;
 }
}
