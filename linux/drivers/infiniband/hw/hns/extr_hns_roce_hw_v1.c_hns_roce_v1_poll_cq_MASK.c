
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;
struct hns_roce_qp {int dummy; } ;
struct hns_roce_cq {int* tptr_addr; int cons_index; int cq_depth; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct hns_roce_cq*,int) ;
 int FUNC_1 (struct hns_roce_cq*,struct hns_roce_qp**,struct ib_wc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct hns_roce_cq* FUNC_4 (struct ib_cq*) ;
 int FUNC_5 () ;

int FUNC_6(struct ib_cq *VAR_1, int VAR_2, struct ib_wc *VAR_3)
{
 struct hns_roce_cq *VAR_4 = FUNC_4(VAR_1);
 struct hns_roce_qp *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 FUNC_2(&VAR_4->lock, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  VAR_8 = FUNC_1(VAR_4, &VAR_5, VAR_3 + VAR_7);
  if (VAR_8)
   break;
 }

 if (VAR_7) {
  *VAR_4->tptr_addr = VAR_4->cons_index &
   ((VAR_4->cq_depth << 1) - 1);


  FUNC_5();
  FUNC_0(VAR_4, VAR_4->cons_index);
 }

 FUNC_3(&VAR_4->lock, VAR_6);

 if (VAR_8 == 0 || VAR_8 == -VAR_0)
  return VAR_7;
 else
  return VAR_8;
}
