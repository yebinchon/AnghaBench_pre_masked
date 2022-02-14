
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uresp ;
struct qedr_qp {int icid; int qp_id; } ;
struct qedr_dev {scalar_t__ atomic_cap; } ;
struct qedr_create_qp_uresp {int atomic_supported; int qp_id; } ;
struct ib_udata {int dummy; } ;


 int FUNC_0 (struct qedr_dev*,char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct qedr_create_qp_uresp*,int ,int) ;
 int FUNC_2 (struct qedr_dev*,struct qedr_create_qp_uresp*,struct qedr_qp*) ;
 int FUNC_3 (struct qedr_dev*,struct qedr_create_qp_uresp*,struct qedr_qp*) ;
 int FUNC_4 (struct ib_udata*,struct qedr_create_qp_uresp*,int) ;

__attribute__((used)) static int FUNC_5(struct qedr_dev *VAR_1,
         struct qedr_qp *VAR_2, struct ib_udata *VAR_3)
{
 struct qedr_create_qp_uresp VAR_4;
 int VAR_5;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(VAR_1, &VAR_4, VAR_2);
 FUNC_2(VAR_1, &VAR_4, VAR_2);

 VAR_4.atomic_supported = VAR_1->atomic_cap != VAR_0;
 VAR_4.qp_id = VAR_2->qp_id;

 VAR_5 = FUNC_4(VAR_3, &VAR_4, sizeof(VAR_4));
 if (VAR_5)
  FUNC_0(VAR_1,
         "create qp: failed a copy to user space with qp icid=0x%x.\n",
         VAR_2->icid);

 return VAR_5;
}
