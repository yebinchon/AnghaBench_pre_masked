
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int pgsize_bitmap; int ias; int oas; int coherent_walk; int iommu_dev; int * tlb; int quirks; } ;
struct TYPE_7__ {int force_aperture; int aperture_end; } ;
struct TYPE_8__ {TYPE_1__ geometry; } ;
struct ipmmu_vmsa_domain {int context_id; TYPE_3__* mmu; int iop; TYPE_6__ cfg; TYPE_2__ io_domain; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {TYPE_4__* root; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,TYPE_6__*,struct ipmmu_vmsa_domain*) ;
 int FUNC_2 (TYPE_4__*,struct ipmmu_vmsa_domain*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (struct ipmmu_vmsa_domain*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct ipmmu_vmsa_domain *VAR_7)
{
 int VAR_8;
 VAR_7->cfg.quirks = VAR_2;
 VAR_7->cfg.pgsize_bitmap = VAR_3 | VAR_4 | VAR_5;
 VAR_7->cfg.ias = 32;
 VAR_7->cfg.oas = 40;
 VAR_7->cfg.tlb = &VAR_6;
 VAR_7->io_domain.geometry.aperture_end = FUNC_0(32);
 VAR_7->io_domain.geometry.force_aperture = 1;




 VAR_7->cfg.coherent_walk = 0;
 VAR_7->cfg.iommu_dev = VAR_7->mmu->root->dev;




 VAR_8 = FUNC_2(VAR_7->mmu->root, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7->context_id = VAR_8;

 VAR_7->iop = FUNC_1(VAR_0, &VAR_7->cfg,
        VAR_7);
 if (!VAR_7->iop) {
  FUNC_3(VAR_7->mmu->root,
       VAR_7->context_id);
  return -VAR_1;
 }

 FUNC_4(VAR_7);
 return 0;
}
