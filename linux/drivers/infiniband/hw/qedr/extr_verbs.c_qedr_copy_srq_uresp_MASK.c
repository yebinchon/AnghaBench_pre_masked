
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uresp ;
struct qedr_srq {int srq_id; } ;
struct qedr_dev {int dummy; } ;
struct qedr_create_srq_uresp {int srq_id; } ;
struct ib_udata {int dummy; } ;


 int FUNC_0 (struct qedr_dev*,char*) ;
 int FUNC_1 (struct ib_udata*,struct qedr_create_srq_uresp*,int) ;

__attribute__((used)) static int FUNC_2(struct qedr_dev *VAR_0,
          struct qedr_srq *VAR_1, struct ib_udata *VAR_2)
{
 struct qedr_create_srq_uresp VAR_3 = {};
 int VAR_4;

 VAR_3.srq_id = VAR_1->srq_id;

 VAR_4 = FUNC_1(VAR_2, &VAR_3, sizeof(VAR_3));
 if (VAR_4)
  FUNC_0(VAR_0, "create srq: problem copying data to user space\n");

 return VAR_4;
}
