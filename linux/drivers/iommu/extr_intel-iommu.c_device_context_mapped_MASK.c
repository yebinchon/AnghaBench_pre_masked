
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_iommu {int lock; } ;
struct context_entry {int dummy; } ;


 int FUNC_0 (struct context_entry*) ;
 struct context_entry* FUNC_1 (struct intel_iommu*,int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct intel_iommu *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct context_entry *VAR_3;
 int VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_2(&VAR_0->lock, VAR_5);
 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, 0);
 if (VAR_3)
  VAR_4 = FUNC_0(VAR_3);
 FUNC_3(&VAR_0->lock, VAR_5);
 return VAR_4;
}
