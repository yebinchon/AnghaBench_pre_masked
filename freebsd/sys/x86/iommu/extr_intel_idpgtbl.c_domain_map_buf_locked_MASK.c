
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t vm_pindex_t ;
typedef int vm_page_t ;
typedef int uintmax_t ;
typedef int uint64_t ;
struct sf_buf {int dummy; } ;
struct dmar_domain {int pglvl; int dmar; } ;
struct TYPE_5__ {int pte; } ;
typedef TYPE_1__ dmar_pte_t ;
typedef int dmar_gaddr_t ;
struct TYPE_6__ {int ref_count; } ;


 int FUNC_0 (struct dmar_domain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct sf_buf*) ;
 int FUNC_6 (struct dmar_domain*,int) ;
 int FUNC_7 (struct dmar_domain*,int) ;
 TYPE_1__* FUNC_8 (struct dmar_domain*,int,int,int,size_t*,struct sf_buf**) ;
 int FUNC_9 (struct dmar_domain*,int,int,int) ;
 TYPE_2__* FUNC_10 (struct sf_buf*) ;

__attribute__((used)) static int
FUNC_11(struct dmar_domain *VAR_8, dmar_gaddr_t VAR_9,
    dmar_gaddr_t VAR_10, vm_page_t *VAR_11, uint64_t VAR_12, int VAR_13)
{
 dmar_pte_t *VAR_14;
 struct sf_buf *VAR_15;
 dmar_gaddr_t VAR_16, VAR_17, VAR_18;
 vm_pindex_t VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23;
 bool VAR_24;

 FUNC_0(VAR_8);

 VAR_17 = VAR_9;
 VAR_18 = VAR_10;
 VAR_13 |= VAR_1;
 VAR_7;

 for (VAR_15 = ((void*)0), VAR_19 = 0; VAR_10 > 0; VAR_9 += VAR_16, VAR_10 -= VAR_16,
     VAR_19 += VAR_22) {
  for (VAR_23 = 0, VAR_20 = 0, VAR_24 = 0;; VAR_23++) {
   VAR_16 = FUNC_7(VAR_8, VAR_23);
   VAR_22 = VAR_16 >> VAR_0;
   if (VAR_23 == VAR_8->pglvl - 1)
    break;




   if (!FUNC_6(VAR_8, VAR_23))
    continue;




   if (VAR_10 < VAR_16 || (VAR_9 & (VAR_16 - 1)) != 0 ||
       (FUNC_2(VAR_11[VAR_19]) & (VAR_16 - 1)) != 0)
    continue;

   if (VAR_20 == 0) {
    for (VAR_20 = 1; VAR_20 < VAR_22; VAR_20++) {
     if (FUNC_2(VAR_11[VAR_19 + VAR_20]) !=
         FUNC_2(VAR_11[VAR_19 + VAR_20 - 1]) +
         VAR_5)
      break;
    }
   }
   if (VAR_20 >= VAR_22) {
    VAR_24 = 1;
    break;
   }
  }
  FUNC_1(VAR_10 >= VAR_16,
      ("mapping loop overflow %p %jx %jx %jx", VAR_8,
      (uintmax_t)VAR_9, (uintmax_t)VAR_10, (uintmax_t)VAR_16));
  FUNC_1(VAR_16 > 0, ("pg_sz 0 lvl %d", VAR_23));
  VAR_14 = FUNC_8(VAR_8, VAR_9, VAR_23, VAR_13, &VAR_21, &VAR_15);
  if (VAR_14 == ((void*)0)) {
   FUNC_1((VAR_13 & VAR_2) == 0,
       ("failed waitable pte alloc %p", VAR_8));
   if (VAR_15 != ((void*)0))
    FUNC_5(VAR_15);
   FUNC_9(VAR_8, VAR_17, VAR_9 - VAR_17,
       VAR_13);
   VAR_6;
   return (VAR_4);
  }
  FUNC_4(&VAR_14->pte, FUNC_2(VAR_11[VAR_19]) | VAR_12 |
      (VAR_24 ? VAR_3 : 0));
  FUNC_3(VAR_8->dmar, VAR_14);
  FUNC_10(VAR_15)->ref_count += 1;
 }
 if (VAR_15 != ((void*)0))
  FUNC_5(VAR_15);
 VAR_6;
 return (0);
}
