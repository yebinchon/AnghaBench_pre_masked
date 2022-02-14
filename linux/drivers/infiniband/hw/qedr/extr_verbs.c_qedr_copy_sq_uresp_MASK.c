
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_qp {scalar_t__ icid; } ;
struct qedr_dev {int ibdev; } ;
struct qedr_create_qp_uresp {scalar_t__ sq_icid; int sq_db_offset; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct qedr_dev *VAR_1,
          struct qedr_create_qp_uresp *VAR_2,
          struct qedr_qp *VAR_3)
{
 VAR_2->sq_db_offset = FUNC_0(VAR_0);


 if (FUNC_1(&VAR_1->ibdev, 1))
  VAR_2->sq_icid = VAR_3->icid;
 else
  VAR_2->sq_icid = VAR_3->icid + 1;
}
