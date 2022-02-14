
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;
struct hns_roce_qp {int dummy; } ;
struct hns_roce_cq {int lock; int cons_index; } ;


 int FUNC_0 (struct hns_roce_cq*,int ) ;
 scalar_t__ FUNC_1 (struct hns_roce_cq*,struct hns_roce_qp**,struct ib_wc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct hns_roce_cq* FUNC_4 (struct ib_cq*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct ib_cq *VAR_0, int VAR_1,
          struct ib_wc *VAR_2)
{
 struct hns_roce_cq *VAR_3 = FUNC_4(VAR_0);
 struct hns_roce_qp *VAR_4 = ((void*)0);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_3->lock, VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  if (FUNC_1(VAR_3, &VAR_4, VAR_2 + VAR_6))
   break;
 }

 if (VAR_6) {

  FUNC_5();
  FUNC_0(VAR_3, VAR_3->cons_index);
 }

 FUNC_3(&VAR_3->lock, VAR_5);

 return VAR_6;
}
