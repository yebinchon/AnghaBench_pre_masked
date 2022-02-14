
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_23__ {int flags; scalar_t__ resident_page_count; scalar_t__ ref_count; } ;
struct TYPE_22__ {scalar_t__ pindex; int flags; scalar_t__ dirty; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;

void
FUNC_17(vm_object_t VAR_5, vm_pindex_t VAR_6, vm_pindex_t VAR_7,
    int VAR_8)
{
 vm_page_t VAR_9, VAR_10;

 FUNC_2(VAR_5);
 FUNC_0((VAR_5->flags & VAR_2) == 0 ||
     (VAR_8 & (VAR_0 | VAR_1)) == VAR_1,
     ("vm_object_page_remove: illegal options for object %p", VAR_5));
 if (VAR_5->resident_page_count == 0)
  return;
 FUNC_4(VAR_5, 1);
again:
 VAR_9 = FUNC_6(VAR_5, VAR_6);





 for (; VAR_9 != ((void*)0) && (VAR_9->pindex < VAR_7 || VAR_7 == 0); VAR_9 = VAR_10) {
  VAR_10 = FUNC_1(VAR_9, VAR_4);
  if (FUNC_13(VAR_9) == 0) {
   FUNC_10(VAR_9, "vmopar");
   goto again;
  }
  if (FUNC_15(VAR_9)) {
wired:
   if ((VAR_8 & VAR_1) == 0 &&
       VAR_5->ref_count != 0)
    FUNC_3(VAR_9);
   if ((VAR_8 & VAR_0) == 0) {
    FUNC_8(VAR_9);
    FUNC_14(VAR_9);
   }
   FUNC_16(VAR_9);
   continue;
  }
  FUNC_0((VAR_9->flags & VAR_3) == 0,
      ("vm_object_page_remove: page %p is fictitious", VAR_9));
  if ((VAR_8 & VAR_0) != 0 &&
      !FUNC_9(VAR_9)) {
   if ((VAR_8 & VAR_1) == 0 &&
       VAR_5->ref_count != 0 &&
       !FUNC_12(VAR_9))
    goto wired;
   if (VAR_9->dirty != 0) {
    FUNC_16(VAR_9);
    continue;
   }
  }
  if ((VAR_8 & VAR_1) == 0 &&
      VAR_5->ref_count != 0 && !FUNC_11(VAR_9))
   goto wired;
  FUNC_7(VAR_9);
 }
 FUNC_5(VAR_5);
}
