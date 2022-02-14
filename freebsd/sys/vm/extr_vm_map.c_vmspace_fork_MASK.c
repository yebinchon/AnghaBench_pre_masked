
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_31__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;


typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_4__* vm_object_t ;
typedef TYPE_5__* vm_map_t ;
typedef TYPE_6__* vm_map_entry_t ;
typedef int vm_inherit_t ;
struct vnode {int v_writecount; } ;
struct TYPE_34__ {TYPE_4__* vm_object; } ;
struct TYPE_40__ {int eflags; int inheritance; scalar_t__ start; scalar_t__ end; int * cred; int max_protection; int protection; TYPE_1__ object; int wired_count; int * wiring_thread; int offset; struct TYPE_40__* next; } ;
struct TYPE_39__ {int lock; int pmap; TYPE_6__ header; int anon_loc; scalar_t__ busy; } ;
struct vmspace {TYPE_5__ vm_map; int vm_maxsaddr; int vm_daddr; int vm_taddr; } ;
struct TYPE_35__ {int writemappings; } ;
struct TYPE_37__ {TYPE_2__ vnp; } ;
struct TYPE_38__ {TYPE_3__ un_pager; scalar_t__ handle; int type; scalar_t__ charge; int * cred; } ;
struct TYPE_36__ {int * td_ucred; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 TYPE_31__* VAR_9 ;
 int FUNC_4 (TYPE_6__*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_10 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_5__*,TYPE_5__*,TYPE_6__*,TYPE_6__*,scalar_t__*) ;
 int FUNC_10 (TYPE_6__*) ;
 TYPE_6__* FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*,int) ;
 TYPE_6__* FUNC_14 (TYPE_6__*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 () ;
 int FUNC_19 (TYPE_5__*) ;
 int FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_4__*,int ) ;
 int FUNC_22 (TYPE_4__*) ;
 int FUNC_23 (TYPE_4__*) ;
 int FUNC_24 (TYPE_4__**,int *,scalar_t__) ;
 int FUNC_25 (TYPE_4__*,scalar_t__,scalar_t__) ;
 struct vmspace* FUNC_26 (int ,int ,int ) ;
 int FUNC_27 (struct vmspace*) ;
 int FUNC_28 (struct vmspace*,struct vmspace*,TYPE_6__*) ;

