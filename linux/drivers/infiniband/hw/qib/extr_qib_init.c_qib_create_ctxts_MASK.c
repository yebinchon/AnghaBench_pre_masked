
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_pportdata {int dummy; } ;
struct qib_devdata {int assigned_node_id; unsigned int first_user_ctxt; int skip_kctxt_mask; unsigned int num_pports; int * rcd; struct qib_pportdata* pport; int ctxtcnt; TYPE_1__* pcidev; } ;
struct qib_ctxtdata {int seq_cnt; int * pkeys; } ;
struct TYPE_2__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 struct qib_ctxtdata* FUNC_4 (struct qib_pportdata*,unsigned int,int) ;
 int FUNC_5 (struct qib_devdata*,char*) ;

int FUNC_6(struct qib_devdata *VAR_3)
{
 unsigned VAR_4;
 int VAR_5 = FUNC_3(VAR_3->pcidev->bus);

 if (VAR_5 < 0)
  VAR_5 = FUNC_2();
 VAR_3->assigned_node_id = VAR_5;





 VAR_3->rcd = FUNC_0(VAR_3->ctxtcnt, sizeof(*VAR_3->rcd), VAR_1);
 if (!VAR_3->rcd)
  return -VAR_0;


 for (VAR_4 = 0; VAR_4 < VAR_3->first_user_ctxt; ++VAR_4) {
  struct qib_pportdata *VAR_6;
  struct qib_ctxtdata *VAR_7;

  if (VAR_3->skip_kctxt_mask & (1 << VAR_4))
   continue;

  VAR_6 = VAR_3->pport + (VAR_4 % VAR_3->num_pports);

  VAR_7 = FUNC_4(VAR_6, VAR_4, VAR_3->assigned_node_id);
  if (!VAR_7) {
   FUNC_5(VAR_3,
    "Unable to allocate ctxtdata for Kernel ctxt, failing\n");
   FUNC_1(VAR_3->rcd);
   VAR_3->rcd = ((void*)0);
   return -VAR_0;
  }
  VAR_7->pkeys[0] = VAR_2;
  VAR_7->seq_cnt = 1;
 }
 return 0;
}
