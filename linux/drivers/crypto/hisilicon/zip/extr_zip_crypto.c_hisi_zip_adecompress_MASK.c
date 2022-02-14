
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hisi_zip_req {int dummy; } ;
struct hisi_zip_qp_ctx {TYPE_2__* qp; } ;
struct hisi_zip_ctx {struct hisi_zip_qp_ctx* qp_ctx; } ;
struct TYPE_3__ {int tfm; } ;
struct acomp_req {int src; TYPE_1__ base; } ;
struct TYPE_4__ {int req_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hisi_zip_req*) ;
 int FUNC_1 (struct hisi_zip_req*) ;
 size_t VAR_1 ;
 struct hisi_zip_ctx* FUNC_2 (int ) ;
 size_t FUNC_3 (int ,int ) ;
 struct hisi_zip_req* FUNC_4 (struct acomp_req*,struct hisi_zip_qp_ctx*,size_t,int) ;
 int FUNC_5 (struct hisi_zip_req*,struct hisi_zip_qp_ctx*) ;
 int FUNC_6 (struct hisi_zip_qp_ctx*,struct hisi_zip_req*) ;

__attribute__((used)) static int FUNC_7(struct acomp_req *VAR_2)
{
 struct hisi_zip_ctx *VAR_3 = FUNC_2(VAR_2->base.tfm);
 struct hisi_zip_qp_ctx *VAR_4 = &VAR_3->qp_ctx[VAR_1];
 struct hisi_zip_req *VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_2->src, VAR_4->qp->req_type);

 VAR_5 = FUNC_4(VAR_2, VAR_4, VAR_6, 0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_7 = FUNC_5(VAR_5, VAR_4);
 if (VAR_7 != -VAR_0)
  FUNC_6(VAR_4, VAR_5);

 return VAR_7;
}
