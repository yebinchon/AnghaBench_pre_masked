
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct siw_rqe {int flags; int id; } ;
struct siw_qp {int ib_qp; struct siw_cq* rcq; } ;
struct siw_cqe {int status; size_t bytes; size_t inval_stag; int flags; int qp_id; int base_qp; scalar_t__ imm_data; int opcode; int id; } ;
struct TYPE_2__ {int cq_context; int (* comp_handler ) (TYPE_1__*,int ) ;} ;
struct siw_cq {size_t cq_put; size_t num_cqe; int lock; TYPE_1__ base_cq; scalar_t__ kernel_verbs; struct siw_cqe* queue; } ;
typedef enum siw_wc_status { ____Placeholder_siw_wc_status } siw_wc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct siw_qp*) ;
 int FUNC_3 (struct siw_cq*,int ) ;
 int FUNC_4 (struct siw_cq*,int ) ;
 int FUNC_5 (struct siw_cq*,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (TYPE_1__*,int ) ;

int FUNC_10(struct siw_qp *VAR_6, struct siw_rqe *VAR_7, u32 VAR_8,
       u32 VAR_9, enum siw_wc_status VAR_10)
{
 struct siw_cq *VAR_11 = VAR_6->rcq;
 int VAR_12 = 0;

 if (VAR_11) {
  struct siw_cqe *VAR_13;
  u32 VAR_14;
  unsigned long VAR_15;

  FUNC_7(&VAR_11->lock, VAR_15);

  VAR_14 = VAR_11->cq_put % VAR_11->num_cqe;
  VAR_13 = &VAR_11->queue[VAR_14];

  if (!FUNC_0(VAR_13->flags)) {
   bool VAR_16;
   u8 VAR_17 = VAR_5;

   VAR_13->id = VAR_7->id;
   VAR_13->opcode = VAR_2;
   VAR_13->status = VAR_10;
   VAR_13->imm_data = 0;
   VAR_13->bytes = VAR_8;

   if (VAR_11->kernel_verbs) {
    VAR_13->base_qp = VAR_6->ib_qp;
    if (VAR_9) {
     VAR_17 |= VAR_3;
     VAR_13->inval_stag = VAR_9;
    }
   } else {
    VAR_13->qp_id = FUNC_2(VAR_6);
   }

   FUNC_1(VAR_13->flags, VAR_17);

   FUNC_6(VAR_7->flags, 0);

   VAR_11->cq_put++;
   VAR_16 = FUNC_4(VAR_11, VAR_4);

   FUNC_8(&VAR_11->lock, VAR_15);

   if (VAR_16) {
    FUNC_5(VAR_11, "Call completion handler\n");
    VAR_11->base_cq.comp_handler(&VAR_11->base_cq,
      VAR_11->base_cq.cq_context);
   }
  } else {
   FUNC_8(&VAR_11->lock, VAR_15);
   VAR_12 = -VAR_0;
   FUNC_3(VAR_11, VAR_1);
  }
 } else {

  FUNC_6(VAR_7->flags, 0);
 }
 return VAR_12;
}
