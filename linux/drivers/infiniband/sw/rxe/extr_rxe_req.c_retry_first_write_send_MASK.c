
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int resid; int sge_offset; } ;
struct TYPE_5__ {int send_flags; int opcode; } ;
struct rxe_send_wqe {int iova; TYPE_3__ dma; TYPE_2__ wr; } ;
struct TYPE_4__ {int opcode; } ;
struct rxe_qp {int mtu; TYPE_1__ req; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (struct rxe_qp*,struct rxe_send_wqe*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct rxe_qp *VAR_2,
       struct rxe_send_wqe *VAR_3,
       unsigned int VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  int VAR_7 = (VAR_3->dma.resid > VAR_2->mtu) ?
    VAR_2->mtu : VAR_3->dma.resid;

  VAR_2->req.opcode = FUNC_1(VAR_2, VAR_3,
          VAR_3->wr.opcode);

  if (VAR_3->wr.send_flags & VAR_0) {
   VAR_3->dma.resid -= VAR_7;
   VAR_3->dma.sge_offset += VAR_7;
  } else {
   FUNC_0(&VAR_3->dma, VAR_7);
  }
  if (VAR_4 & VAR_1)
   VAR_3->iova += VAR_2->mtu;
 }
}
