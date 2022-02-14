
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int * vm_page_t ;
typedef TYPE_4__* vm_object_t ;
struct TYPE_12__ {int devp_pglist; int dev; TYPE_1__* ops; } ;
struct TYPE_11__ {TYPE_3__ devp; } ;
struct TYPE_13__ {scalar_t__ type; int * handle; TYPE_2__ un_pager; } ;
struct TYPE_10__ {int (* cdev_pg_dtor ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(vm_object_t VAR_5)
{
 vm_page_t VAR_6;

 FUNC_3(VAR_5);
 VAR_5->un_pager.devp.ops->cdev_pg_dtor(VAR_5->un_pager.devp.dev);

 FUNC_5(&VAR_2);
 FUNC_1(&VAR_3, VAR_5, VAR_4);
 FUNC_6(&VAR_2);
 FUNC_2(VAR_5);

 if (VAR_5->type == VAR_1) {



  while ((VAR_6 = FUNC_0(&VAR_5->un_pager.devp.devp_pglist))
      != ((void*)0))
   FUNC_4(VAR_5, VAR_6);
 }
 VAR_5->handle = ((void*)0);
 VAR_5->type = VAR_0;
}
