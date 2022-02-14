
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef uintptr_t vm_paddr_t ;
typedef uintptr_t vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
struct md_page {int pv_gen; int pv_list; } ;
typedef TYPE_3__* pv_entry_t ;
typedef int pt_entry_t ;
typedef scalar_t__ pmap_t ;
typedef int pd_entry_t ;
struct TYPE_14__ {uintptr_t pv_va; } ;
struct TYPE_12__ {int pv_gen; int pv_list; } ;
struct TYPE_13__ {int oflags; int flags; TYPE_1__ md; } ;


 int FUNC_0 (int,char*) ;
 uintptr_t VAR_0 ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 int VAR_3 ;
 struct rwlock* FUNC_1 (uintptr_t) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct spglist*) ;
 TYPE_3__* FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_3__*,int ) ;
 int * FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (int *,TYPE_3__*,int ) ;
 uintptr_t FUNC_11 (TYPE_2__*) ;
 int VAR_10 ;
 struct md_page* FUNC_12 (uintptr_t) ;
 int FUNC_13 (int*,int) ;
 int FUNC_14 (scalar_t__,uintptr_t) ;
 int* FUNC_15 (scalar_t__,uintptr_t) ;
 int* FUNC_16 (int*,uintptr_t) ;
 int FUNC_17 (int*) ;
 struct md_page VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct rwlock*) ;
 int FUNC_21 (struct rwlock*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (struct spglist*,int) ;

int
FUNC_24(vm_page_t VAR_14)
{
 struct spglist VAR_15;
 struct md_page *VAR_16;
 struct rwlock *VAR_17;
 pv_entry_t VAR_18, VAR_19;
 pmap_t VAR_20;
 pd_entry_t *VAR_21, VAR_22;
 pt_entry_t *VAR_23, VAR_24;
 vm_paddr_t VAR_25;
 vm_offset_t VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;

 FUNC_0((VAR_14->oflags & VAR_10) == 0,
     ("pmap_ts_referenced: page %p is not managed", VAR_14));
 FUNC_6(&VAR_15);
 VAR_27 = 0;
 VAR_25 = FUNC_11(VAR_14);
 VAR_16 = (VAR_14->flags & VAR_3) != 0 ? &VAR_11 : FUNC_12(VAR_25);

 VAR_17 = FUNC_1(VAR_25);
 FUNC_18(&VAR_13);
 FUNC_20(VAR_17);
retry:
 VAR_29 = 0;
 if ((VAR_19 = FUNC_7(&VAR_16->pv_list)) == ((void*)0))
  goto small_mappings;
 VAR_18 = VAR_19;
 do {
  VAR_20 = FUNC_5(VAR_18);
  if (!FUNC_3(VAR_20)) {
   VAR_30 = VAR_16->pv_gen;
   FUNC_21(VAR_17);
   FUNC_2(VAR_20);
   FUNC_20(VAR_17);
   if (VAR_30 != VAR_16->pv_gen) {
    FUNC_4(VAR_20);
    goto retry;
   }
  }
  VAR_26 = VAR_18->pv_va;
  VAR_21 = FUNC_15(VAR_20, VAR_26);
  VAR_22 = FUNC_17(VAR_21);
  if ((VAR_22 & (VAR_9 | VAR_6)) == (VAR_9 | VAR_6)) {





   FUNC_22(VAR_14);
  }
  if ((VAR_22 & VAR_5) != 0) {
   if ((((VAR_25 >> VAR_2) ^ (VAR_18->pv_va >> VAR_0) ^
       (uintptr_t)VAR_20) & (VAR_1 - 1)) == 0 &&
       (VAR_22 & VAR_8) == 0) {
    FUNC_13(VAR_21, VAR_5);
    FUNC_14(VAR_20, VAR_26);
    VAR_27++;
   } else
    VAR_29++;
  }
  FUNC_4(VAR_20);

  if (VAR_18 != ((void*)0) && FUNC_9(VAR_18, VAR_12) != ((void*)0)) {
   FUNC_10(&VAR_16->pv_list, VAR_18, VAR_12);
   FUNC_8(&VAR_16->pv_list, VAR_18, VAR_12);
   VAR_16->pv_gen++;
  }
  if (VAR_27 + VAR_29 >= VAR_4)
   goto out;
 } while ((VAR_18 = FUNC_7(&VAR_16->pv_list)) != VAR_19);
small_mappings:
 if ((VAR_19 = FUNC_7(&VAR_14->md.pv_list)) == ((void*)0))
  goto out;
 VAR_18 = VAR_19;
 do {
  VAR_20 = FUNC_5(VAR_18);
  if (!FUNC_3(VAR_20)) {
   VAR_30 = VAR_16->pv_gen;
   VAR_28 = VAR_14->md.pv_gen;
   FUNC_21(VAR_17);
   FUNC_2(VAR_20);
   FUNC_20(VAR_17);
   if (VAR_30 != VAR_16->pv_gen || VAR_28 != VAR_14->md.pv_gen) {
    FUNC_4(VAR_20);
    goto retry;
   }
  }
  VAR_21 = FUNC_15(VAR_20, VAR_18->pv_va);

  FUNC_0((FUNC_17(VAR_21) & VAR_7) == 0,
      ("pmap_ts_referenced: found an invalid l2 table"));

  VAR_23 = FUNC_16(VAR_21, VAR_18->pv_va);
  VAR_24 = FUNC_17(VAR_23);
  if ((VAR_24 & VAR_6) != 0)
   FUNC_22(VAR_14);
  if ((VAR_24 & VAR_5) != 0) {
   if ((VAR_24 & VAR_8) == 0) {






    FUNC_13(VAR_23, VAR_5);
    FUNC_14(VAR_20, VAR_18->pv_va);
    VAR_27++;
   } else
    VAR_29++;
  }
  FUNC_4(VAR_20);

  if (VAR_18 != ((void*)0) && FUNC_9(VAR_18, VAR_12) != ((void*)0)) {
   FUNC_10(&VAR_14->md.pv_list, VAR_18, VAR_12);
   FUNC_8(&VAR_14->md.pv_list, VAR_18, VAR_12);
   VAR_14->md.pv_gen++;
  }
 } while ((VAR_18 = FUNC_7(&VAR_14->md.pv_list)) != VAR_19 && VAR_27 +
     VAR_29 < VAR_4);
out:
 FUNC_21(VAR_17);
 FUNC_19(&VAR_13);
 FUNC_23(&VAR_15, 0);
 return (VAR_27 + VAR_29);
}
