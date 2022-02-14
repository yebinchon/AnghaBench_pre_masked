
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_xrcd {int usecnt; int tgt_qp_mutex; } ;
struct ib_qp {int xrcd_list; int usecnt; struct ib_xrcd* xrcd; struct ib_qp* real_qp; } ;


 int FUNC_0 (struct ib_xrcd*,struct ib_qp*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ib_qp*) ;
 int FUNC_4 (struct ib_qp*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ib_qp *VAR_0)
{
 struct ib_xrcd *VAR_1;
 struct ib_qp *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->real_qp;
 VAR_1 = VAR_2->xrcd;

 FUNC_6(&VAR_1->tgt_qp_mutex);
 FUNC_3(VAR_0);
 if (FUNC_2(&VAR_2->usecnt) == 0)
  FUNC_5(&VAR_2->xrcd_list);
 else
  VAR_2 = ((void*)0);
 FUNC_7(&VAR_1->tgt_qp_mutex);

 if (VAR_2) {
  VAR_3 = FUNC_4(VAR_2);
  if (!VAR_3)
   FUNC_1(&VAR_1->usecnt);
  else
   FUNC_0(VAR_1, VAR_2);
 }

 return 0;
}
