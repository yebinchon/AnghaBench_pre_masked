
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u16 ;
struct TYPE_2__ {int (* flush_iotlb ) (struct intel_iommu*,int ,int,unsigned int,int ) ;} ;
struct intel_iommu {size_t seq_id; int cap; TYPE_1__ flush; } ;
struct dmar_domain {int * iommu_did; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (struct dmar_domain*,int,unsigned int) ;
 int FUNC_7 (struct intel_iommu*,int ,int,unsigned int,int ) ;
 int FUNC_8 (struct intel_iommu*,int ,int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_9(struct intel_iommu *VAR_3,
      struct dmar_domain *VAR_4,
      unsigned long VAR_5, unsigned int VAR_6,
      int VAR_7, int VAR_8)
{
 unsigned int VAR_9 = FUNC_5(FUNC_1(VAR_6));
 uint64_t VAR_10 = (uint64_t)VAR_5 << VAR_2;
 u16 VAR_11 = VAR_4->iommu_did[VAR_3->seq_id];

 FUNC_0(VAR_6 == 0);

 if (VAR_7)
  VAR_7 = 1 << 6;






 if (!FUNC_4(VAR_3->cap) || VAR_9 > FUNC_3(VAR_3->cap))
  VAR_3->flush.flush_iotlb(VAR_3, VAR_11, 0, 0,
      VAR_0);
 else
  VAR_3->flush.flush_iotlb(VAR_3, VAR_11, VAR_10 | VAR_7, VAR_9,
      VAR_1);





 if (!FUNC_2(VAR_3->cap) || !VAR_8)
  FUNC_6(VAR_4, VAR_10, VAR_9);
}
