
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef int uintmax_t ;
struct sf_buf {int dummy; } ;
struct dmar_domain {int flags; unsigned long long agaw; int pglvl; } ;
struct TYPE_4__ {int pte; } ;
typedef TYPE_1__ dmar_pte_t ;
typedef unsigned long long dmar_gaddr_t ;


 int FUNC_0 (struct dmar_domain*) ;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct sf_buf*) ;
 int FUNC_3 (struct dmar_domain*,int) ;
 unsigned long long FUNC_4 (struct dmar_domain*,int) ;
 TYPE_1__* FUNC_5 (struct dmar_domain*,unsigned long long,int,int,int *,struct sf_buf**) ;
 int FUNC_6 (struct dmar_domain*,unsigned long long,int,int,TYPE_1__*,struct sf_buf**,int) ;

__attribute__((used)) static int
FUNC_7(struct dmar_domain *VAR_7, dmar_gaddr_t VAR_8,
    dmar_gaddr_t VAR_9, int VAR_10)
{
 dmar_pte_t *VAR_11;
 struct sf_buf *VAR_12;
 vm_pindex_t VAR_13;
 dmar_gaddr_t VAR_14;
 int VAR_15;

 FUNC_0(VAR_7);
 if (VAR_9 == 0)
  return (0);

 FUNC_1((VAR_7->flags & VAR_0) == 0,
     ("modifying idmap pagetable domain %p", VAR_7));
 FUNC_1((VAR_8 & VAR_1) == 0,
     ("non-aligned base %p %jx %jx", VAR_7, (uintmax_t)VAR_8,
     (uintmax_t)VAR_9));
 FUNC_1((VAR_9 & VAR_1) == 0,
     ("non-aligned size %p %jx %jx", VAR_7, (uintmax_t)VAR_8,
     (uintmax_t)VAR_9));
 FUNC_1(VAR_8 < (1ULL << VAR_7->agaw),
     ("base too high %p %jx %jx agaw %d", VAR_7, (uintmax_t)VAR_8,
     (uintmax_t)VAR_9, VAR_7->agaw));
 FUNC_1(VAR_8 + VAR_9 < (1ULL << VAR_7->agaw),
     ("end too high %p %jx %jx agaw %d", VAR_7, (uintmax_t)VAR_8,
     (uintmax_t)VAR_9, VAR_7->agaw));
 FUNC_1(VAR_8 + VAR_9 > VAR_8,
     ("size overflow %p %jx %jx", VAR_7, (uintmax_t)VAR_8,
     (uintmax_t)VAR_9));
 FUNC_1((VAR_10 & ~VAR_3) == 0, ("invalid flags %x", VAR_10));

 VAR_14 = 0;
 VAR_10 |= VAR_2;
 VAR_6;

 for (VAR_12 = ((void*)0); VAR_9 > 0; VAR_8 += VAR_14, VAR_9 -= VAR_14) {
  for (VAR_15 = 0; VAR_15 < VAR_7->pglvl; VAR_15++) {
   if (VAR_15 != VAR_7->pglvl - 1 &&
       !FUNC_3(VAR_7, VAR_15))
    continue;
   VAR_14 = FUNC_4(VAR_7, VAR_15);
   if (VAR_14 > VAR_9)
    continue;
   VAR_11 = FUNC_5(VAR_7, VAR_8, VAR_15, VAR_10,
       &VAR_13, &VAR_12);
   FUNC_1(VAR_11 != ((void*)0),
       ("sleeping or page missed %p %jx %d 0x%x",
       VAR_7, (uintmax_t)VAR_8, VAR_15, VAR_10));
   if ((VAR_11->pte & VAR_4) != 0 ||
       VAR_15 == VAR_7->pglvl - 1) {
    FUNC_6(VAR_7, VAR_8, VAR_15,
        VAR_10, VAR_11, &VAR_12, 0);
    break;
   }
  }
  FUNC_1(VAR_9 >= VAR_14,
      ("unmapping loop overflow %p %jx %jx %jx", VAR_7,
      (uintmax_t)VAR_8, (uintmax_t)VAR_9, (uintmax_t)VAR_14));
 }
 if (VAR_12 != ((void*)0))
  FUNC_2(VAR_12);





 VAR_5;
 return (0);
}
