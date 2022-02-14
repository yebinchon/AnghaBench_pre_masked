
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_device_id {int dummy; } ;
struct device {int dummy; } ;
struct vio_dev {int unit_address; int irq; struct device dev; } ;
struct tpm_chip {int dev; } ;
struct ibmvtpm_crq_queue {int num_entry; struct ibmvtpm_crq* crq_addr; scalar_t__ index; } ;
struct ibmvtpm_dev {int crq_dma_handle; int rtce_lock; int wq; struct ibmvtpm_crq_queue crq_queue; struct vio_dev* vdev; struct device* dev; } ;
struct ibmvtpm_crq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct tpm_chip*) ;
 int FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (int *,struct ibmvtpm_dev*) ;
 int FUNC_5 (struct device*,struct ibmvtpm_crq*,int,int ) ;
 scalar_t__ FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct device*,int ,int,int ) ;
 int FUNC_8 (unsigned long) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct ibmvtpm_dev*) ;
 int FUNC_11 (struct ibmvtpm_dev*) ;
 int FUNC_12 (struct ibmvtpm_dev*) ;
 int VAR_8 ;
 int FUNC_13 (struct ibmvtpm_dev*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ibmvtpm_dev*) ;
 struct ibmvtpm_dev* FUNC_16 (int,int ) ;
 int FUNC_17 (int ,int ,...) ;
 int FUNC_18 (int ,int ,int ,int ,struct ibmvtpm_dev*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct tpm_chip*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct tpm_chip* FUNC_21 (struct device*,int *) ;
 int FUNC_22 (struct vio_dev*) ;

__attribute__((used)) static int FUNC_23(struct vio_dev *VAR_11,
       const struct vio_device_id *VAR_12)
{
 struct ibmvtpm_dev *VAR_13;
 struct device *VAR_14 = &VAR_11->dev;
 struct ibmvtpm_crq_queue *VAR_15;
 struct tpm_chip *VAR_16;
 int VAR_17 = -VAR_2, VAR_18;

 VAR_16 = FUNC_21(VAR_14, &VAR_9);
 if (FUNC_1(VAR_16))
  return FUNC_2(VAR_16);

 VAR_13 = FUNC_16(sizeof(struct ibmvtpm_dev), VAR_3);
 if (!VAR_13) {
  FUNC_3(VAR_14, "kzalloc for ibmvtpm failed\n");
  goto cleanup;
 }

 VAR_13->dev = VAR_14;
 VAR_13->vdev = VAR_11;

 VAR_15 = &VAR_13->crq_queue;
 VAR_15->crq_addr = (struct ibmvtpm_crq *)FUNC_9(VAR_3);
 if (!VAR_15->crq_addr) {
  FUNC_3(VAR_14, "Unable to allocate memory for crq_addr\n");
  goto cleanup;
 }

 VAR_15->num_entry = VAR_0 / sizeof(*VAR_15->crq_addr);
 VAR_13->crq_dma_handle = FUNC_5(VAR_14, VAR_15->crq_addr,
       VAR_0,
       VAR_1);

 if (FUNC_6(VAR_14, VAR_13->crq_dma_handle)) {
  FUNC_3(VAR_14, "dma mapping failed\n");
  goto cleanup;
 }

 VAR_17 = FUNC_17(VAR_6, VAR_11->unit_address,
    VAR_13->crq_dma_handle, VAR_0);
 if (VAR_17 == VAR_7)
  VAR_17 = FUNC_13(VAR_13);

 if (VAR_17) {
  FUNC_3(VAR_14, "Unable to register CRQ rc=%d\n", VAR_17);
  goto reg_crq_cleanup;
 }

 VAR_17 = FUNC_18(VAR_11->irq, VAR_8, 0,
    VAR_10, VAR_13);
 if (VAR_17) {
  FUNC_3(VAR_14, "Error %d register irq 0x%x\n", VAR_17, VAR_11->irq);
  goto init_irq_cleanup;
 }

 VAR_17 = FUNC_22(VAR_11);
 if (VAR_17) {
  FUNC_3(VAR_14, "Error %d enabling interrupts\n", VAR_17);
  goto init_irq_cleanup;
 }

 FUNC_14(&VAR_13->wq);

 VAR_15->index = 0;

 FUNC_4(&VAR_16->dev, VAR_13);

 FUNC_19(&VAR_13->rtce_lock);

 VAR_17 = FUNC_12(VAR_13);
 if (VAR_17)
  goto init_irq_cleanup;

 VAR_17 = FUNC_11(VAR_13);
 if (VAR_17)
  goto init_irq_cleanup;

 VAR_17 = FUNC_10(VAR_13);
 if (VAR_17)
  goto init_irq_cleanup;

 return FUNC_20(VAR_16);
init_irq_cleanup:
 do {
  VAR_18 = FUNC_17(VAR_5, VAR_11->unit_address);
 } while (VAR_18 == VAR_4 || FUNC_0(VAR_18));
reg_crq_cleanup:
 FUNC_7(VAR_14, VAR_13->crq_dma_handle, VAR_0,
    VAR_1);
cleanup:
 if (VAR_13) {
  if (VAR_15->crq_addr)
   FUNC_8((unsigned long)VAR_15->crq_addr);
  FUNC_15(VAR_13);
 }

 return VAR_17;
}
