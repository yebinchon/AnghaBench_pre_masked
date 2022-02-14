
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_qp {int icid; } ;
struct qedr_dev {int ibdev; } ;
struct qedr_create_qp_uresp {int rq_icid; void* rq_db_offset; void* rq_db2_offset; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct qedr_dev *VAR_3,
          struct qedr_create_qp_uresp *VAR_4,
          struct qedr_qp *VAR_5)
{

 if (FUNC_1(&VAR_3->ibdev, 1)) {
  VAR_4->rq_db_offset =
      FUNC_0(VAR_1);
  VAR_4->rq_db2_offset = FUNC_0(VAR_0);
 } else {
  VAR_4->rq_db_offset =
      FUNC_0(VAR_2);
 }

 VAR_4->rq_icid = VAR_5->icid;
}
