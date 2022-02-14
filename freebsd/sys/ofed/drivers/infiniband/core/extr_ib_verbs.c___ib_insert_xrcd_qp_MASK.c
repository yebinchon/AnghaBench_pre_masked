
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_xrcd {int tgt_qp_mutex; int tgt_qp_list; } ;
struct ib_qp {int xrcd_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ib_xrcd *VAR_0, struct ib_qp *VAR_1)
{
 FUNC_1(&VAR_0->tgt_qp_mutex);
 FUNC_0(&VAR_1->xrcd_list, &VAR_0->tgt_qp_list);
 FUNC_2(&VAR_0->tgt_qp_mutex);
}
