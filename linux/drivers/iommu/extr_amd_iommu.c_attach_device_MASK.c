
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct protection_domain {int flags; int lock; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int enabled; void* qdep; } ;
struct iommu_dev_data {int lock; TYPE_1__ ats; int pri_tlp; scalar_t__ iommu_v2; int passthrough; int * domain; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct iommu_dev_data*,struct protection_domain*) ;
 int FUNC_2 (struct protection_domain*) ;
 int FUNC_3 (struct protection_domain*) ;
 struct iommu_dev_data* FUNC_4 (struct device*) ;
 void* FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 scalar_t__ FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 struct pci_dev* FUNC_13 (struct device*) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_5,
    struct protection_domain *VAR_6)
{
 struct pci_dev *VAR_7;
 struct iommu_dev_data *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 FUNC_10(&VAR_6->lock, VAR_9);

 VAR_8 = FUNC_4(VAR_5);

 FUNC_9(&VAR_8->lock);

 VAR_10 = -VAR_0;
 if (VAR_8->domain != ((void*)0))
  goto out;

 if (!FUNC_0(VAR_5))
  goto skip_ats_check;

 VAR_7 = FUNC_13(VAR_5);
 if (VAR_6->flags & VAR_3) {
  VAR_10 = -VAR_1;
  if (!VAR_8->passthrough)
   goto out;

  if (VAR_8->iommu_v2) {
   if (FUNC_8(VAR_7) != 0)
    goto out;

   VAR_8->ats.enabled = 1;
   VAR_8->ats.qdep = FUNC_5(VAR_7);
   VAR_8->pri_tlp = FUNC_7(VAR_7);
  }
 } else if (VAR_4 &&
     FUNC_6(VAR_7, VAR_2) == 0) {
  VAR_8->ats.enabled = 1;
  VAR_8->ats.qdep = FUNC_5(VAR_7);
 }

skip_ats_check:
 VAR_10 = 0;

 FUNC_1(VAR_8, VAR_6);






 FUNC_3(VAR_6);

 FUNC_2(VAR_6);

out:
 FUNC_11(&VAR_8->lock);

 FUNC_12(&VAR_6->lock, VAR_9);

 return VAR_10;
}
