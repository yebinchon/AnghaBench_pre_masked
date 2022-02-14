
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct hisi_zip_sqe {int tag; int dw3; int produced; } ;
struct hisi_zip_req_q {struct hisi_zip_req* q; } ;
struct hisi_zip_req {int hw_dst; int dst; int hw_src; int src; struct acomp_req* req; } ;
struct hisi_zip_qp_ctx {struct hisi_zip_req_q req_q; } ;
struct hisi_qp {scalar_t__ alg_type; int req_type; int qp_id; TYPE_2__* qm; struct hisi_zip_qp_ctx* qp_ctx; } ;
struct device {int dummy; } ;
struct TYPE_6__ {scalar_t__ complete; } ;
struct acomp_req {int dlen; TYPE_3__ base; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acomp_req*,int) ;
 int FUNC_2 (struct device*,char*,char*,int ,int,int) ;
 int FUNC_3 (struct device*,int ,int ) ;
 int FUNC_4 (struct hisi_zip_qp_ctx*,struct hisi_zip_req*) ;

__attribute__((used)) static void FUNC_5(struct hisi_qp *VAR_3, void *VAR_4)
{
 struct hisi_zip_sqe *VAR_5 = VAR_4;
 struct hisi_zip_qp_ctx *VAR_6 = VAR_3->qp_ctx;
 struct hisi_zip_req_q *VAR_7 = &VAR_6->req_q;
 struct hisi_zip_req *VAR_8 = VAR_7->q + VAR_5->tag;
 struct acomp_req *VAR_9 = VAR_8->req;
 struct device *VAR_10 = &VAR_3->qm->pdev->dev;
 u32 VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_11 = VAR_5->dw3 & VAR_1;

 if (VAR_11 != 0 && VAR_11 != VAR_2) {
  FUNC_2(VAR_10, "%scompress fail in qp%u: %u, output: %u\n",
   (VAR_3->alg_type == 0) ? "" : "de", VAR_3->qp_id, VAR_11,
   VAR_5->produced);
  VAR_14 = -VAR_0;
 }
 VAR_12 = VAR_5->produced;

 FUNC_3(VAR_10, VAR_8->src, VAR_8->hw_src);
 FUNC_3(VAR_10, VAR_8->dst, VAR_8->hw_dst);

 VAR_13 = (VAR_3->alg_type == 0) ? FUNC_0(VAR_3->req_type) : 0;
 VAR_9->dlen = VAR_12 + VAR_13;

 if (VAR_9->base.complete)
  FUNC_1(VAR_9, VAR_14);

 FUNC_4(VAR_6, VAR_8);
}
