
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_20__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int vm_ooffset_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* vm_map_t ;
typedef TYPE_4__* vm_map_entry_t ;
struct ucred {int dummy; } ;
struct TYPE_25__ {TYPE_2__* vm_object; } ;
struct TYPE_29__ {int eflags; scalar_t__ wired_count; int protection; struct ucred* cred; scalar_t__ offset; TYPE_1__ object; scalar_t__ start; scalar_t__ end; struct TYPE_29__* defer_next; } ;
struct TYPE_28__ {int pmap; } ;
struct TYPE_27__ {scalar_t__ type; int flags; scalar_t__ charge; struct ucred* cred; int * handle; } ;
struct TYPE_26__ {struct ucred* td_ucred; TYPE_4__* td_map_def_user; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_5 (struct ucred*) ;
 TYPE_20__* VAR_9 ;
 int FUNC_6 (int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*,TYPE_4__*,TYPE_4__*,int *) ;
 TYPE_4__* FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_15(
 vm_map_t VAR_10,
 vm_map_t VAR_11,
 vm_map_entry_t VAR_12,
 vm_map_entry_t VAR_13,
 vm_ooffset_t *VAR_14)
{
 vm_object_t VAR_15;
 vm_map_entry_t VAR_16;
 vm_offset_t VAR_17;
 struct ucred *VAR_18;
 int VAR_19;

 FUNC_2(VAR_11);

 if ((VAR_13->eflags|VAR_12->eflags) & VAR_1)
  return;

 if (VAR_12->wired_count == 0 ||
     (VAR_12->protection & VAR_8) == 0) {




  if ((VAR_12->eflags & VAR_2) == 0 &&
      (VAR_12->protection & VAR_8) != 0) {
   FUNC_7(VAR_10->pmap,
       VAR_12->start,
       VAR_12->end,
       VAR_12->protection & ~VAR_8);
  }




  VAR_17 = VAR_12->end - VAR_12->start;
  if ((VAR_15 = VAR_12->object.vm_object) != ((void*)0)) {
   FUNC_3(VAR_15);
   VAR_19 = FUNC_0(VAR_12);
   if (VAR_15->handle == ((void*)0) &&
       (VAR_15->type == VAR_4 ||
       VAR_15->type == VAR_5)) {
    FUNC_11(VAR_15);
    if ((VAR_15->flags & (VAR_6 |
        VAR_7)) == VAR_7) {
     FUNC_14(VAR_12);
     VAR_15 =
         VAR_12->object.vm_object;
    }
   }
   FUNC_13(VAR_15);
   FUNC_10(VAR_15, VAR_7);
   if (VAR_12->cred != ((void*)0) &&
       !(VAR_12->eflags & VAR_2)) {
    FUNC_1(VAR_15->cred == ((void*)0),
        ("OVERCOMMIT: vm_map_copy_entry: cred %p",
         VAR_15));
    VAR_15->cred = VAR_12->cred;
    VAR_15->charge = VAR_17;
   }
   FUNC_4(VAR_15);
   VAR_13->object.vm_object = VAR_15;
   if (VAR_19) {
    VAR_18 = VAR_9->td_ucred;
    FUNC_5(VAR_18);
    VAR_13->cred = VAR_18;
    *VAR_14 += VAR_17;
    if (!(VAR_12->eflags &
          VAR_2)) {
     FUNC_5(VAR_18);
     VAR_12->cred = VAR_18;
     *VAR_14 += VAR_17;
    }
   }
   VAR_12->eflags |= VAR_0 |
       VAR_2;
   VAR_13->eflags |= VAR_0 |
       VAR_2;
   VAR_13->offset = VAR_12->offset;
   if (VAR_12->eflags & VAR_3) {
    VAR_16 = FUNC_9(VAR_11);
    VAR_16->eflags = VAR_3;
    VAR_12->eflags &= ~VAR_3;
    FUNC_12(VAR_15);
    VAR_16->object.vm_object = VAR_15;
    VAR_16->start = VAR_12->start;
    VAR_16->end = VAR_12->end;
    VAR_16->defer_next =
        VAR_9->td_map_def_user;
    VAR_9->td_map_def_user = VAR_16;
   }

   FUNC_6(VAR_11->pmap, VAR_10->pmap,
       VAR_13->start, VAR_13->end - VAR_13->start,
       VAR_12->start);
  } else {
   VAR_13->object.vm_object = ((void*)0);
   VAR_13->offset = 0;
   if (VAR_12->cred != ((void*)0)) {
    VAR_13->cred = VAR_9->td_ucred;
    FUNC_5(VAR_13->cred);
    *VAR_14 += VAR_17;
   }
  }
 } else {





  FUNC_8(VAR_11, VAR_10, VAR_13, VAR_12,
      VAR_14);
 }
}
