
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_16__ {scalar_t__ type; int ref_count; int shadow_count; int flags; struct TYPE_16__* backing_object; int paging_in_progress; int * handle; int shadow_head; } ;


 int FUNC_0 (int,char*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int*,int) ;
 int FUNC_13 (int *,char*,int ) ;
 int VAR_7 ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,char*) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;

void
FUNC_20(vm_object_t VAR_8)
{
 vm_object_t VAR_9;
 bool VAR_10;

 while (VAR_8 != ((void*)0)) {
  FUNC_4(VAR_8);
  if (VAR_8->type == VAR_2) {
   FUNC_19(VAR_8);
   return;
  }
  VAR_10 = FUNC_12(&VAR_8->ref_count, 2);
  FUNC_5(VAR_8);
  if (VAR_10)
   return;

  FUNC_7(VAR_8);
  FUNC_0(VAR_8->ref_count != 0,
   ("vm_object_deallocate: object deallocated too many times: %d", VAR_8->type));

  FUNC_11(&VAR_8->ref_count);
  if (VAR_8->ref_count > 1) {
   FUNC_8(VAR_8);
   return;
  } else if (VAR_8->ref_count == 1) {
   if (VAR_8->shadow_count == 0 &&
       VAR_8->handle == ((void*)0) &&
       (VAR_8->type == VAR_0 ||
       (VAR_8->type == VAR_1 &&
       (VAR_8->flags & VAR_5) == 0))) {
    FUNC_17(VAR_8, VAR_4);
   } else if ((VAR_8->shadow_count == 1) &&
       (VAR_8->handle == ((void*)0)) &&
       (VAR_8->type == VAR_0 ||
        VAR_8->type == VAR_1)) {
    vm_object_t VAR_11;

    VAR_11 = FUNC_1(&VAR_8->shadow_head);
    FUNC_0(VAR_11 != ((void*)0),
        ("vm_object_deallocate: ref_count: %d, shadow_count: %d",
      VAR_8->ref_count,
      VAR_8->shadow_count));
    FUNC_0((VAR_11->flags & VAR_5) == 0,
        ("shadowed tmpfs v_object %p", VAR_8));
    if (!FUNC_6(VAR_11)) {



     FUNC_10(&VAR_8->ref_count);
     FUNC_8(VAR_8);






     FUNC_9("vmo_de", 1);
     continue;
    }






    if ((VAR_11->flags & VAR_3) == 0 &&
        (VAR_11->handle == ((void*)0)) &&
        (VAR_11->type == VAR_0 ||
         VAR_11->type == VAR_1)) {

     FUNC_10(&VAR_11->ref_count);
retry:
     if (FUNC_3(VAR_11->paging_in_progress) > 0) {
      FUNC_8(VAR_8);
      FUNC_16(VAR_11,
          "objde1");
      VAR_9 = VAR_11->backing_object;
      if (VAR_8 == VAR_9) {
       FUNC_7(VAR_8);
       goto retry;
      }
     } else if (FUNC_3(VAR_8->paging_in_progress) > 0) {
      FUNC_8(VAR_11);
      FUNC_8(VAR_8);
      FUNC_13(
          &VAR_8->paging_in_progress,
          "objde2", VAR_6);
      FUNC_7(VAR_11);
      VAR_9 = VAR_11->backing_object;
      if (VAR_8 == VAR_9) {
       FUNC_7(VAR_8);
       goto retry;
      }
     } else
      FUNC_8(VAR_8);

     if (VAR_11->ref_count == 1) {
      VAR_11->ref_count--;
      VAR_8 = VAR_11;
      goto doterm;
     }
     VAR_8 = VAR_11;
     FUNC_15(VAR_8);
     FUNC_8(VAR_8);
     continue;
    }
    FUNC_8(VAR_11);
   }
   FUNC_8(VAR_8);
   return;
  }
doterm:
  FUNC_14(VAR_8);
  VAR_9 = VAR_8->backing_object;
  if (VAR_9 != ((void*)0)) {
   FUNC_0((VAR_8->flags & VAR_5) == 0,
       ("shadowed tmpfs v_object 2 %p", VAR_8));
   FUNC_7(VAR_9);
   FUNC_2(VAR_8, VAR_7);
   VAR_9->shadow_count--;
   FUNC_8(VAR_9);
   VAR_8->backing_object = ((void*)0);
  }





  if ((VAR_8->flags & VAR_3) == 0) {
   FUNC_17(VAR_8, VAR_3);
   FUNC_18(VAR_8);
  } else
   FUNC_8(VAR_8);
  VAR_8 = VAR_9;
 }
}
