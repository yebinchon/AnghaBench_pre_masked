
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_srq {int srq_limit; } ;
struct qedr_device_attr {int max_sge; int max_srq_wr; } ;
struct qedr_dev {struct qedr_device_attr attr; } ;
struct ib_srq_attr {int max_sge; int max_wr; int srq_limit; } ;
struct ib_srq {int device; } ;


 struct qedr_dev* FUNC_0 (int ) ;
 struct qedr_srq* FUNC_1 (struct ib_srq*) ;

int FUNC_2(struct ib_srq *VAR_0, struct ib_srq_attr *VAR_1)
{
 struct qedr_dev *VAR_2 = FUNC_0(VAR_0->device);
 struct qedr_device_attr *VAR_3 = &VAR_2->attr;
 struct qedr_srq *VAR_4 = FUNC_1(VAR_0);

 VAR_1->srq_limit = VAR_4->srq_limit;
 VAR_1->max_wr = VAR_3->max_srq_wr;
 VAR_1->max_sge = VAR_3->max_sge;

 return 0;
}
