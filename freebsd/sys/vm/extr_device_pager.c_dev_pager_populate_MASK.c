
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_pindex_t ;
typedef TYPE_4__* vm_object_t ;
struct TYPE_9__ {TYPE_1__* ops; } ;
struct TYPE_10__ {TYPE_2__ devp; } ;
struct TYPE_11__ {TYPE_3__ un_pager; } ;
struct TYPE_8__ {int (* cdev_pg_populate ) (TYPE_4__*,int ,int,int ,int *,int *) ;} ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int ,int,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_2(vm_object_t VAR_1, vm_pindex_t VAR_2, int VAR_3,
    vm_prot_t VAR_4, vm_pindex_t *VAR_5, vm_pindex_t *VAR_6)
{

 FUNC_0(VAR_1);
 if (VAR_1->un_pager.devp.ops->cdev_pg_populate == ((void*)0))
  return (VAR_0);
 return (VAR_1->un_pager.devp.ops->cdev_pg_populate(VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_5, VAR_6));
}
