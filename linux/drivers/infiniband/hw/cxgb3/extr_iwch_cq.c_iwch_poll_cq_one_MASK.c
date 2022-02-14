
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3_cqe {int dummy; } ;
struct iwch_qp {int lock; } ;
struct iwch_dev {int dummy; } ;
struct iwch_cq {int cq; } ;
struct ib_wc {int dummy; } ;


 int FUNC_0 (struct t3_cqe) ;
 int FUNC_1 (struct iwch_dev*,struct iwch_cq*,struct iwch_qp*,struct ib_wc*) ;
 struct t3_cqe* FUNC_2 (int *) ;
 struct iwch_qp* FUNC_3 (struct iwch_dev*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iwch_dev *VAR_0, struct iwch_cq *VAR_1,
       struct ib_wc *VAR_2)
{
 struct iwch_qp *VAR_3;
 struct t3_cqe *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(&VAR_1->cq);

 if (!VAR_4)
  return 0;

 VAR_3 = FUNC_3(VAR_0, FUNC_0(*VAR_4));
 if (VAR_3) {
  FUNC_4(&VAR_3->lock);
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2);
  FUNC_5(&VAR_3->lock);
 } else {
  VAR_5 = FUNC_1(VAR_0, VAR_1, ((void*)0), VAR_2);
 }
 return VAR_5;
}
