
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct creq_qp_event {int dummy; } ;
struct creq_func_event {int dummy; } ;
struct creq_base {scalar_t__ type; } ;
struct bnxt_qplib_hwq {scalar_t__ cons; int lock; int max_elements; scalar_t__ pbl_ptr; } ;
struct bnxt_qplib_rcfw {int creq_ring_id; int creq_bar_reg_iomem; TYPE_2__* pdev; int creq_func_event_processed; int creq_qp_event_processed; struct bnxt_qplib_hwq creq; TYPE_1__* res; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int cctx; } ;


 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;

 int FUNC_0 (struct creq_base*,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,struct bnxt_qplib_hwq*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnxt_qplib_rcfw*,struct creq_func_event*) ;
 int FUNC_4 (struct bnxt_qplib_rcfw*,struct creq_qp_event*) ;
 int FUNC_5 (int ,scalar_t__,int ,int ,int) ;
 int FUNC_6 (int *,char*,scalar_t__) ;
 int FUNC_7 () ;
 size_t FUNC_8 (scalar_t__) ;
 size_t FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_3)
{
 struct bnxt_qplib_rcfw *VAR_4 = (struct bnxt_qplib_rcfw *)VAR_3;
 bool VAR_5 = FUNC_2(VAR_4->res->cctx);
 struct bnxt_qplib_hwq *VAR_6 = &VAR_4->creq;
 u32 VAR_7, VAR_8 = VAR_2;
 struct creq_base *VAR_9, **VAR_10;
 u32 VAR_11, VAR_12;
 unsigned long VAR_13;


 FUNC_10(&VAR_6->lock, VAR_13);
 VAR_12 = VAR_6->cons;
 while (VAR_8 > 0) {
  VAR_11 = FUNC_1(VAR_12, VAR_6);
  VAR_10 = (struct creq_base **)VAR_6->pbl_ptr;
  VAR_9 = &VAR_10[FUNC_9(VAR_11)][FUNC_8(VAR_11)];
  if (!FUNC_0(VAR_9, VAR_12, VAR_6->max_elements))
   break;



  FUNC_7();

  VAR_7 = VAR_9->type & VAR_1;
  switch (VAR_7) {
  case 128:
   FUNC_4
    (VAR_4, (struct creq_qp_event *)VAR_9);
   VAR_4->creq_qp_event_processed++;
   break;
  case 129:
   if (!FUNC_3
       (VAR_4, (struct creq_func_event *)VAR_9))
    VAR_4->creq_func_event_processed++;
   else
    FUNC_6(&VAR_4->pdev->dev,
      "aeqe:%#x Not handled\n", VAR_7);
   break;
  default:
   if (VAR_7 != VAR_0)
    FUNC_6(&VAR_4->pdev->dev,
      "creqe with event 0x%x not handled\n",
      VAR_7);
   break;
  }
  VAR_12++;
  VAR_8--;
 }

 if (VAR_6->cons != VAR_12) {
  VAR_6->cons = VAR_12;
  FUNC_5(VAR_4->creq_bar_reg_iomem,
           VAR_12, VAR_6->max_elements,
           VAR_4->creq_ring_id, VAR_5);
 }
 FUNC_11(&VAR_6->lock, VAR_13);
}
