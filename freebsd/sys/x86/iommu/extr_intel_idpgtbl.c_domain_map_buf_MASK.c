
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int uintmax_t ;
typedef int uint64_t ;
struct dmar_unit {int hw_ecap; int hw_cap; } ;
struct dmar_domain {int flags; unsigned long long agaw; struct dmar_unit* dmar; } ;
typedef unsigned long long dmar_gaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dmar_domain*) ;
 int FUNC_1 (struct dmar_domain*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct dmar_unit*) ;
 unsigned long long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct dmar_unit*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (struct dmar_unit*) ;
 int FUNC_6 (struct dmar_domain*,unsigned long long,unsigned long long) ;
 int FUNC_7 (struct dmar_domain*,unsigned long long,unsigned long long,int *,int,int) ;

int
FUNC_8(struct dmar_domain *VAR_11, dmar_gaddr_t VAR_12, dmar_gaddr_t VAR_13,
    vm_page_t *VAR_14, uint64_t VAR_15, int VAR_16)
{
 struct dmar_unit *VAR_17;
 int VAR_18;

 VAR_17 = VAR_11->dmar;

 FUNC_4((VAR_11->flags & VAR_2) == 0,
     ("modifying idmap pagetable domain %p", VAR_11));
 FUNC_4((VAR_12 & VAR_5) == 0,
     ("non-aligned base %p %jx %jx", VAR_11, (uintmax_t)VAR_12,
     (uintmax_t)VAR_13));
 FUNC_4((VAR_13 & VAR_5) == 0,
     ("non-aligned size %p %jx %jx", VAR_11, (uintmax_t)VAR_12,
     (uintmax_t)VAR_13));
 FUNC_4(VAR_13 > 0, ("zero size %p %jx %jx", VAR_11, (uintmax_t)VAR_12,
     (uintmax_t)VAR_13));
 FUNC_4(VAR_12 < (1ULL << VAR_11->agaw),
     ("base too high %p %jx %jx agaw %d", VAR_11, (uintmax_t)VAR_12,
     (uintmax_t)VAR_13, VAR_11->agaw));
 FUNC_4(VAR_12 + VAR_13 < (1ULL << VAR_11->agaw),
     ("end too high %p %jx %jx agaw %d", VAR_11, (uintmax_t)VAR_12,
     (uintmax_t)VAR_13, VAR_11->agaw));
 FUNC_4(VAR_12 + VAR_13 > VAR_12,
     ("size overflow %p %jx %jx", VAR_11, (uintmax_t)VAR_12,
     (uintmax_t)VAR_13));
 FUNC_4((VAR_15 & (VAR_7 | VAR_10)) != 0,
     ("neither read nor write %jx", (uintmax_t)VAR_15));
 FUNC_4((VAR_15 & ~(VAR_7 | VAR_10 | VAR_8 |
     VAR_9)) == 0,
     ("invalid pte flags %jx", (uintmax_t)VAR_15));
 FUNC_4((VAR_15 & VAR_8) == 0 ||
     (VAR_17->hw_ecap & VAR_4) != 0,
     ("PTE_SNP for dmar without snoop control %p %jx",
     VAR_11, (uintmax_t)VAR_15));
 FUNC_4((VAR_15 & VAR_9) == 0 ||
     (VAR_17->hw_ecap & VAR_3) != 0,
     ("PTE_TM for dmar without DIOTLB %p %jx",
     VAR_11, (uintmax_t)VAR_15));
 FUNC_4((VAR_16 & ~VAR_6) == 0, ("invalid flags %x", VAR_16));

 FUNC_0(VAR_11);
 VAR_18 = FUNC_7(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
 FUNC_1(VAR_11);
 if (VAR_18 != 0)
  return (VAR_18);

 if ((VAR_17->hw_cap & VAR_0) != 0)
  FUNC_6(VAR_11, VAR_12, VAR_13);
 else if ((VAR_17->hw_cap & VAR_1) != 0) {

  FUNC_2(VAR_17);
  FUNC_5(VAR_17);
  FUNC_3(VAR_17);
 }
 return (0);
}
