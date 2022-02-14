
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_map_t ;
typedef TYPE_3__* vm_map_entry_t ;
struct TYPE_22__ {int * vm_object; } ;
struct TYPE_24__ {scalar_t__ start; int eflags; scalar_t__ wired_count; scalar_t__ end; TYPE_1__ object; } ;
struct TYPE_23__ {unsigned int timestamp; scalar_t__ anon_loc; int pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,TYPE_3__**) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ) ;

int
FUNC_12(vm_map_t VAR_5, vm_offset_t VAR_6, vm_offset_t VAR_7)
{
 vm_map_entry_t VAR_8;
 vm_map_entry_t VAR_9;

 FUNC_0(VAR_5);
 if (VAR_6 == VAR_7)
  return (VAR_0);




 if (!FUNC_9(VAR_5, VAR_6, &VAR_9))
  VAR_8 = FUNC_5(VAR_9);
 else {
  VAR_8 = VAR_9;
  FUNC_3(VAR_5, VAR_8, VAR_6);
 }




 while (VAR_8->start < VAR_7) {
  vm_map_entry_t VAR_10;






  if ((VAR_8->eflags & VAR_1) != 0 ||
      (FUNC_10(VAR_5) != VAR_4 &&
      FUNC_6(VAR_8) != 0)) {
   unsigned int VAR_11;
   vm_offset_t VAR_12;
   vm_map_entry_t VAR_13;

   VAR_12 = VAR_8->start;
   VAR_8->eflags |= VAR_3;
   VAR_11 = VAR_5->timestamp;
   (void) FUNC_11(VAR_5, 0);
   FUNC_8(VAR_5);
   if (VAR_11 + 1 != VAR_5->timestamp) {






    if (!FUNC_9(VAR_5, VAR_12,
        &VAR_13))
     VAR_8 = FUNC_5(VAR_13);
    else {
     VAR_8 = VAR_13;
     FUNC_3(VAR_5, VAR_8,
         VAR_12);
    }
   }
   continue;
  }
  FUNC_2(VAR_5, VAR_8, VAR_7);

  VAR_10 = FUNC_5(VAR_8);





  if (VAR_8->wired_count != 0)
   FUNC_7(VAR_5, VAR_8);






  if ((VAR_8->eflags & VAR_2) != 0 ||
      VAR_8->object.vm_object != ((void*)0))
   FUNC_1(VAR_5->pmap, VAR_8->start, VAR_8->end);

  if (VAR_8->end == VAR_5->anon_loc)
   VAR_5->anon_loc = VAR_8->start;







  FUNC_4(VAR_5, VAR_8);
  VAR_8 = VAR_10;
 }
 return (VAR_0);
}
