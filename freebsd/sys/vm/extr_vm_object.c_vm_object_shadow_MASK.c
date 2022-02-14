
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_1__* vm_object_t ;
struct TYPE_9__ {int ref_count; scalar_t__ type; int flags; int pg_color; int shadow_count; int shadow_head; int domain; scalar_t__ backing_object_offset; struct TYPE_9__* backing_object; int * handle; } ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 TYPE_1__* FUNC_7 (scalar_t__,int ) ;

void
FUNC_8(
 vm_object_t *VAR_5,
 vm_ooffset_t *VAR_6,
 vm_size_t VAR_7)
{
 vm_object_t VAR_8;
 vm_object_t VAR_9;

 VAR_8 = *VAR_5;




 if (VAR_8 != ((void*)0)) {
  FUNC_2(VAR_8);
  if (VAR_8->ref_count == 1 &&
      VAR_8->handle == ((void*)0) &&
      (VAR_8->type == VAR_0 ||
       VAR_8->type == VAR_1)) {
   FUNC_3(VAR_8);
   return;
  }
  FUNC_3(VAR_8);
 }




 VAR_9 = FUNC_7(VAR_0, FUNC_6(VAR_7));
 VAR_9->backing_object = VAR_8;




 VAR_9->backing_object_offset = *VAR_6;
 if (VAR_8 != ((void*)0)) {
  FUNC_4(VAR_8);
  VAR_9->domain = VAR_8->domain;
  FUNC_0(&VAR_8->shadow_head, VAR_9, VAR_4);
  VAR_8->shadow_count++;





  FUNC_5(VAR_8);
 }





 *VAR_6 = 0;
 *VAR_5 = VAR_9;
}
