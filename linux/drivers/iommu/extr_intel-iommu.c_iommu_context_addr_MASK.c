
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
struct root_entry {int lo; int hi; } ;
struct intel_iommu {int node; struct root_entry* root_entry; } ;
struct context_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_iommu*,int*,int) ;
 struct context_entry* FUNC_1 (int ) ;
 struct context_entry* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct intel_iommu*) ;
 unsigned long FUNC_4 (void*) ;

struct context_entry *FUNC_5(struct intel_iommu *VAR_2, u8 VAR_3,
      u8 VAR_4, int VAR_5)
{
 struct root_entry *VAR_6 = &VAR_2->root_entry[VAR_3];
 struct context_entry *VAR_7;
 u64 *VAR_8;

 VAR_8 = &VAR_6->lo;
 if (FUNC_3(VAR_2)) {
  if (VAR_4 >= 0x80) {
   VAR_4 -= 0x80;
   VAR_8 = &VAR_6->hi;
  }
  VAR_4 *= 2;
 }
 if (*VAR_8 & 1)
  VAR_7 = FUNC_2(*VAR_8 & VAR_1);
 else {
  unsigned long VAR_9;
  if (!VAR_5)
   return ((void*)0);

  VAR_7 = FUNC_1(VAR_2->node);
  if (!VAR_7)
   return ((void*)0);

  FUNC_0(VAR_2, (void *)VAR_7, VAR_0);
  VAR_9 = FUNC_4((void *)VAR_7);
  *VAR_8 = VAR_9 | 1;
  FUNC_0(VAR_2, VAR_8, sizeof(*VAR_8));
 }
 return &VAR_7[VAR_4];
}
