
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int (* flush_iotlb ) (struct intel_iommu*,int,int ,int ,int ) ;int (* flush_context ) (struct intel_iommu*,int,int,int ,int ) ;} ;
struct intel_iommu {TYPE_1__ flush; int lock; } ;
struct context_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_iommu*,struct context_entry*,int) ;
 int FUNC_1 (struct context_entry*) ;
 int FUNC_2 (struct context_entry*) ;
 struct context_entry* FUNC_3 (struct intel_iommu*,int,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct intel_iommu*,int,int,int ,int ) ;
 int FUNC_7 (struct intel_iommu*,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct intel_iommu *VAR_3, u8 VAR_4, u8 VAR_5)
{
 unsigned long VAR_6;
 struct context_entry *VAR_7;
 u16 VAR_8;

 if (!VAR_3)
  return;

 FUNC_4(&VAR_3->lock, VAR_6);
 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, 0);
 if (!VAR_7) {
  FUNC_5(&VAR_3->lock, VAR_6);
  return;
 }
 VAR_8 = FUNC_2(VAR_7);
 FUNC_1(VAR_7);
 FUNC_0(VAR_3, VAR_7, sizeof(*VAR_7));
 FUNC_5(&VAR_3->lock, VAR_6);
 VAR_3->flush.flush_context(VAR_3,
       VAR_8,
       (((u16)VAR_4) << 8) | VAR_5,
       VAR_1,
       VAR_0);
 VAR_3->flush.flush_iotlb(VAR_3,
     VAR_8,
     0,
     0,
     VAR_2);
}
