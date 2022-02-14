
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_zip_qp_ctx {struct hisi_qp* qp; } ;
struct hisi_qp {int req_type; struct hisi_zip_qp_ctx* qp_ctx; } ;
struct hisi_qm {int dummy; } ;


 scalar_t__ FUNC_0 (struct hisi_qp*) ;
 int FUNC_1 (struct hisi_qp*) ;
 struct hisi_qp* FUNC_2 (struct hisi_qm*,int) ;
 int FUNC_3 (struct hisi_qp*) ;
 int FUNC_4 (struct hisi_qp*,int ) ;

__attribute__((used)) static int FUNC_5(struct hisi_qm *VAR_0, struct hisi_zip_qp_ctx *VAR_1,
         int VAR_2, int VAR_3)
{
 struct hisi_qp *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_0, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_4->req_type = VAR_3;
 VAR_4->qp_ctx = VAR_1;
 VAR_1->qp = VAR_4;

 VAR_5 = FUNC_4(VAR_4, 0);
 if (VAR_5 < 0)
  goto err_release_qp;

 return 0;

err_release_qp:
 FUNC_3(VAR_4);
 return VAR_5;
}
