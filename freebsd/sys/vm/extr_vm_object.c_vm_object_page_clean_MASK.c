
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_2__* vm_object_t ;
typedef int boolean_t ;
struct TYPE_17__ {scalar_t__ type; scalar_t__ resident_page_count; scalar_t__ size; int generation; int cleangeneration; } ;
struct TYPE_16__ {scalar_t__ pindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ) ;
 int VAR_11 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int,int,int*,int*) ;
 int FUNC_6 (TYPE_1__*,int,int*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_12 ;

boolean_t
FUNC_11(vm_object_t VAR_13, vm_ooffset_t VAR_14, vm_ooffset_t VAR_15,
    int VAR_16)
{
 vm_page_t VAR_17, VAR_18;
 vm_pindex_t VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24;
 boolean_t VAR_25, VAR_26, VAR_27;

 FUNC_2(VAR_13);

 if (VAR_13->type != VAR_4 || !FUNC_4(VAR_13) ||
     VAR_13->resident_page_count == 0)
  return (VAR_6);

 VAR_24 = (VAR_16 & (VAR_3 | VAR_2)) != 0 ?
     VAR_10 : VAR_8;
 VAR_24 |= (VAR_16 & VAR_2) != 0 ? VAR_9 : 0;

 VAR_21 = FUNC_0(VAR_14);
 VAR_20 = (VAR_15 == 0) ? VAR_13->size : FUNC_0(VAR_15 + VAR_5);
 VAR_27 = VAR_21 == 0 && VAR_20 >= VAR_13->size;
 VAR_26 = VAR_6;

rescan:
 VAR_22 = VAR_13->generation;

 for (VAR_18 = FUNC_8(VAR_13, VAR_21); VAR_18 != ((void*)0); VAR_18 = VAR_17) {
  VAR_19 = VAR_18->pindex;
  if (VAR_19 >= VAR_20)
   break;
  VAR_17 = FUNC_1(VAR_18, VAR_11);
  if (FUNC_9(VAR_18))
   continue;
  if (FUNC_7(VAR_18, VAR_7) == 0) {
   if (VAR_13->generation != VAR_22 &&
       (VAR_16 & VAR_3) != 0)
    goto rescan;
   VAR_17 = FUNC_8(VAR_13, VAR_19);
   continue;
  }
  if (!FUNC_6(VAR_18, VAR_16, &VAR_27)) {
   FUNC_10(VAR_18);
   continue;
  }

  VAR_23 = FUNC_5(VAR_13, VAR_18, VAR_24,
      VAR_16, &VAR_27, &VAR_25);
  if (VAR_25) {
   VAR_26 = VAR_0;
   VAR_27 = VAR_0;
  }
  if (VAR_13->generation != VAR_22 &&
      (VAR_16 & VAR_3) != 0)
   goto rescan;
  if (VAR_23 == 0) {
   VAR_23 = 1;
   VAR_27 = VAR_0;
  }
  VAR_17 = FUNC_8(VAR_13, VAR_19 + VAR_23);
 }




 if (VAR_27)
  VAR_13->cleangeneration = VAR_22;
 return (VAR_26);
}
