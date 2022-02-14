
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* vm_map_t ;
struct TYPE_21__ {int pmap; } ;
struct TYPE_20__ {scalar_t__ type; scalar_t__ size; } ;
struct TYPE_19__ {scalar_t__ pindex; size_t psind; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_8 ;
 int* VAR_9 ;
 int FUNC_7 (int ,int,int,TYPE_1__*,int) ;
 int FUNC_8 (int ,int,TYPE_2__*,scalar_t__,int) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 () ;
 TYPE_1__* FUNC_12 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static void
FUNC_14(vm_map_t VAR_10, vm_offset_t VAR_11, vm_prot_t VAR_12,
    vm_object_t VAR_13, vm_pindex_t VAR_14, vm_size_t VAR_15, int VAR_16)
{
 vm_offset_t VAR_17;
 vm_page_t VAR_18, VAR_19;
 vm_pindex_t VAR_20, VAR_21, VAR_22, VAR_23;

 if ((VAR_12 & (VAR_7 | VAR_6)) == 0 || VAR_13 == ((void*)0))
  return;
 FUNC_2(VAR_13);
 if (VAR_13->type == VAR_3 || VAR_13->type == VAR_4) {
  FUNC_3(VAR_13);
  FUNC_4(VAR_13);
  if (VAR_13->type == VAR_3 || VAR_13->type == VAR_4) {
   FUNC_8(VAR_10->pmap, VAR_11, VAR_13, VAR_14,
       VAR_15);
   FUNC_5(VAR_13);
   return;
  }
  FUNC_1(VAR_13);
 }

 VAR_21 = FUNC_6(VAR_15);
 if (VAR_21 + VAR_14 > VAR_13->size) {
  if (VAR_13->size < VAR_14) {
   FUNC_3(VAR_13);
   return;
  }
  VAR_21 = VAR_13->size - VAR_14;
 }

 VAR_17 = 0;
 VAR_19 = ((void*)0);
 VAR_22 = VAR_2;

 VAR_18 = FUNC_12(VAR_13, VAR_14);





 for (;
      VAR_18 != ((void*)0) && (VAR_23 = VAR_18->pindex - VAR_14) < VAR_21;
      VAR_18 = FUNC_0(VAR_18, VAR_8)) {




  if (((VAR_16 & VAR_0) != 0 &&
      FUNC_11()) ||
      ((VAR_16 & VAR_1) != 0 &&
      VAR_23 >= VAR_22)) {
   VAR_21 = VAR_23;
   break;
  }
  if (FUNC_10(VAR_18)) {
   if (VAR_19 == ((void*)0)) {
    VAR_17 = VAR_11 + FUNC_9(VAR_23);
    VAR_19 = VAR_18;
   }

   if (VAR_18->psind > 0 && ((VAR_11 + FUNC_9(VAR_23)) &
       (VAR_9[VAR_18->psind] - 1)) == 0) {
    VAR_20 = FUNC_6(VAR_9[VAR_18->psind]) - 1;
    if (VAR_23 + VAR_20 < VAR_21 &&
        FUNC_13(VAR_18, VAR_5, ((void*)0))) {
     VAR_18 += VAR_20;
     VAR_22 += VAR_20;
    }
   }
  } else if (VAR_19 != ((void*)0)) {
   FUNC_7(VAR_10->pmap, VAR_17, VAR_11 +
       FUNC_9(VAR_23), VAR_19, VAR_12);
   VAR_19 = ((void*)0);
  }
 }
 if (VAR_19 != ((void*)0))
  FUNC_7(VAR_10->pmap, VAR_17, VAR_11 + FUNC_9(VAR_21),
      VAR_19, VAR_12);
 FUNC_3(VAR_13);
}
