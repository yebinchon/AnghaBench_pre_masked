
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qm_sqc {int cq_num; int dw6; void* w8; int dw3; int w13; } ;
struct qm_cqc {int cq_num; int dw6; void* w8; int dw3; int w13; } ;
struct hisi_qp {int cqe_dma; int alg_type; int sqe_dma; struct hisi_qm* qm; } ;
struct hisi_qm {int ver; int sqe_size; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef enum qm_hw_ver { ____Placeholder_qm_hw_ver } qm_hw_ver ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qm_sqc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;
 void* VAR_9 ;
 int FUNC_6 (struct device*,struct qm_sqc*,int,int ) ;
 scalar_t__ FUNC_7 (struct device*,int ) ;
 int FUNC_8 (struct device*,int ,int,int ) ;
 int FUNC_9 (struct qm_sqc*) ;
 struct qm_sqc* FUNC_10 (int,int ) ;
 int FUNC_11 (struct hisi_qp*) ;
 int FUNC_12 (struct hisi_qm*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_13(struct hisi_qp *VAR_10, int VAR_11, int VAR_12)
{
 struct hisi_qm *VAR_13 = VAR_10->qm;
 struct device *VAR_14 = &VAR_13->pdev->dev;
 enum qm_hw_ver VAR_15 = VAR_13->ver;
 struct qm_sqc *VAR_16;
 struct qm_cqc *VAR_17;
 dma_addr_t VAR_18;
 dma_addr_t VAR_19;
 int VAR_20;

 FUNC_11(VAR_10);

 VAR_16 = FUNC_10(sizeof(struct qm_sqc), VAR_2);
 if (!VAR_16)
  return -VAR_1;
 VAR_18 = FUNC_6(VAR_14, VAR_16, sizeof(struct qm_sqc),
     VAR_0);
 if (FUNC_7(VAR_14, VAR_18)) {
  FUNC_9(VAR_16);
  return -VAR_1;
 }

 FUNC_0(VAR_16, VAR_10->sqe_dma, VAR_12);
 if (VAR_15 == VAR_5) {
  VAR_16->dw3 = FUNC_3(0, 0, 0, VAR_13->sqe_size);
  VAR_16->w8 = VAR_9 - 1;
 } else if (VAR_15 == VAR_6) {
  VAR_16->dw3 = FUNC_4(VAR_13->sqe_size);
  VAR_16->w8 = 0;
 }
 VAR_16->cq_num = VAR_11;
 VAR_16->w13 = FUNC_5(0, 1, VAR_10->alg_type);

 VAR_20 = FUNC_12(VAR_13, VAR_8, VAR_18, VAR_11, 0);
 FUNC_8(VAR_14, VAR_18, sizeof(struct qm_sqc), VAR_0);
 FUNC_9(VAR_16);
 if (VAR_20)
  return VAR_20;

 VAR_17 = FUNC_10(sizeof(struct qm_cqc), VAR_2);
 if (!VAR_17)
  return -VAR_1;
 VAR_19 = FUNC_6(VAR_14, VAR_17, sizeof(struct qm_cqc),
     VAR_0);
 if (FUNC_7(VAR_14, VAR_19)) {
  FUNC_9(VAR_17);
  return -VAR_1;
 }

 FUNC_0(VAR_17, VAR_10->cqe_dma, VAR_12);
 if (VAR_15 == VAR_5) {
  VAR_17->dw3 = FUNC_1(0, 0, 0, 4);
  VAR_17->w8 = VAR_9 - 1;
 } else if (VAR_15 == VAR_6) {
  VAR_17->dw3 = FUNC_2(4);
  VAR_17->w8 = 0;
 }
 VAR_17->dw6 = 1 << VAR_4 | 1 << VAR_3;

 VAR_20 = FUNC_12(VAR_13, VAR_7, VAR_19, VAR_11, 0);
 FUNC_8(VAR_14, VAR_19, sizeof(struct qm_cqc), VAR_0);
 FUNC_9(VAR_17);

 return VAR_20;
}
