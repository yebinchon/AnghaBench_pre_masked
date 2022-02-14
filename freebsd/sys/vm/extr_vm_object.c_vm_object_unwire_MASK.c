
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_ooffset_t ;
typedef TYPE_2__* vm_object_t ;
typedef int uint8_t ;
struct TYPE_17__ {int flags; int backing_object_offset; struct TYPE_17__* backing_object; } ;
struct TYPE_16__ {scalar_t__ pindex; TYPE_2__* object; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,scalar_t__) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ) ;

void
FUNC_12(vm_object_t VAR_3, vm_ooffset_t VAR_4, vm_size_t VAR_5,
    uint8_t VAR_6)
{
 vm_object_t VAR_7, VAR_8;
 vm_page_t VAR_9, VAR_10;
 vm_pindex_t VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;

 FUNC_0((VAR_4 & VAR_1) == 0,
     ("vm_object_unwire: offset is not page aligned"));
 FUNC_0((VAR_5 & VAR_1) == 0,
     ("vm_object_unwire: length is not a multiple of PAGE_SIZE"));

 if ((VAR_3->flags & VAR_0) != 0)
  return;
 VAR_12 = FUNC_1(VAR_4);
 VAR_11 = VAR_12 + FUNC_5(VAR_5);
again:
 VAR_15 = 1;
 FUNC_3(VAR_3);
 VAR_9 = FUNC_7(VAR_3, VAR_12);
 while (VAR_12 < VAR_11) {
  if (VAR_9 == ((void*)0) || VAR_12 < VAR_9->pindex) {





   VAR_7 = VAR_3;
   VAR_13 = VAR_12;
   VAR_14 = 0;
   do {
    VAR_13 +=
        FUNC_1(VAR_7->backing_object_offset);
    VAR_7 = VAR_7->backing_object;
    FUNC_0(VAR_7 != ((void*)0),
        ("vm_object_unwire: missing page"));
    if ((VAR_7->flags & VAR_0) != 0)
     goto next_page;
    VAR_14++;
    if (VAR_14 == VAR_15) {
     VAR_15++;
     FUNC_3(VAR_7);
    }
   } while ((VAR_10 = FUNC_8(VAR_7, VAR_13)) ==
       ((void*)0));
  } else {
   VAR_10 = VAR_9;
   VAR_9 = FUNC_2(VAR_9, VAR_2);
  }
  if (FUNC_10(VAR_10) == 0) {
   for (VAR_7 = VAR_3; VAR_15 >= 1;
       VAR_15--) {
    VAR_8 = VAR_7->backing_object;
    if (VAR_10->object != VAR_7)
     FUNC_4(VAR_7);
    VAR_7 = VAR_8;
   }
   FUNC_6(VAR_10, "unwbo", 1);
   goto again;
  }
  FUNC_11(VAR_10, VAR_6);
  FUNC_9(VAR_10);
next_page:
  VAR_12++;
 }

 for (VAR_7 = VAR_3; VAR_15 >= 1; VAR_15--) {
  VAR_8 = VAR_7->backing_object;
  FUNC_4(VAR_7);
  VAR_7 = VAR_8;
 }
}
