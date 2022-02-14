
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct device_state {int inv_ctx_cb; } ;
typedef int amd_iommu_invalidate_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_state* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;

int FUNC_5(struct pci_dev *VAR_3,
        amd_iommu_invalidate_ctx VAR_4)
{
 struct device_state *VAR_5;
 unsigned long VAR_6;
 u16 VAR_7;
 int VAR_8;

 if (!FUNC_1())
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_3);

 FUNC_3(&VAR_2, VAR_6);

 VAR_8 = -VAR_0;
 VAR_5 = FUNC_0(VAR_7);
 if (VAR_5 == ((void*)0))
  goto out_unlock;

 VAR_5->inv_ctx_cb = VAR_4;

 VAR_8 = 0;

out_unlock:
 FUNC_4(&VAR_2, VAR_6);

 return VAR_8;
}
