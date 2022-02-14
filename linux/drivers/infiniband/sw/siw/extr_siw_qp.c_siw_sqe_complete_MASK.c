
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct siw_sqe {size_t flags; int opcode; int id; } ;
struct siw_qp {int ib_qp; struct siw_cq* scq; } ;
struct siw_cqe {int status; size_t bytes; int flags; int qp_id; int base_qp; scalar_t__ imm_data; int opcode; int id; } ;
struct TYPE_2__ {int cq_context; int (* comp_handler ) (TYPE_1__*,int ) ;} ;
struct siw_cq {size_t cq_put; size_t num_cqe; int lock; TYPE_1__ base_cq; scalar_t__ kernel_verbs; struct siw_cqe* queue; } ;
typedef enum siw_wc_status { ____Placeholder_siw_wc_status } siw_wc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct siw_qp*) ;
 int FUNC_3 (struct siw_cq*,int ) ;
 int FUNC_4 (struct siw_cq*,size_t) ;
 int FUNC_5 (struct siw_cq*,char*) ;
 int FUNC_6 (size_t,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (TYPE_1__*,int ) ;

int FUNC_10(struct siw_qp *VAR_3, struct siw_sqe *VAR_4, u32 VAR_5,
       enum siw_wc_status VAR_6)
{
 struct siw_cq *VAR_7 = VAR_3->scq;
 int VAR_8 = 0;

 if (VAR_7) {
  u32 VAR_9 = VAR_4->flags;
  struct siw_cqe *VAR_10;
  u32 VAR_11;
  unsigned long VAR_12;

  FUNC_7(&VAR_7->lock, VAR_12);

  VAR_11 = VAR_7->cq_put % VAR_7->num_cqe;
  VAR_10 = &VAR_7->queue[VAR_11];

  if (!FUNC_0(VAR_10->flags)) {
   bool VAR_13;

   VAR_10->id = VAR_4->id;
   VAR_10->opcode = VAR_4->opcode;
   VAR_10->status = VAR_6;
   VAR_10->imm_data = 0;
   VAR_10->bytes = VAR_5;

   if (VAR_7->kernel_verbs)
    VAR_10->base_qp = VAR_3->ib_qp;
   else
    VAR_10->qp_id = FUNC_2(VAR_3);


   FUNC_1(VAR_10->flags, VAR_2);

   FUNC_6(VAR_4->flags, 0);

   VAR_7->cq_put++;
   VAR_13 = FUNC_4(VAR_7, VAR_9);

   FUNC_8(&VAR_7->lock, VAR_12);

   if (VAR_13) {
    FUNC_5(VAR_7, "Call completion handler\n");
    VAR_7->base_cq.comp_handler(&VAR_7->base_cq,
      VAR_7->base_cq.cq_context);
   }
  } else {
   FUNC_8(&VAR_7->lock, VAR_12);
   VAR_8 = -VAR_0;
   FUNC_3(VAR_7, VAR_1);
  }
 } else {

  FUNC_6(VAR_4->flags, 0);
 }
 return VAR_8;
}
