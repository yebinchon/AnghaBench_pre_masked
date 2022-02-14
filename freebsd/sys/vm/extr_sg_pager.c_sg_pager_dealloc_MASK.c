
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_page_t ;
typedef TYPE_3__* vm_object_t ;
struct sglist {int dummy; } ;
struct TYPE_9__ {int q; } ;
struct TYPE_6__ {int sgp_pglist; } ;
struct TYPE_7__ {TYPE_1__ sgp; } ;
struct TYPE_8__ {int type; struct sglist* handle; TYPE_2__ un_pager; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (struct sglist*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(vm_object_t VAR_2)
{
 struct sglist *VAR_3;
 vm_page_t VAR_4;




 while ((VAR_4 = FUNC_0(&VAR_2->un_pager.sgp.sgp_pglist)) != 0) {
  FUNC_1(&VAR_2->un_pager.sgp.sgp_pglist, VAR_4, VAR_1.q);
  FUNC_3(VAR_4);
 }

 VAR_3 = VAR_2->handle;
 FUNC_2(VAR_3);
 VAR_2->handle = ((void*)0);
 VAR_2->type = VAR_0;
}
