
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_pindex_t ;
typedef int vm_ooffset_t ;
typedef TYPE_3__* vm_object_t ;
typedef int u_short ;
struct ucred {int dummy; } ;
struct cdev_pager_ops {scalar_t__ (* cdev_pg_ctor ) (void*,int,int ,int,struct ucred*,int *) ;int * cdev_pg_populate; } ;
typedef enum obj_type { ____Placeholder_obj_type } obj_type ;
struct TYPE_10__ {struct cdev_pager_ops* ops; int devp_pglist; void* dev; } ;
struct TYPE_11__ {TYPE_1__ devp; } ;
struct TYPE_12__ {scalar_t__ size; int type; struct TYPE_12__* handle; TYPE_2__ un_pager; int pg_color; int flags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (void*,int,int ,int,struct ucred*,int *) ;
 TYPE_3__* FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_11 (int *,void*) ;

vm_object_t
FUNC_12(void *VAR_9, enum obj_type VAR_10, struct cdev_pager_ops *VAR_11,
    vm_ooffset_t VAR_12, vm_prot_t VAR_13, vm_ooffset_t VAR_14, struct ucred *VAR_15)
{
 vm_object_t VAR_16, VAR_17;
 vm_pindex_t VAR_18;
 u_short VAR_19;

 if (VAR_10 != VAR_0 && VAR_10 != VAR_1)
  return (((void*)0));
 FUNC_0(VAR_10 == VAR_1 || VAR_11->cdev_pg_populate == ((void*)0),
     ("populate on unmanaged device pager"));




 if (VAR_14 & VAR_5)
  return (((void*)0));
 VAR_12 = FUNC_6(VAR_12);
 VAR_18 = FUNC_1(VAR_14) + FUNC_1(VAR_12);
 if (VAR_18 > VAR_3 || VAR_18 < FUNC_1(VAR_14) ||
     VAR_18 < FUNC_1(VAR_12))
  return (((void*)0));

 if (VAR_11->cdev_pg_ctor(VAR_9, VAR_12, VAR_13, VAR_14, VAR_15, &VAR_19) != 0)
  return (((void*)0));
 FUNC_4(&VAR_6);




 VAR_17 = ((void*)0);
 VAR_16 = FUNC_11(&VAR_7, VAR_9);
 if (VAR_16 == ((void*)0)) {





  FUNC_5(&VAR_6);
  VAR_17 = FUNC_8(VAR_10, VAR_18);
  VAR_17->flags |= VAR_2;
  VAR_17->pg_color = VAR_19;
  VAR_17->handle = VAR_9;
  VAR_17->un_pager.devp.ops = VAR_11;
  VAR_17->un_pager.devp.dev = VAR_9;
  FUNC_2(&VAR_17->un_pager.devp.devp_pglist);
  FUNC_4(&VAR_6);
  VAR_16 = FUNC_11(&VAR_7, VAR_9);
  if (VAR_16 != ((void*)0)) {



   if (VAR_18 > VAR_16->size)
    VAR_16->size = VAR_18;
   FUNC_0(VAR_16->type == VAR_10,
       ("Inconsistent device pager type %p %d",
       VAR_16, VAR_10));
   FUNC_0(VAR_16->un_pager.devp.ops == VAR_11,
       ("Inconsistent devops %p %p", VAR_16, VAR_11));
  } else {
   VAR_16 = VAR_17;
   VAR_17 = ((void*)0);
   VAR_16->handle = VAR_9;
   FUNC_3(&VAR_7, VAR_16,
       VAR_8);
   if (VAR_11->cdev_pg_populate != ((void*)0))
    FUNC_10(VAR_16, VAR_4);
  }
 } else {
  if (VAR_18 > VAR_16->size)
   VAR_16->size = VAR_18;
  FUNC_0(VAR_16->type == VAR_10,
      ("Inconsistent device pager type %p %d", VAR_16, VAR_10));
 }
 FUNC_5(&VAR_6);
 if (VAR_17 != ((void*)0)) {
  VAR_17->handle = VAR_17;
  FUNC_4(&VAR_6);
  FUNC_3(&VAR_7, VAR_17,
      VAR_8);
  FUNC_5(&VAR_6);
  FUNC_9(VAR_17);
 }
 return (VAR_16);
}
