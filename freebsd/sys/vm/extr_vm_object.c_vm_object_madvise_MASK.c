
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_24__ {int backing_object_offset; struct TYPE_24__* backing_object; } ;
struct TYPE_23__ {scalar_t__ pindex; int flags; int oflags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int,scalar_t__,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*,int) ;
 TYPE_1__* FUNC_11 (TYPE_2__*,scalar_t__) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_1__* FUNC_13 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;

void
FUNC_18(vm_object_t VAR_5, vm_pindex_t VAR_6, vm_pindex_t VAR_7,
    int VAR_8)
{
 vm_pindex_t VAR_9;
 vm_object_t VAR_10, VAR_11;
 vm_page_t VAR_12, VAR_13;

 if (VAR_5 == ((void*)0))
  return;

relookup:
 FUNC_3(VAR_5);
 if (!FUNC_5(VAR_5, VAR_8)) {
  FUNC_4(VAR_5);
  return;
 }
 for (VAR_12 = FUNC_11(VAR_5, VAR_6); VAR_6 < VAR_7; VAR_6++) {
  VAR_11 = VAR_5;







  if (VAR_12 == ((void*)0) || VAR_6 < VAR_12->pindex) {





   if (VAR_5->backing_object == ((void*)0)) {
    VAR_9 = (VAR_12 != ((void*)0) && VAR_12->pindex < VAR_7) ?
        VAR_12->pindex : VAR_7;
    FUNC_6(VAR_5, VAR_8,
        VAR_6, VAR_9 - VAR_6);
    if ((VAR_6 = VAR_9) == VAR_7)
     break;
    goto next_page;
   }

   VAR_9 = VAR_6;
   do {
    FUNC_6(VAR_11, VAR_8,
        VAR_9, 1);




    VAR_10 = VAR_11->backing_object;
    if (VAR_10 == ((void*)0))
     goto next_pindex;
    FUNC_3(VAR_10);
    VAR_9 +=
        FUNC_1(VAR_11->backing_object_offset);
    if (VAR_11 != VAR_5)
     FUNC_4(VAR_11);
    VAR_11 = VAR_10;
    if (!FUNC_5(VAR_11, VAR_8))
     goto next_pindex;
   } while ((VAR_13 = FUNC_13(VAR_11, VAR_9)) ==
       ((void*)0));
  } else {
next_page:
   VAR_13 = VAR_12;
   VAR_12 = FUNC_2(VAR_12, VAR_4);
  }





  if (!FUNC_9(VAR_13) || FUNC_16(VAR_13))
   goto next_pindex;
  FUNC_0((VAR_13->flags & VAR_2) == 0,
      ("vm_object_madvise: page %p is fictitious", VAR_13));
  FUNC_0((VAR_13->oflags & VAR_3) == 0,
      ("vm_object_madvise: page %p is not managed", VAR_13));
  if (FUNC_14(VAR_13) == 0) {
   if (VAR_5 != VAR_11)
    FUNC_4(VAR_5);
   if (VAR_8 == VAR_0) {





    FUNC_8(VAR_13, VAR_1);
   }
   FUNC_10(VAR_13, "madvpo", 0);
     goto relookup;
  }
  FUNC_12(VAR_13);
  FUNC_7(VAR_13, VAR_8);
  FUNC_15(VAR_13);
  FUNC_17(VAR_13);
  FUNC_6(VAR_11, VAR_8, VAR_13->pindex, 1);
next_pindex:
  if (VAR_11 != VAR_5)
   FUNC_4(VAR_11);
 }
 FUNC_4(VAR_5);
}
