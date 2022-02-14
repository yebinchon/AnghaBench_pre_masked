
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qm_eqc {int dw6; void* base_h; void* base_l; int dw3; } ;
struct qm_aeqc {int dw6; void* base_h; void* base_l; int dw3; } ;
struct hisi_qm {scalar_t__ ver; int aeqe_dma; int eqe_dma; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,struct qm_eqc*,int,int ) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,int ,int,int ) ;
 int FUNC_3 (struct qm_eqc*) ;
 struct qm_eqc* FUNC_4 (int,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct hisi_qm*) ;
 int FUNC_7 (struct hisi_qm*,int ,int ,int ,int ) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct hisi_qm *VAR_9)
{
 struct device *VAR_10 = &VAR_9->pdev->dev;
 struct qm_eqc *VAR_11;
 struct qm_aeqc *VAR_12;
 dma_addr_t VAR_13;
 dma_addr_t VAR_14;
 int VAR_15;

 FUNC_6(VAR_9);

 VAR_11 = FUNC_4(sizeof(struct qm_eqc), VAR_2);
 if (!VAR_11)
  return -VAR_1;
 VAR_13 = FUNC_0(VAR_10, VAR_11, sizeof(struct qm_eqc),
     VAR_0);
 if (FUNC_1(VAR_10, VAR_13)) {
  FUNC_3(VAR_11);
  return -VAR_1;
 }

 VAR_11->base_l = FUNC_5(VAR_9->eqe_dma);
 VAR_11->base_h = FUNC_8(VAR_9->eqe_dma);
 if (VAR_9->ver == VAR_5)
  VAR_11->dw3 = VAR_4;
 VAR_11->dw6 = (VAR_8 - 1) | (1 << VAR_3);
 VAR_15 = FUNC_7(VAR_9, VAR_7, VAR_13, 0, 0);
 FUNC_2(VAR_10, VAR_13, sizeof(struct qm_eqc), VAR_0);
 FUNC_3(VAR_11);
 if (VAR_15)
  return VAR_15;

 VAR_12 = FUNC_4(sizeof(struct qm_aeqc), VAR_2);
 if (!VAR_12)
  return -VAR_1;
 VAR_14 = FUNC_0(VAR_10, VAR_12, sizeof(struct qm_aeqc),
      VAR_0);
 if (FUNC_1(VAR_10, VAR_14)) {
  FUNC_3(VAR_12);
  return -VAR_1;
 }

 VAR_12->base_l = FUNC_5(VAR_9->aeqe_dma);
 VAR_12->base_h = FUNC_8(VAR_9->aeqe_dma);
 VAR_12->dw6 = (VAR_8 - 1) | (1 << VAR_3);

 VAR_15 = FUNC_7(VAR_9, VAR_6, VAR_14, 0, 0);
 FUNC_2(VAR_10, VAR_14, sizeof(struct qm_aeqc), VAR_0);
 FUNC_3(VAR_12);

 return VAR_15;
}
