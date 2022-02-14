
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_map_t ;
struct ucred {int dummy; } ;
struct proc {TYPE_1__* p_vmspace; } ;
struct TYPE_5__ {int pmap; } ;
struct TYPE_4__ {TYPE_2__ vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 unsigned long FUNC_3 (struct proc*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ucred*,int ) ;
 unsigned long FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (struct proc*,int ,unsigned long) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_9 ;

int
FUNC_11(struct proc *VAR_10, struct ucred *VAR_11, uintptr_t VAR_12, size_t VAR_13)
{
 vm_offset_t VAR_14, VAR_15, VAR_16, VAR_17;
 vm_size_t VAR_18, VAR_19;
 vm_map_t VAR_20;
 unsigned long VAR_21;
 int VAR_22;

 VAR_22 = FUNC_5(VAR_11, VAR_3);
 if (VAR_22)
  return (VAR_22);
 VAR_14 = VAR_12;
 VAR_19 = VAR_13;
 VAR_16 = VAR_14 + VAR_19;
 VAR_17 = FUNC_9(VAR_14);
 VAR_15 = FUNC_8(VAR_16);
 if (VAR_16 < VAR_14 || VAR_15 < VAR_14)
  return (VAR_0);
 VAR_18 = FUNC_2(VAR_15 - VAR_17);
 if (VAR_18 > VAR_9)
  return (VAR_1);
 VAR_20 = &VAR_10->p_vmspace->vm_map;
 FUNC_0(VAR_10);
 VAR_21 = FUNC_6(VAR_18 + FUNC_4(VAR_20->pmap));
 if (VAR_21 > FUNC_3(VAR_10, VAR_5)) {
  FUNC_1(VAR_10);
  return (VAR_1);
 }
 FUNC_1(VAR_10);
 VAR_22 = FUNC_10(VAR_20, VAR_17, VAR_15,
     VAR_7 | VAR_6);
 return (VAR_22 == VAR_2 ? 0 : VAR_1);
}
