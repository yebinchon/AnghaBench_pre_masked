
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct amd_iommu_device_info {int flags; void* max_pasids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (struct amd_iommu_device_info*,int ,int) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;

int FUNC_7(struct pci_dev *VAR_12,
                          struct amd_iommu_device_info *VAR_13)
{
 int VAR_14;
 int VAR_15;

 if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
  return -VAR_5;

 if (!FUNC_0())
  return -VAR_5;

 FUNC_1(VAR_13, 0, sizeof(*VAR_13));

 if (!FUNC_3()) {
  VAR_15 = FUNC_4(VAR_12, VAR_6);
  if (VAR_15)
   VAR_13->flags |= VAR_0;
 }

 VAR_15 = FUNC_4(VAR_12, VAR_8);
 if (VAR_15)
  VAR_13->flags |= VAR_4;

 VAR_15 = FUNC_4(VAR_12, VAR_7);
 if (VAR_15) {
  int VAR_16;

  VAR_14 = 1 << (9 * (VAR_11 + 1));
  VAR_14 = FUNC_2(VAR_14, (1 << 20));

  VAR_13->flags |= VAR_2;
  VAR_13->max_pasids = FUNC_2(FUNC_5(VAR_12), VAR_14);

  VAR_16 = FUNC_6(VAR_12);
  if (VAR_16 & VAR_9)
   VAR_13->flags |= VAR_1;
  if (VAR_16 & VAR_10)
   VAR_13->flags |= VAR_3;
 }

 return 0;
}
