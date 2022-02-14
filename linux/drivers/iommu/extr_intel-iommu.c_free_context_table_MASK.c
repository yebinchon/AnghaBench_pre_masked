
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int lock; struct context_entry* root_entry; } ;
struct context_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct context_entry*) ;
 struct context_entry* FUNC_1 (struct intel_iommu*,int,int,int ) ;
 int FUNC_2 (struct intel_iommu*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct intel_iommu *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;
 struct context_entry *VAR_4;

 FUNC_3(&VAR_1->lock, VAR_3);
 if (!VAR_1->root_entry) {
  goto out;
 }
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_4 = FUNC_1(VAR_1, VAR_2, 0, 0);
  if (VAR_4)
   FUNC_0(VAR_4);

  if (!FUNC_2(VAR_1))
   continue;

  VAR_4 = FUNC_1(VAR_1, VAR_2, 0x80, 0);
  if (VAR_4)
   FUNC_0(VAR_4);

 }
 FUNC_0(VAR_1->root_entry);
 VAR_1->root_entry = ((void*)0);
out:
 FUNC_4(&VAR_1->lock, VAR_3);
}
