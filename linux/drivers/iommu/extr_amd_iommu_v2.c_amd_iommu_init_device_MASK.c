
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct iommu_group {int dummy; } ;
struct device_state {int max_pasids; int * states; int * domain; int list; int count; scalar_t__ pasid_levels; int devid; struct pci_dev* pdev; int wq; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct iommu_group*) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct iommu_group* FUNC_12 (int *) ;
 int FUNC_13 (struct iommu_group*) ;
 int FUNC_14 (struct device_state*) ;
 struct device_state* FUNC_15 (int,int ) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 () ;
 int VAR_6 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_21(struct pci_dev *VAR_9, int VAR_10)
{
 struct device_state *VAR_11;
 struct iommu_group *VAR_12;
 unsigned long VAR_13;
 int VAR_14, VAR_15;
 u16 VAR_16;

 FUNC_17();

 if (!FUNC_3())
  return -VAR_2;

 if (VAR_10 <= 0 || VAR_10 > (VAR_5 + 1))
  return -VAR_1;

 VAR_16 = FUNC_5(VAR_9);

 VAR_11 = FUNC_15(sizeof(*VAR_11), VAR_4);
 if (VAR_11 == ((void*)0))
  return -VAR_3;

 FUNC_18(&VAR_11->lock);
 FUNC_8(&VAR_11->wq);
 VAR_11->pdev = VAR_9;
 VAR_11->devid = VAR_16;

 VAR_15 = VAR_10;
 for (VAR_11->pasid_levels = 0; (VAR_15 - 1) & ~0x1ff; VAR_15 >>= 9)
  VAR_11->pasid_levels += 1;

 FUNC_4(&VAR_11->count, 1);
 VAR_11->max_pasids = VAR_10;

 VAR_14 = -VAR_3;
 VAR_11->states = (void *)FUNC_7(VAR_4);
 if (VAR_11->states == ((void*)0))
  goto out_free_dev_state;

 VAR_11->domain = FUNC_10(&VAR_6);
 if (VAR_11->domain == ((void*)0))
  goto out_free_states;

 FUNC_1(VAR_11->domain);

 VAR_14 = FUNC_2(VAR_11->domain, VAR_10);
 if (VAR_14)
  goto out_free_domain;

 VAR_12 = FUNC_12(&VAR_9->dev);
 if (!VAR_12) {
  VAR_14 = -VAR_1;
  goto out_free_domain;
 }

 VAR_14 = FUNC_9(VAR_11->domain, VAR_12);
 if (VAR_14 != 0)
  goto out_drop_group;

 FUNC_13(VAR_12);

 FUNC_19(&VAR_8, VAR_13);

 if (FUNC_0(VAR_16) != ((void*)0)) {
  FUNC_20(&VAR_8, VAR_13);
  VAR_14 = -VAR_0;
  goto out_free_domain;
 }

 FUNC_16(&VAR_11->list, &VAR_7);

 FUNC_20(&VAR_8, VAR_13);

 return 0;

out_drop_group:
 FUNC_13(VAR_12);

out_free_domain:
 FUNC_11(VAR_11->domain);

out_free_states:
 FUNC_6((unsigned long)VAR_11->states);

out_free_dev_state:
 FUNC_14(VAR_11);

 return VAR_14;
}
