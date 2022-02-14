
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hisi_zip_sqe {int dummy; } ;
struct hisi_zip_req {int req_id; void* hw_src; int src; void* hw_dst; int dst; int dlen; int slen; void* dma_dst; void* dma_src; } ;
struct hisi_acc_sgl_pool {int dummy; } ;
struct hisi_zip_qp_ctx {struct hisi_acc_sgl_pool sgl_pool; struct hisi_qp* qp; struct hisi_zip_sqe zip_sqe; } ;
struct hisi_qp {int req_type; TYPE_2__* qm; } ;
struct device {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct device*,int ,struct hisi_acc_sgl_pool*,int,void**) ;
 int FUNC_3 (struct device*,int ,void*) ;
 int FUNC_4 (struct hisi_qp*,struct hisi_zip_sqe*) ;
 int FUNC_5 (struct hisi_zip_sqe*,int ) ;
 int FUNC_6 (struct hisi_zip_sqe*,int) ;
 int FUNC_7 (struct hisi_zip_sqe*,int ,void*,void*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct hisi_zip_req *VAR_3,
       struct hisi_zip_qp_ctx *VAR_4)
{
 struct hisi_zip_sqe *VAR_5 = &VAR_4->zip_sqe;
 struct hisi_qp *VAR_6 = VAR_4->qp;
 struct device *VAR_7 = &VAR_6->qm->pdev->dev;
 struct hisi_acc_sgl_pool *VAR_8 = &VAR_4->sgl_pool;
 dma_addr_t VAR_9;
 dma_addr_t VAR_10;
 int VAR_11;

 if (!VAR_3->src || !VAR_3->slen || !VAR_3->dst || !VAR_3->dlen)
  return -VAR_1;

 VAR_3->hw_src = FUNC_2(VAR_7, VAR_3->src, VAR_8,
          VAR_3->req_id << 1, &VAR_9);
 if (FUNC_0(VAR_3->hw_src))
  return FUNC_1(VAR_3->hw_src);
 VAR_3->dma_src = VAR_9;

 VAR_3->hw_dst = FUNC_2(VAR_7, VAR_3->dst, VAR_8,
          (VAR_3->req_id << 1) + 1,
          &VAR_10);
 if (FUNC_0(VAR_3->hw_dst)) {
  VAR_11 = FUNC_1(VAR_3->hw_dst);
  goto err_unmap_input;
 }
 VAR_3->dma_dst = VAR_10;

 FUNC_7(VAR_5, VAR_6->req_type, VAR_9, VAR_10, VAR_3->slen,
     VAR_3->dlen);
 FUNC_5(VAR_5, VAR_2);
 FUNC_6(VAR_5, VAR_3->req_id);


 VAR_11 = FUNC_4(VAR_6, VAR_5);
 if (VAR_11 < 0)
  goto err_unmap_output;

 return -VAR_0;

err_unmap_output:
 FUNC_3(VAR_7, VAR_3->dst, VAR_3->hw_dst);
err_unmap_input:
 FUNC_3(VAR_7, VAR_3->src, VAR_3->hw_src);
 return VAR_11;
}
