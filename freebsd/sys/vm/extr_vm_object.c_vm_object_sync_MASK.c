
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_1__* vm_object_t ;
struct vnode {int v_vflag; } ;
struct mount {int dummy; } ;
typedef int boolean_t ;
struct TYPE_8__ {scalar_t__ backing_object_offset; scalar_t__ size; scalar_t__ type; struct vnode* handle; struct TYPE_8__* backing_object; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct vnode*,int ,int ) ;
 int FUNC_5 (struct vnode*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,scalar_t__,int) ;
 int FUNC_10 (struct mount*) ;
 int FUNC_11 (struct vnode*,int) ;
 int FUNC_12 (struct vnode*,struct mount**,int ) ;

boolean_t
FUNC_13(vm_object_t VAR_16, vm_ooffset_t VAR_17, vm_size_t VAR_18,
    boolean_t VAR_19, boolean_t VAR_20)
{
 vm_object_t VAR_21;
 struct vnode *VAR_22;
 struct mount *VAR_23;
 int VAR_24, VAR_25, VAR_26;
 boolean_t VAR_27;

 if (VAR_16 == ((void*)0))
  return (VAR_11);
 VAR_27 = VAR_11;
 VAR_24 = 0;
 FUNC_2(VAR_16);
 while ((VAR_21 = VAR_16->backing_object) != ((void*)0)) {
  FUNC_2(VAR_21);
  VAR_17 += VAR_16->backing_object_offset;
  FUNC_3(VAR_16);
  VAR_16 = VAR_21;
  if (VAR_16->size < FUNC_1(VAR_17 + VAR_18))
   VAR_18 = FUNC_0(VAR_16->size) - VAR_17;
 }
 if (VAR_16->type == VAR_9 &&
     FUNC_7(VAR_16) != 0 &&
     ((VAR_22 = VAR_16->handle)->v_vflag & VAR_12) == 0) {
  FUNC_3(VAR_16);
  (void) FUNC_12(VAR_22, &VAR_23, VAR_13);
  FUNC_11(VAR_22, VAR_1 | VAR_2);
  if (VAR_19 && !VAR_20 && VAR_17 == 0 &&
      FUNC_6(VAR_18) == VAR_16->size) {






   VAR_25 = 0;
   VAR_26 = VAR_11;
  } else {
   VAR_25 = (VAR_19 || VAR_20) ? VAR_5 : 0;
   VAR_25 |= VAR_20 ? (VAR_5 | VAR_4) : 0;
   VAR_26 = VAR_0;
  }
  FUNC_2(VAR_16);
  VAR_27 = FUNC_8(VAR_16, VAR_17, VAR_17 + VAR_18,
      VAR_25);
  FUNC_3(VAR_16);
  if (VAR_26)
   VAR_24 = FUNC_4(VAR_22, VAR_3, VAR_14);
  FUNC_5(VAR_22, 0);
  FUNC_10(VAR_23);
  if (VAR_24 != 0)
   VAR_27 = VAR_0;
  FUNC_2(VAR_16);
 }
 if ((VAR_16->type == VAR_9 ||
      VAR_16->type == VAR_8) && VAR_20) {
  if (VAR_16->type == VAR_8)





   VAR_25 = VAR_7;
  else if (VAR_15)
   VAR_25 = 0;
  else
   VAR_25 = VAR_6;
  FUNC_9(VAR_16, FUNC_1(VAR_17),
      FUNC_1(VAR_17 + VAR_18 + VAR_10), VAR_25);
 }
 FUNC_3(VAR_16);
 return (VAR_27);
}
