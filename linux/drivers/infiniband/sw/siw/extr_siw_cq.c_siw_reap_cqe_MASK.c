
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct siw_cqe {int flags; size_t status; size_t opcode; scalar_t__ id; int base_qp; int inval_stag; int bytes; } ;
struct siw_cq {size_t cq_get; size_t num_cqe; int lock; int kernel_verbs; struct siw_cqe* queue; } ;
struct TYPE_3__ {int invalidate_rkey; } ;
struct ib_wc {int qp; int wc_flags; TYPE_1__ ex; int byte_len; int opcode; int status; scalar_t__ wr_id; } ;
struct TYPE_4__ {int ib; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (struct ib_wc*,int ,int) ;
 int FUNC_4 (struct siw_cq*,char*,int,size_t,int,void*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct siw_cq *VAR_5, struct ib_wc *VAR_6)
{
 struct siw_cqe *VAR_7;
 unsigned long VAR_8;

 FUNC_5(&VAR_5->lock, VAR_8);

 VAR_7 = &VAR_5->queue[VAR_5->cq_get % VAR_5->num_cqe];
 if (FUNC_0(VAR_7->flags) & VAR_2) {
  FUNC_3(VAR_6, 0, sizeof(*VAR_6));
  VAR_6->wr_id = VAR_7->id;
  VAR_6->status = VAR_3[VAR_7->status].ib;
  VAR_6->opcode = VAR_4[VAR_7->opcode];
  VAR_6->byte_len = VAR_7->bytes;






  if (FUNC_2(VAR_5->kernel_verbs)) {
   if (VAR_7->flags & VAR_1) {
    VAR_6->ex.invalidate_rkey = VAR_7->inval_stag;
    VAR_6->wc_flags = VAR_0;
   }
   VAR_6->qp = VAR_7->base_qp;
   FUNC_4(VAR_5,
       "idx %u, type %d, flags %2x, id 0x%pK\n",
       VAR_5->cq_get % VAR_5->num_cqe, VAR_7->opcode,
       VAR_7->flags, (void *)(uintptr_t)VAR_7->id);
  }
  FUNC_1(VAR_7->flags, 0);
  VAR_5->cq_get++;

  FUNC_6(&VAR_5->lock, VAR_8);

  return 1;
 }
 FUNC_6(&VAR_5->lock, VAR_8);

 return 0;
}
