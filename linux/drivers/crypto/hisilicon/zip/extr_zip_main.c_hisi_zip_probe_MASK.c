
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ device; int dev; } ;
struct hisi_qm {int ver; scalar_t__ fun_type; int use_dma_api; void* qp_num; void* qp_base; int dev_name; int sqe_size; struct pci_dev* pdev; } ;
struct hisi_zip {struct hisi_qm qm; } ;
typedef enum qm_hw_ver { ____Placeholder_qm_hw_ver } qm_hw_ver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *,char*,...) ;
 struct hisi_zip* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct hisi_qm*,void**,void**) ;
 int FUNC_4 (struct hisi_qm*) ;
 int FUNC_5 (struct hisi_qm*) ;
 int FUNC_6 (struct hisi_qm*) ;
 int FUNC_7 (struct hisi_zip*) ;
 int FUNC_8 (struct hisi_zip*) ;
 int VAR_13 ;
 int FUNC_9 (struct hisi_zip*) ;
 int FUNC_10 (struct pci_dev*,struct hisi_zip*) ;
 void* VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_16, const struct pci_device_id *VAR_17)
{
 struct hisi_zip *VAR_18;
 enum qm_hw_ver VAR_19;
 struct hisi_qm *VAR_20;
 int VAR_21;

 VAR_19 = FUNC_2(VAR_16);
 if (VAR_19 == VAR_9)
  return -VAR_0;

 VAR_18 = FUNC_1(&VAR_16->dev, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_1;
 FUNC_10(VAR_16, VAR_18);

 VAR_20 = &VAR_18->qm;
 VAR_20->pdev = VAR_16;
 VAR_20->ver = VAR_19;

 VAR_20->sqe_size = VAR_6;
 VAR_20->dev_name = VAR_13;
 VAR_20->fun_type = (VAR_16->device == VAR_7) ? VAR_8 :
        VAR_12;
 switch (VAR_15) {
 case 0:
  VAR_20->use_dma_api = 1;
  break;
 case 1:
  VAR_20->use_dma_api = 0;
  break;
 case 2:
  VAR_20->use_dma_api = 1;
  break;
 default:
  return -VAR_0;
 }

 VAR_21 = FUNC_4(VAR_20);
 if (VAR_21) {
  FUNC_0(&VAR_16->dev, "Failed to init qm!\n");
  return VAR_21;
 }

 if (VAR_20->fun_type == VAR_8) {
  VAR_21 = FUNC_9(VAR_18);
  if (VAR_21)
   return VAR_21;

  VAR_20->qp_base = VAR_3;
  VAR_20->qp_num = VAR_14;
 } else if (VAR_20->fun_type == VAR_12) {







  if (VAR_20->ver == VAR_10) {
   VAR_20->qp_base = VAR_4;
   VAR_20->qp_num = VAR_5 - VAR_4;
  } else if (VAR_20->ver == VAR_11)

   FUNC_3(VAR_20, &VAR_20->qp_base, &VAR_20->qp_num);
 }

 VAR_21 = FUNC_5(VAR_20);
 if (VAR_21)
  goto err_qm_uninit;

 VAR_21 = FUNC_8(VAR_18);
 if (VAR_21)
  FUNC_0(&VAR_16->dev, "Failed to init debugfs (%d)!\n", VAR_21);

 FUNC_7(VAR_18);

 return 0;

err_qm_uninit:
 FUNC_6(VAR_20);
 return VAR_21;
}
