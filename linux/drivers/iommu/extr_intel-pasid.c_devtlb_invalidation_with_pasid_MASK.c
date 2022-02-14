
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct intel_iommu {int dummy; } ;
struct device_domain_info {int bus; int devfn; int ats_qdep; int pfsid; int ats_enabled; } ;
struct TYPE_2__ {struct device_domain_info* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct intel_iommu*,int,int,int,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct intel_iommu *VAR_1,
          struct device *VAR_2, int VAR_3)
{
 struct device_domain_info *VAR_4;
 u16 VAR_5, VAR_6, VAR_7;

 VAR_4 = VAR_2->archdata.iommu;
 if (!VAR_4 || !VAR_4->ats_enabled)
  return;

 VAR_5 = VAR_4->bus << 8 | VAR_4->devfn;
 VAR_6 = VAR_4->ats_qdep;
 VAR_7 = VAR_4->pfsid;

 FUNC_0(VAR_1, VAR_5, VAR_7, VAR_6, 0, 64 - VAR_0);
}
