
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct vnode {int dummy; } ;
struct TYPE_5__ {int type; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 struct vnode* FUNC_1 (TYPE_1__*) ;

int
FUNC_2(vm_object_t VAR_10, struct vnode **VAR_11)
{

 FUNC_0(VAR_10);
 if (VAR_11 != ((void*)0))
  *VAR_11 = FUNC_1(VAR_10);
 switch (VAR_10->type) {
 case 134:
  return (VAR_1);
 case 128:
  return (VAR_8);
 case 129:
  if ((VAR_10->flags & VAR_9) != 0)
   return (VAR_8);
  return (VAR_6);
 case 133:
  return (VAR_2);
 case 131:
  return (VAR_4);
 case 135:
  return (VAR_0);
 case 130:
  return (VAR_5);
 case 132:
  return (VAR_3);
 default:
  return (VAR_7);
 }
}
