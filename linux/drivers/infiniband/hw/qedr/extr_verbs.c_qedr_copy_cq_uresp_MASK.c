
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uresp ;
struct qedr_dev {int dummy; } ;
struct qedr_create_cq_uresp {int icid; int db_offset; } ;
struct qedr_cq {int icid; } ;
struct ib_udata {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct qedr_dev*,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct qedr_create_cq_uresp*,int ,int) ;
 int FUNC_3 (struct ib_udata*,struct qedr_create_cq_uresp*,int) ;

__attribute__((used)) static int FUNC_4(struct qedr_dev *VAR_1,
         struct qedr_cq *VAR_2, struct ib_udata *VAR_3)
{
 struct qedr_create_cq_uresp VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));

 VAR_4.db_offset = FUNC_0(VAR_0);
 VAR_4.icid = VAR_2->icid;

 VAR_5 = FUNC_3(VAR_3, &VAR_4, sizeof(VAR_4));
 if (VAR_5)
  FUNC_1(VAR_1, "copy error cqid=0x%x.\n", VAR_2->icid);

 return VAR_5;
}
