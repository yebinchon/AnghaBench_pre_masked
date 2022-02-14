
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qm_cqe {int dummy; } ;
struct TYPE_4__ {int size; int dma; int va; } ;
struct hisi_qp {int qp_id; TYPE_2__ qdma; int wq; int work; int alg_type; struct hisi_qm* qm; } ;
struct hisi_qm {int qp_num; int sqe_size; int qps_lock; int qp_bitmap; struct hisi_qp** qp_array; scalar_t__ use_dma_api; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hisi_qp* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct device*,char*,int ,int *,int) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,int,int *,int ) ;
 int FUNC_7 (struct device*,int,int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct hisi_qp*) ;
 struct hisi_qp* FUNC_10 (int,int ) ;
 int VAR_9 ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

struct hisi_qp *FUNC_14(struct hisi_qm *VAR_10, u8 VAR_11)
{
 struct device *VAR_12 = &VAR_10->pdev->dev;
 struct hisi_qp *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_10(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return FUNC_0(-VAR_2);

 FUNC_12(&VAR_10->qps_lock);

 VAR_14 = FUNC_8(VAR_10->qp_bitmap, VAR_10->qp_num);
 if (VAR_14 >= VAR_10->qp_num) {
  FUNC_13(&VAR_10->qps_lock);
  FUNC_5(&VAR_10->pdev->dev, "QM all queues are busy!\n");
  VAR_15 = -VAR_0;
  goto err_free_qp;
 }
 FUNC_11(VAR_14, VAR_10->qp_bitmap);
 VAR_10->qp_array[VAR_14] = VAR_13;

 FUNC_13(&VAR_10->qps_lock);

 VAR_13->qm = VAR_10;

 if (VAR_10->use_dma_api) {
  VAR_13->qdma.size = VAR_10->sqe_size * VAR_4 +
    sizeof(struct qm_cqe) * VAR_4;
  VAR_13->qdma.va = FUNC_6(VAR_12, VAR_13->qdma.size,
       &VAR_13->qdma.dma, VAR_3);
  if (!VAR_13->qdma.va) {
   VAR_15 = -VAR_2;
   goto err_clear_bit;
  }

  FUNC_4(VAR_12, "allocate qp dma buf(va=%pK, dma=%pad, size=%zx)\n",
   VAR_13->qdma.va, &VAR_13->qdma.dma, VAR_13->qdma.size);
 }

 VAR_13->qp_id = VAR_14;
 VAR_13->alg_type = VAR_11;
 FUNC_1(&VAR_13->work, VAR_9);
 VAR_13->wq = FUNC_2("hisi_qm", VAR_8 | VAR_6 |
     VAR_5 | VAR_7, 0);
 if (!VAR_13->wq) {
  VAR_15 = -VAR_1;
  goto err_free_qp_mem;
 }

 return VAR_13;

err_free_qp_mem:
 if (VAR_10->use_dma_api)
  FUNC_7(VAR_12, VAR_13->qdma.size, VAR_13->qdma.va,
      VAR_13->qdma.dma);
err_clear_bit:
 FUNC_12(&VAR_10->qps_lock);
 VAR_10->qp_array[VAR_14] = ((void*)0);
 FUNC_3(VAR_14, VAR_10->qp_bitmap);
 FUNC_13(&VAR_10->qps_lock);
err_free_qp:
 FUNC_9(VAR_13);
 return FUNC_0(VAR_15);
}