struct vmspace *
FUNC_29(struct vmspace *VAR_11, vm_ooffset_t *VAR_12)
{
 struct vmspace *VAR_13;
 vm_map_t VAR_14, VAR_15;
 vm_map_entry_t VAR_16, VAR_17;
 vm_object_t VAR_18;
 int VAR_19, VAR_20;
 vm_inherit_t VAR_21;

 VAR_15 = &VAR_11->vm_map;

 VAR_13 = FUNC_26(FUNC_17(VAR_15), FUNC_16(VAR_15),
     VAR_10);
 if (VAR_13 == ((void*)0))
  return (((void*)0));

 VAR_13->vm_taddr = VAR_11->vm_taddr;
 VAR_13->vm_daddr = VAR_11->vm_daddr;
 VAR_13->vm_maxsaddr = VAR_11->vm_maxsaddr;
 FUNC_15(VAR_15);
 if (VAR_15->busy)
  FUNC_20(VAR_15);
 VAR_14 = &VAR_13->vm_map;
 VAR_20 = FUNC_19(VAR_14);
 FUNC_0(VAR_20, ("vmspace_fork: lock failed"));

 VAR_19 = FUNC_7(VAR_14->pmap, VAR_15->pmap);
 if (VAR_19 != 0) {
  FUNC_8(&VAR_15->lock);
  FUNC_8(&VAR_14->lock);
  FUNC_18();
  FUNC_27(VAR_13);
  return (((void*)0));
 }

 VAR_14->anon_loc = VAR_15->anon_loc;

 VAR_17 = VAR_15->header.next;

 while (VAR_17 != &VAR_15->header) {
  if (VAR_17->eflags & VAR_2)
   FUNC_5("vm_map_fork: encountered a submap");

  VAR_21 = VAR_17->inheritance;
  if ((VAR_17->eflags & VAR_0) != 0 &&
      VAR_21 != 130)
   VAR_21 = 131;

  switch (VAR_21) {
  case 130:
   break;

  case 129:



   VAR_18 = VAR_17->object.vm_object;
   if (VAR_18 == ((void*)0)) {
    FUNC_10(VAR_17);
    VAR_18 = VAR_17->object.vm_object;
   }





   FUNC_23(VAR_18);
   if (VAR_17->eflags & VAR_3) {
    FUNC_24(&VAR_17->object.vm_object,
        &VAR_17->offset,
        VAR_17->end - VAR_17->start);
    VAR_17->eflags &= ~VAR_3;

    FUNC_23(
        VAR_17->object.vm_object);






    FUNC_22(VAR_18);
    VAR_18 = VAR_17->object.vm_object;
   }
   FUNC_1(VAR_18);
   FUNC_21(VAR_18, VAR_8);
   if (VAR_17->cred != ((void*)0)) {
    FUNC_0(VAR_18->cred == ((void*)0), ("vmspace_fork both cred"));
    VAR_18->cred = VAR_17->cred;
    VAR_18->charge = VAR_17->end - VAR_17->start;
    VAR_17->cred = ((void*)0);
   }







   if (VAR_17->eflags & VAR_6 &&
       VAR_18->type == VAR_7) {
    FUNC_0(((struct vnode *)VAR_18->handle)->
        v_writecount > 0,
        ("vmspace_fork: v_writecount %p", VAR_18));
    FUNC_0(VAR_18->un_pager.vnp.writemappings > 0,
        ("vmspace_fork: vnp.writecount %p",
        VAR_18));
   }
   FUNC_2(VAR_18);




   VAR_16 = FUNC_11(VAR_14);
   *VAR_16 = *VAR_17;
   VAR_16->eflags &= ~(VAR_4 |
       VAR_1);
   VAR_16->wiring_thread = ((void*)0);
   VAR_16->wired_count = 0;
   if (VAR_16->eflags & VAR_6) {
    FUNC_25(VAR_18,
        VAR_16->start, VAR_16->end);
   }
   FUNC_13(VAR_16, 1);





   FUNC_12(VAR_14, VAR_16);
   FUNC_28(VAR_11, VAR_13, VAR_16);




   FUNC_6(VAR_14->pmap, VAR_15->pmap,
       VAR_16->start,
       (VAR_17->end - VAR_17->start),
       VAR_17->start);
   break;

  case 131:



   VAR_16 = FUNC_11(VAR_14);
   *VAR_16 = *VAR_17;



   VAR_16->eflags &= ~(VAR_4 |
       VAR_1 | VAR_6);
   VAR_16->wiring_thread = ((void*)0);
   VAR_16->wired_count = 0;
   VAR_16->object.vm_object = ((void*)0);
   VAR_16->cred = ((void*)0);
   FUNC_12(VAR_14, VAR_16);
   FUNC_28(VAR_11, VAR_13, VAR_16);
   FUNC_9(VAR_15, VAR_14, VAR_17,
       VAR_16, VAR_12);
   FUNC_13(VAR_16, 1);
   break;

  case 128:




   VAR_16 = FUNC_11(VAR_14);
   FUNC_4(VAR_16, 0, sizeof(*VAR_16));

   VAR_16->start = VAR_17->start;
   VAR_16->end = VAR_17->end;
   VAR_16->eflags = VAR_17->eflags &
       ~(VAR_4 | VAR_1 |
       VAR_6 | VAR_5);
   VAR_16->protection = VAR_17->protection;
   VAR_16->max_protection = VAR_17->max_protection;
   VAR_16->inheritance = 128;

   FUNC_12(VAR_14, VAR_16);
   FUNC_28(VAR_11, VAR_13, VAR_16);

   VAR_16->cred = VAR_9->td_ucred;
   FUNC_3(VAR_16->cred);
   *VAR_12 += (VAR_16->end - VAR_16->start);

   break;
  }
  VAR_17 = FUNC_14(VAR_17);
 }





 FUNC_8(&VAR_15->lock);
 FUNC_8(&VAR_14->lock);
 FUNC_18();

 return (VAR_13);
}
