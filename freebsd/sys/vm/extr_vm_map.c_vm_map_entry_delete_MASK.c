
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_pindex_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* vm_map_t ;
typedef TYPE_4__* vm_map_entry_t ;
struct TYPE_18__ {TYPE_2__* vm_object; } ;
struct TYPE_21__ {int eflags; scalar_t__ end; scalar_t__ start; struct TYPE_21__* defer_next; TYPE_1__ object; int offset; int * cred; } ;
struct TYPE_20__ {scalar_t__ system_map; int size; } ;
struct TYPE_19__ {int ref_count; int flags; scalar_t__ type; scalar_t__ size; scalar_t__ charge; int * cred; } ;
struct TYPE_17__ {TYPE_4__* td_map_def_user; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 TYPE_14__* VAR_9 ;
 TYPE_2__* VAR_10 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,int *) ;
 int FUNC_10 (TYPE_4__*,scalar_t__) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_14(vm_map_t VAR_11, vm_map_entry_t VAR_12)
{
 vm_object_t VAR_13;
 vm_pindex_t VAR_14, VAR_15, VAR_16, VAR_17;
 vm_size_t VAR_18;

 FUNC_11(VAR_11, VAR_12, VAR_8);
 VAR_13 = VAR_12->object.vm_object;

 if ((VAR_12->eflags & VAR_0) != 0) {
  FUNC_1(VAR_12->cred == ((void*)0));
  FUNC_1((VAR_12->eflags & VAR_1) == 0);
  FUNC_1(VAR_13 == ((void*)0));
  FUNC_10(VAR_12, VAR_11->system_map);
  return;
 }

 VAR_18 = VAR_12->end - VAR_12->start;
 VAR_11->size -= VAR_18;

 if (VAR_12->cred != ((void*)0)) {
  FUNC_9(VAR_18, VAR_12->cred);
  FUNC_6(VAR_12->cred);
 }

 if ((VAR_12->eflags & VAR_1) == 0 &&
     (VAR_13 != ((void*)0))) {
  FUNC_0(VAR_12->cred == ((void*)0) || VAR_13->cred == ((void*)0) ||
      (VAR_12->eflags & VAR_2),
      ("OVERCOMMIT vm_map_entry_delete: both cred %p", VAR_12));
  VAR_16 = FUNC_5(VAR_18);
  VAR_14 = FUNC_2(VAR_12->offset);
  VAR_15 = VAR_14 + VAR_16;
  FUNC_3(VAR_13);
  if (VAR_13->ref_count != 1 && ((VAR_13->flags & (VAR_5 |
      VAR_6)) == VAR_6 ||
      VAR_13 == VAR_10)) {
   FUNC_12(VAR_13);







   FUNC_13(VAR_13, VAR_14, VAR_15,
       VAR_3);
   if (VAR_13->type == VAR_4)
    FUNC_8(VAR_13, VAR_14,
        VAR_16);
   if (VAR_15 >= VAR_13->size &&
       VAR_14 < VAR_13->size) {
    VAR_17 = VAR_13->size;
    VAR_13->size = VAR_14;
    if (VAR_13->cred != ((void*)0)) {
     VAR_17 -= VAR_13->size;
     FUNC_0(VAR_13->charge >= FUNC_7(VAR_17),
         ("object %p charge < 0", VAR_13));
     FUNC_9(FUNC_7(VAR_17),
         VAR_13->cred);
     VAR_13->charge -= FUNC_7(VAR_17);
    }
   }
  }
  FUNC_4(VAR_13);
 } else
  VAR_12->object.vm_object = ((void*)0);
 if (VAR_11->system_map)
  FUNC_10(VAR_12, VAR_7);
 else {
  VAR_12->defer_next = VAR_9->td_map_def_user;
  VAR_9->td_map_def_user = VAR_12;
 }
}
