
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int untrusted; } ;
struct intel_iommu {int lock; int segment; int ecap; } ;
struct dmar_domain {int devices; } ;
struct device_domain_info {int bus; int devfn; int ats_supported; int pasid_supported; int pri_supported; int global; int link; struct device* dev; struct dmar_domain* domain; int auxiliary_domains; scalar_t__ auxd_enabled; int * pasid_table; struct intel_iommu* iommu; scalar_t__ ats_qdep; scalar_t__ pri_enabled; scalar_t__ pasid_enabled; scalar_t__ ats_enabled; } ;
struct TYPE_2__ {struct device_domain_info* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device_domain_info* FUNC_1 () ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct device*) ;
 struct device_domain_info* FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct dmar_domain*,struct intel_iommu*) ;
 scalar_t__ FUNC_8 (struct dmar_domain*,struct device*) ;
 scalar_t__ FUNC_9 (struct dmar_domain*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 struct dmar_domain* FUNC_12 (struct device*) ;
 int FUNC_13 (struct device_domain_info*) ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct intel_iommu*,struct dmar_domain*,struct device*,int ) ;
 int FUNC_16 (struct intel_iommu*,struct dmar_domain*,struct device*,int ) ;
 int FUNC_17 (int *,int *) ;
 scalar_t__ FUNC_18 (struct intel_iommu*) ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (struct pci_dev*,int ) ;
 int FUNC_21 (struct pci_dev*) ;
 scalar_t__ FUNC_22 (struct intel_iommu*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,unsigned long) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,unsigned long) ;
 struct pci_dev* FUNC_27 (struct device*) ;

__attribute__((used)) static struct dmar_domain *FUNC_28(struct intel_iommu *VAR_6,
          int VAR_7, int VAR_8,
          struct device *VAR_9,
          struct dmar_domain *VAR_10)
{
 struct dmar_domain *VAR_11 = ((void*)0);
 struct device_domain_info *VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_12 = FUNC_1();
 if (!VAR_12)
  return ((void*)0);

 VAR_12->bus = VAR_7;
 VAR_12->devfn = VAR_8;
 VAR_12->ats_supported = VAR_12->pasid_supported = VAR_12->pri_supported = 0;
 VAR_12->ats_enabled = VAR_12->pasid_enabled = VAR_12->pri_enabled = 0;
 VAR_12->ats_qdep = 0;
 VAR_12->dev = VAR_9;
 VAR_12->domain = VAR_10;
 VAR_12->iommu = VAR_6;
 VAR_12->pasid_table = ((void*)0);
 VAR_12->auxd_enabled = 0;
 FUNC_0(&VAR_12->auxiliary_domains);

 if (VAR_9 && FUNC_3(VAR_9)) {
  struct pci_dev *VAR_15 = FUNC_27(VAR_12->dev);

  if (!VAR_15->untrusted &&
      !FUNC_19() &&
      FUNC_10(VAR_6->ecap) &&
      FUNC_20(VAR_15, VAR_1) &&
      FUNC_4(VAR_15))
   VAR_12->ats_supported = 1;

  if (FUNC_22(VAR_6)) {
   if (FUNC_18(VAR_6)) {
    int VAR_16 = FUNC_21(VAR_15);
    if (VAR_16 >= 0)
     VAR_12->pasid_supported = VAR_16 | 1;
   }

   if (VAR_12->ats_supported && FUNC_11(VAR_6->ecap) &&
       FUNC_20(VAR_15, VAR_2))
    VAR_12->pri_supported = 1;
  }
 }

 FUNC_24(&VAR_4, VAR_13);
 if (VAR_9)
  VAR_11 = FUNC_12(VAR_9);

 if (!VAR_11) {
  struct device_domain_info *VAR_17;
  VAR_17 = FUNC_6(VAR_6->segment, VAR_7, VAR_8);
  if (VAR_17) {
   VAR_11 = VAR_17->domain;
   VAR_17->dev = VAR_9;
  }
 }

 if (VAR_11) {
  FUNC_26(&VAR_4, VAR_13);
  FUNC_13(VAR_12);

  return VAR_11;
 }

 FUNC_23(&VAR_6->lock);
 VAR_14 = FUNC_7(VAR_10, VAR_6);
 FUNC_25(&VAR_6->lock);

 if (VAR_14) {
  FUNC_26(&VAR_4, VAR_13);
  FUNC_13(VAR_12);
  return ((void*)0);
 }

 FUNC_17(&VAR_12->link, &VAR_10->devices);
 FUNC_17(&VAR_12->global, &VAR_3);
 if (VAR_9)
  VAR_9->archdata.iommu = VAR_12;
 FUNC_26(&VAR_4, VAR_13);


 if (VAR_9 && FUNC_3(VAR_9) && FUNC_22(VAR_6)) {
  VAR_14 = FUNC_14(VAR_9);
  if (VAR_14) {
   FUNC_2(VAR_9, "PASID table allocation failed\n");
   FUNC_5(VAR_9);
   return ((void*)0);
  }


  FUNC_23(&VAR_6->lock);
  if (VAR_5 && FUNC_9(VAR_10))
   VAR_14 = FUNC_15(VAR_6, VAR_10,
     VAR_9, VAR_0);
  else
   VAR_14 = FUNC_16(VAR_6, VAR_10,
     VAR_9, VAR_0);
  FUNC_25(&VAR_6->lock);
  if (VAR_14) {
   FUNC_2(VAR_9, "Setup RID2PASID failed\n");
   FUNC_5(VAR_9);
   return ((void*)0);
  }
 }

 if (VAR_9 && FUNC_8(VAR_10, VAR_9)) {
  FUNC_2(VAR_9, "Domain context map failed\n");
  FUNC_5(VAR_9);
  return ((void*)0);
 }

 return VAR_10;
}
