
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_18__ {scalar_t__ type; int flags; int ref_count; scalar_t__ resident_page_count; scalar_t__ size; scalar_t__ backing_object_offset; int shadow_count; int shadow_head; struct TYPE_18__* backing_object; int rvq; int paging_in_progress; int * handle; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int*) ;
 int VAR_9 ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*,int ,scalar_t__) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;

void
FUNC_21(vm_object_t VAR_10)
{
 vm_object_t VAR_11, VAR_12;

 FUNC_6(VAR_10);

 while (VAR_6) {





  if ((VAR_11 = VAR_10->backing_object) == ((void*)0))
   break;





  FUNC_7(VAR_11);
  if (VAR_11->handle != ((void*)0) ||
      (VAR_11->type != VAR_1 &&
      VAR_11->type != VAR_2) ||
      (VAR_11->flags & (VAR_3 | VAR_4)) != 0 ||
      VAR_10->handle != ((void*)0) ||
      (VAR_10->type != VAR_1 &&
       VAR_10->type != VAR_2) ||
      (VAR_10->flags & VAR_3)) {
   FUNC_8(VAR_11);
   break;
  }

  if (FUNC_5(VAR_10->paging_in_progress) > 0 ||
      FUNC_5(VAR_11->paging_in_progress) > 0) {
   FUNC_17(VAR_10);
   FUNC_8(VAR_11);
   break;
  }
  if (VAR_11->ref_count == 1) {
   FUNC_15(VAR_10, 1);
   FUNC_15(VAR_11, 1);





   FUNC_13(VAR_10, VAR_5);
   if (VAR_11->type == VAR_2) {
    FUNC_12(
        VAR_11,
        VAR_10,
        FUNC_4(VAR_10->backing_object_offset), VAR_6);
   }






   FUNC_3(VAR_10, VAR_9);
   VAR_11->shadow_count--;
   if (VAR_11->backing_object) {
    FUNC_7(VAR_11->backing_object);
    FUNC_3(VAR_11, VAR_9);
    FUNC_2(
        &VAR_11->backing_object->shadow_head,
        VAR_10, VAR_9);



    FUNC_8(VAR_11->backing_object);
   }
   VAR_10->backing_object = VAR_11->backing_object;
   VAR_10->backing_object_offset +=
       VAR_11->backing_object_offset;
   FUNC_0(VAR_11->ref_count == 1, (
"backing_object %p was somehow re-referenced during collapse!",
       VAR_11));
   FUNC_16(VAR_11);
   VAR_11->type = VAR_0;
   VAR_11->ref_count = 0;
   FUNC_8(VAR_11);
   FUNC_14(VAR_11);

   FUNC_16(VAR_10);
   FUNC_10(VAR_8, 1);
  } else {




   if (VAR_10->resident_page_count != VAR_10->size &&
       !FUNC_19(VAR_10)) {
    FUNC_8(VAR_11);
    break;
   }






   FUNC_3(VAR_10, VAR_9);
   VAR_11->shadow_count--;

   VAR_12 = VAR_11->backing_object;
   if ((VAR_10->backing_object = VAR_12) != ((void*)0)) {
    FUNC_7(VAR_12);
    FUNC_2(
        &VAR_12->shadow_head,
        VAR_10,
        VAR_9
    );
    VAR_12->shadow_count++;
    FUNC_18(VAR_12);
    FUNC_8(VAR_12);
    VAR_10->backing_object_offset +=
     VAR_11->backing_object_offset;
   }





   FUNC_11(&VAR_11->ref_count);
   FUNC_8(VAR_11);
   FUNC_10(VAR_7, 1);
  }




 }
}
