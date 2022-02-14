
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef TYPE_4__* vm_object_t ;
struct TYPE_15__ {int q; } ;
struct TYPE_11__ {int devp_pglist; } ;
struct TYPE_12__ {TYPE_1__ devp; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_2__ un_pager; } ;
struct TYPE_13__ {int oflags; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(vm_object_t VAR_3, vm_page_t VAR_4)
{

 FUNC_2(VAR_3);
 FUNC_0((VAR_3->type == VAR_0 &&
     (VAR_4->oflags & VAR_1) != 0),
     ("Managed device or page obj %p m %p", VAR_3, VAR_4));
 FUNC_1(&VAR_3->un_pager.devp.devp_pglist, VAR_4, VAR_2.q);
 FUNC_3(VAR_4);
}
