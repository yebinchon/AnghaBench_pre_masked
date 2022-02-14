
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pn_t ;
typedef TYPE_2__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_17__ {int * pm_l1; } ;
struct TYPE_16__ {int flags; int ref_count; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_6 (struct rwlock**) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,size_t,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 TYPE_1__* FUNC_15 (int *,size_t,int) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static vm_page_t
FUNC_19(pmap_t VAR_13, vm_pindex_t VAR_14, struct rwlock **VAR_15)
{
 vm_page_t VAR_16, VAR_17;
 pt_entry_t VAR_18;
 vm_paddr_t VAR_19;
 pn_t VAR_20;

 FUNC_3(VAR_13, VAR_3);




 if ((VAR_16 = FUNC_15(((void*)0), VAR_14, VAR_9 |
     VAR_10 | VAR_11)) == ((void*)0)) {
  if (VAR_15 != ((void*)0)) {
   FUNC_6(VAR_15);
   FUNC_4(VAR_13);
   FUNC_14(&VAR_12);
   FUNC_18(((void*)0));
   FUNC_13(&VAR_12);
   FUNC_2(VAR_13);
  }





  return (((void*)0));
 }

 if ((VAR_16->flags & VAR_6) == 0)
  FUNC_12(VAR_16);






 if (VAR_14 >= VAR_4) {
  pd_entry_t *VAR_21;
  vm_pindex_t VAR_22;

  VAR_22 = VAR_14 - VAR_4;
  VAR_21 = &VAR_13->pm_l1[VAR_22];

  VAR_20 = (FUNC_7(VAR_16) / VAR_5);
  VAR_18 = (VAR_8);
  VAR_18 |= (VAR_20 << VAR_7);
  FUNC_11(VAR_21, VAR_18);
  FUNC_8(VAR_13, VAR_22, VAR_18);
 } else {
  vm_pindex_t VAR_23;
  pd_entry_t *VAR_24, *VAR_25;

  VAR_23 = VAR_14 >> (VAR_0 - VAR_1);
  VAR_24 = &VAR_13->pm_l1[VAR_23];
  if (FUNC_9(VAR_24) == 0) {

   if (FUNC_19(VAR_13, VAR_4 + VAR_23,
       VAR_15) == ((void*)0)) {
    FUNC_17(VAR_16);
    FUNC_16(VAR_16);
    return (((void*)0));
   }
  } else {
   VAR_19 = FUNC_5(FUNC_9(VAR_24));
   VAR_17 = FUNC_1(VAR_19);
   VAR_17->ref_count++;
  }

  VAR_19 = FUNC_5(FUNC_9(VAR_24));
  VAR_25 = (pd_entry_t *)FUNC_0(VAR_19);
  VAR_25 = &VAR_25[VAR_14 & VAR_2];

  VAR_20 = (FUNC_7(VAR_16) / VAR_5);
  VAR_18 = (VAR_8);
  VAR_18 |= (VAR_20 << VAR_7);
  FUNC_11(VAR_25, VAR_18);
 }

 FUNC_10(VAR_13, 1);

 return (VAR_16);
}
