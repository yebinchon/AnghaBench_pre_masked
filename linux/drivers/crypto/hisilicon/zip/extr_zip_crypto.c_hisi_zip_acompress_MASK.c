
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hisi_zip_req {int dummy; } ;
struct hisi_zip_qp_ctx {TYPE_1__* qp; } ;
struct hisi_zip_ctx {struct hisi_zip_qp_ctx* qp_ctx; } ;
struct TYPE_4__ {int tfm; } ;
struct acomp_req {int dst; TYPE_2__ base; } ;
struct TYPE_3__ {int req_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hisi_zip_req*) ;
 int FUNC_1 (struct hisi_zip_req*) ;
 size_t VAR_2 ;
 int FUNC_2 (int ,int ) ;
 struct hisi_zip_ctx* FUNC_3 (int ) ;
 struct hisi_zip_req* FUNC_4 (struct acomp_req*,struct hisi_zip_qp_ctx*,size_t,int) ;
 int FUNC_5 (struct hisi_zip_req*,struct hisi_zip_qp_ctx*) ;
 int FUNC_6 (struct hisi_zip_qp_ctx*,struct hisi_zip_req*) ;

__attribute__((used)) static int FUNC_7(struct acomp_req *VAR_3)
{
 struct hisi_zip_ctx *VAR_4 = FUNC_3(VAR_3->base.tfm);
 struct hisi_zip_qp_ctx *VAR_5 = &VAR_4->qp_ctx[VAR_2];
 struct hisi_zip_req *VAR_6;
 int VAR_7;
 int VAR_8;


 VAR_7 = FUNC_2(VAR_3->dst, VAR_5->qp->req_type);
 if (VAR_7 < 0)
  return -VAR_1;

 VAR_6 = FUNC_4(VAR_3, VAR_5, (size_t)VAR_7, 1);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_8 = FUNC_5(VAR_6, VAR_5);
 if (VAR_8 != -VAR_0)
  FUNC_6(VAR_5, VAR_6);

 return VAR_8;
}
