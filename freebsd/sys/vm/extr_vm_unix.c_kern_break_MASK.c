
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* vm_map_t ;
struct TYPE_13__ {int flags; scalar_t__ size; int pmap; } ;
struct vmspace {int vm_dsize; scalar_t__ vm_daddr; TYPE_1__ vm_map; } ;
struct thread {TYPE_8__* td_proc; } ;
typedef scalar_t__ rlim_t ;
struct TYPE_14__ {struct vmspace* p_vmspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_8__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_8__*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_5 (struct thread*,int ) ;
 int VAR_16 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_8 (TYPE_8__*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_8__*,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_12 (TYPE_1__*,int *,int ,scalar_t__,scalar_t__,int,int ,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,scalar_t__,scalar_t__,int) ;

int
FUNC_17(struct thread *VAR_18, uintptr_t *VAR_19)
{
 struct vmspace *VAR_20 = VAR_18->td_proc->p_vmspace;
 vm_map_t VAR_21 = &VAR_20->vm_map;
 vm_offset_t VAR_22, VAR_23, VAR_24;
 rlim_t VAR_25, VAR_26, VAR_27;
 int VAR_28, VAR_29;
 int VAR_30 = 0;

 VAR_25 = FUNC_5(VAR_18, VAR_6);
 VAR_26 = FUNC_5(VAR_18, VAR_7);
 VAR_27 = FUNC_5(VAR_18, VAR_8);

 VAR_22 = FUNC_10(*VAR_19);
 FUNC_13(VAR_21);

 VAR_24 = FUNC_10((vm_offset_t) VAR_20->vm_daddr);
 VAR_23 = VAR_24 + FUNC_4(VAR_20->vm_dsize);
 if (VAR_22 > VAR_24) {




  if (VAR_22 - VAR_24 > VAR_25 && VAR_22 > VAR_23) {
   VAR_30 = VAR_0;
   goto done;
  }
  if (VAR_22 > FUNC_14(VAR_21)) {
   VAR_30 = VAR_0;
   goto done;
  }
 } else if (VAR_22 < VAR_24) {







  VAR_22 = VAR_23;
  goto done;
 }

 if (VAR_22 > VAR_23) {
  if (!VAR_16 && VAR_21->flags & VAR_2) {
   if (FUNC_7(FUNC_6(VAR_21->pmap)) +
       (VAR_22 - VAR_23) > VAR_26) {
    VAR_30 = VAR_0;
    goto done;
   }
  }
  if (VAR_21->size + (VAR_22 - VAR_23) > VAR_27) {
   VAR_30 = VAR_0;
   goto done;
  }
  VAR_28 = VAR_14;




  VAR_29 = FUNC_12(VAR_21, ((void*)0), 0, VAR_23, VAR_22, VAR_28, VAR_12,
      0);
  if (VAR_29 == VAR_1 && (VAR_21->flags & VAR_2) != 0) {
   VAR_29 = FUNC_16(VAR_21, VAR_23, VAR_22,
       VAR_11 | VAR_10);
   if (VAR_29 != VAR_1)
    FUNC_11(VAR_21, VAR_23, VAR_22);
  }
  if (VAR_29 != VAR_1) {
   VAR_30 = VAR_0;
   goto done;
  }
  VAR_20->vm_dsize += FUNC_3(VAR_22 - VAR_23);
 } else if (VAR_22 < VAR_23) {
  VAR_29 = FUNC_11(VAR_21, VAR_22, VAR_23);
  if (VAR_29 != VAR_1) {
   VAR_30 = VAR_0;
   goto done;
  }
  VAR_20->vm_dsize -= FUNC_3(VAR_23 - VAR_22);
 }
done:
 FUNC_15(VAR_21);

 if (VAR_30 == 0)
  *VAR_19 = VAR_22;

 return (VAR_30);
}
