
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef int u_int ;
struct TYPE_26__ {int rtree; } ;
struct TYPE_25__ {scalar_t__ pindex; int flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,scalar_t__,int,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 TYPE_1__* FUNC_17 (int *,scalar_t__) ;

int
FUNC_18(vm_object_t VAR_14, vm_pindex_t VAR_15, int VAR_16,
    vm_page_t *VAR_17, int VAR_18)
{
 vm_page_t VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;
 bool VAR_23;

 FUNC_3(VAR_14);
 FUNC_0(((u_int)VAR_16 >> VAR_2) == 0,
     ("vm_page_grap_pages: VM_ALLOC_COUNT() is not allowed"));
 FUNC_0((VAR_16 & VAR_4) == 0 ||
     (VAR_16 & VAR_10) != 0,
     ("vm_page_grab_pages: the pages must be busied or wired"));
 FUNC_0((VAR_16 & VAR_7) == 0 ||
     (VAR_16 & VAR_3) != 0,
     ("vm_page_grab_pages: VM_ALLOC_SBUSY/IGN_SBUSY mismatch"));
 if (VAR_18 == 0)
  return (0);
 VAR_21 = VAR_16 &
     ~(VAR_6 | VAR_9 | VAR_8 |
     VAR_4);
 if ((VAR_16 & VAR_6) == 0)
  VAR_21 |= VAR_8;
 if ((VAR_16 & VAR_3) != 0)
  VAR_21 |= VAR_7;
 VAR_22 = 0;
retrylookup:
 VAR_19 = FUNC_17(&VAR_14->rtree, VAR_15 + VAR_22);
 if (VAR_19 == ((void*)0) || VAR_19->pindex != VAR_15 + VAR_22) {
  VAR_20 = VAR_19;
  VAR_19 = ((void*)0);
 } else
  VAR_20 = FUNC_1(VAR_19, VAR_13, VAR_12);
 for (; VAR_22 < VAR_18; VAR_22++) {
  if (VAR_19 != ((void*)0)) {
   if ((VAR_16 &
       (VAR_7 | VAR_3)) != 0)
    VAR_23 = !FUNC_12(VAR_19);
   else
    VAR_23 = !FUNC_13(VAR_19);
   if (VAR_23) {
    if ((VAR_16 & VAR_6) != 0)
     break;





    if ((VAR_16 & VAR_5) == 0)
     FUNC_6(VAR_19, VAR_0);
    FUNC_8(VAR_19, "grbmaw", (VAR_16 &
        VAR_3) != 0);
    FUNC_4(VAR_14);
    goto retrylookup;
   }
   if ((VAR_16 & VAR_10) != 0)
    FUNC_15(VAR_19);
  } else {
   if ((VAR_16 & VAR_5) != 0)
    break;
   VAR_19 = FUNC_7(VAR_14, VAR_15 + VAR_22,
       VAR_21 | FUNC_2(VAR_18 - VAR_22), VAR_20);
   if (VAR_19 == ((void*)0)) {
    if ((VAR_16 & VAR_6) != 0)
     break;
    goto retrylookup;
   }
  }
  if (FUNC_10(VAR_19) &&
      (VAR_16 & VAR_11) != 0) {
   if ((VAR_19->flags & VAR_1) == 0)
    FUNC_5(VAR_19);
   FUNC_14(VAR_19);
  }
  if ((VAR_16 & VAR_4) != 0) {
   if ((VAR_16 & VAR_3) != 0)
    FUNC_11(VAR_19);
   else
    FUNC_16(VAR_19);
  }
  VAR_17[VAR_22] = VAR_20 = VAR_19;
  VAR_19 = FUNC_9(VAR_19);
 }
 return (VAR_22);
}
