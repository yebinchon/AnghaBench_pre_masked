
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dev; } ;
struct pasid_state {int lock; TYPE_1__* pri; scalar_t__ invalid; } ;
struct notifier_block {int dummy; } ;
struct iommu_dev_data {scalar_t__ defer_attach; } ;
struct fault {int tag; int finish; int work; int flags; int pasid; struct pasid_state* state; int address; struct device_state* dev_state; } ;
struct device_state {struct pci_dev* pdev; } ;
struct amd_iommu_fault {int tag; int device_id; int flags; int pasid; int address; } ;
struct TYPE_2__ {int finish; int inflight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct pci_dev*,int ,int ,int) ;
 int * VAR_5 ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int FUNC_4 (struct device_state*,struct pasid_state*,int) ;
 struct iommu_dev_data* FUNC_5 (int *) ;
 struct device_state* FUNC_6 (int) ;
 struct pasid_state* FUNC_7 (struct device_state*,int ) ;
 int VAR_7 ;
 struct fault* FUNC_8 (int,int ) ;
 struct pci_dev* FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct device_state*) ;
 int FUNC_11 (struct pasid_state*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct notifier_block *VAR_8, unsigned long VAR_9, void *VAR_10)
{
 struct amd_iommu_fault *VAR_11;
 struct pasid_state *VAR_12;
 struct device_state *VAR_13;
 unsigned long VAR_14;
 struct fault *VAR_15;
 bool VAR_16;
 u16 VAR_17, VAR_18;
 int VAR_19;
 struct iommu_dev_data *VAR_20;
 struct pci_dev *VAR_21 = ((void*)0);

 VAR_11 = VAR_10;
 VAR_17 = VAR_11->tag & 0x1ff;
 VAR_16 = (VAR_11->tag >> 9) & 1;

 VAR_18 = VAR_11->device_id;
 VAR_21 = FUNC_9(0, FUNC_1(VAR_18),
        VAR_18 & 0xff);
 if (!VAR_21)
  return -VAR_0;
 VAR_20 = FUNC_5(&VAR_21->dev);


 VAR_19 = VAR_2;
 if (FUNC_15(VAR_5[VAR_18])
  && VAR_20->defer_attach) {
  FUNC_2(VAR_21, VAR_11->pasid,
           VAR_4, VAR_17);
  goto out;
 }

 VAR_13 = FUNC_6(VAR_11->device_id);
 if (VAR_13 == ((void*)0))
  goto out;

 VAR_12 = FUNC_7(VAR_13, VAR_11->pasid);
 if (VAR_12 == ((void*)0) || VAR_12->invalid) {

  FUNC_2(VAR_13->pdev, VAR_11->pasid,
           VAR_4, VAR_17);
  goto out_drop_state;
 }

 FUNC_13(&VAR_12->lock, VAR_14);
 FUNC_3(&VAR_12->pri[VAR_17].inflight);
 if (VAR_16)
  VAR_12->pri[VAR_17].finish = 1;
 FUNC_14(&VAR_12->lock, VAR_14);

 VAR_15 = FUNC_8(sizeof(*VAR_15), VAR_1);
 if (VAR_15 == ((void*)0)) {

  FUNC_4(VAR_13, VAR_12, VAR_17);
  goto out_drop_state;
 }

 VAR_15->dev_state = VAR_13;
 VAR_15->address = VAR_11->address;
 VAR_15->state = VAR_12;
 VAR_15->tag = VAR_17;
 VAR_15->finish = VAR_16;
 VAR_15->pasid = VAR_11->pasid;
 VAR_15->flags = VAR_11->flags;
 FUNC_0(&VAR_15->work, VAR_6);

 FUNC_12(VAR_7, &VAR_15->work);

 VAR_19 = VAR_3;

out_drop_state:

 if (VAR_19 != VAR_3 && VAR_12)
  FUNC_11(VAR_12);

 FUNC_10(VAR_13);

out:
 return VAR_19;
}
