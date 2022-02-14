
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_3__* vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_4__* vm_object_t ;
typedef TYPE_5__* vm_map_t ;
typedef TYPE_6__* vm_map_entry_t ;
struct thread {TYPE_1__* td_proc; } ;
typedef int pmap_t ;
struct TYPE_31__ {unsigned int timestamp; } ;
struct TYPE_33__ {TYPE_5__ vm_map; } ;
struct TYPE_28__ {TYPE_4__* vm_object; } ;
struct TYPE_32__ {scalar_t__ start; scalar_t__ end; int eflags; scalar_t__ offset; TYPE_2__ object; } ;
struct TYPE_30__ {scalar_t__ type; } ;
struct TYPE_29__ {scalar_t__ dirty; int aflags; TYPE_4__* object; } ;
struct TYPE_27__ {TYPE_7__* p_vmspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__**) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_12 (uintptr_t) ;
 int FUNC_13 (char*,int) ;
 scalar_t__ FUNC_14 (uintptr_t) ;
 TYPE_6__* FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*,scalar_t__,TYPE_6__**) ;
 scalar_t__ FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_5__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*) ;
 TYPE_3__* FUNC_22 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (TYPE_7__*) ;

int
FUNC_25(struct thread *VAR_12, uintptr_t VAR_13, size_t VAR_14, char *VAR_15)
{
 pmap_t VAR_16;
 vm_map_t VAR_17;
 vm_map_entry_t VAR_18, VAR_19;
 vm_object_t VAR_20;
 vm_offset_t VAR_21, VAR_22, VAR_23, VAR_24;
 vm_paddr_t VAR_25;
 vm_page_t VAR_26;
 vm_pindex_t VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31;
 unsigned int VAR_32;





 VAR_24 = VAR_21 = FUNC_14(VAR_13);
 VAR_23 = FUNC_12(VAR_13 + VAR_14);
 VAR_17 = &VAR_12->td_proc->p_vmspace->vm_map;
 if (VAR_23 > FUNC_18(VAR_17) || VAR_23 < VAR_21)
  return (VAR_1);

 VAR_16 = FUNC_24(VAR_12->td_proc->p_vmspace);

 FUNC_16(VAR_17);
RestartScan:
 VAR_32 = VAR_17->timestamp;

 if (!FUNC_17(VAR_17, VAR_21, &VAR_19)) {
  FUNC_19(VAR_17);
  return (VAR_1);
 }






 VAR_29 = -1;
 while (VAR_19->start < VAR_23) {




  VAR_18 = VAR_19;
  VAR_19 = FUNC_15(VAR_18);
  if (VAR_18->end < VAR_23 &&
      VAR_19->start > VAR_18->end) {
   FUNC_19(VAR_17);
   return (VAR_1);
  }




  if ((VAR_18->eflags & VAR_2) ||
      VAR_18->object.vm_object == ((void*)0))
   continue;





  if (VAR_21 < VAR_18->start)
   VAR_21 = VAR_18->start;
  VAR_22 = VAR_18->end;
  if (VAR_22 > VAR_23)
   VAR_22 = VAR_23;

  for (; VAR_21 < VAR_22; VAR_21 += VAR_9) {





   VAR_26 = ((void*)0);
   VAR_20 = ((void*)0);
retry:
   VAR_25 = 0;
   VAR_30 = FUNC_11(VAR_16, VAR_21, &VAR_25);
   if (VAR_11) {




    ;
   } else if (VAR_25 != 0) {
    VAR_26 = FUNC_2(VAR_25);
    while (VAR_20 == ((void*)0) || VAR_26->object != VAR_20) {
     if (VAR_20 != ((void*)0))
      FUNC_5(VAR_20);
     VAR_20 = (vm_object_t)FUNC_6(
         &VAR_26->object);
     if (VAR_20 == ((void*)0))
      goto retry;
     FUNC_4(VAR_20);
    }
    if (VAR_25 != FUNC_8(VAR_16, VAR_21))
     goto retry;
    FUNC_0(FUNC_20(VAR_26),
        ("mincore: page %p is mapped but invalid",
        VAR_26));
   } else if (VAR_30 == 0) {






    if (VAR_18->object.vm_object != VAR_20) {
     if (VAR_20 != ((void*)0))
      FUNC_5(VAR_20);
     VAR_20 = VAR_18->object.vm_object;
     FUNC_4(VAR_20);
    }
    if (VAR_20->type == VAR_6 ||
        VAR_20->type == VAR_7 ||
        VAR_20->type == VAR_8) {
     VAR_27 = FUNC_1(VAR_18->offset +
         (VAR_21 - VAR_18->start));
     VAR_26 = FUNC_22(VAR_20, VAR_27);
     if (VAR_26 != ((void*)0) && FUNC_23(VAR_26))
      VAR_26 = ((void*)0);
     if (VAR_26 != ((void*)0))
      VAR_30 = VAR_3;
    }
   }
   if (VAR_26 != ((void*)0)) {
    FUNC_3(VAR_26->object);


    if (VAR_26->dirty == 0 && FUNC_9(VAR_26))
     FUNC_21(VAR_26);
    if (VAR_26->dirty != 0)
     VAR_30 |= VAR_4;
    if ((VAR_26->aflags & VAR_10) != 0 ||
        FUNC_10(VAR_26) ||
        (VAR_26->aflags & VAR_10) != 0)
     VAR_30 |= VAR_5;
   }
   if (VAR_20 != ((void*)0))
    FUNC_5(VAR_20);





   FUNC_19(VAR_17);




   VAR_31 = FUNC_7(VAR_21 - VAR_24);





   while ((VAR_29 + 1) < VAR_31) {
    ++VAR_29;
    VAR_28 = FUNC_13(VAR_15 + VAR_29, 0);
    if (VAR_28) {
     VAR_28 = VAR_0;
     goto done2;
    }
   }




   VAR_28 = FUNC_13(VAR_15 + VAR_31, VAR_30);
   if (VAR_28) {
    VAR_28 = VAR_0;
    goto done2;
   }





   FUNC_16(VAR_17);
   if (VAR_32 != VAR_17->timestamp)
    goto RestartScan;

   VAR_29 = VAR_31;
  }
 }





 FUNC_19(VAR_17);




 VAR_31 = FUNC_7(VAR_23 - VAR_24);
 while ((VAR_29 + 1) < VAR_31) {
  ++VAR_29;
  VAR_28 = FUNC_13(VAR_15 + VAR_29, 0);
  if (VAR_28) {
   VAR_28 = VAR_0;
   goto done2;
  }
 }





 FUNC_16(VAR_17);
 if (VAR_32 != VAR_17->timestamp)
  goto RestartScan;
 FUNC_19(VAR_17);
done2:
 return (VAR_28);
}
