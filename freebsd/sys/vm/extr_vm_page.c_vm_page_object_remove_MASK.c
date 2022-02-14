
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct TYPE_8__ {scalar_t__ resident_page_count; scalar_t__ type; int handle; int memq; int rtree; } ;
struct TYPE_7__ {int ref_count; int pindex; TYPE_2__* object; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(vm_page_t VAR_3)
{
 vm_object_t VAR_4;
 vm_page_t VAR_5;

 VAR_4 = VAR_3->object;
 FUNC_2(VAR_4);
 FUNC_0((VAR_3->ref_count & VAR_1) != 0,
     ("page %p is missing its object ref", VAR_3));

 VAR_5 = FUNC_4(&VAR_4->rtree, VAR_3->pindex);
 FUNC_0(VAR_5 == VAR_3, ("removed page %p, expected page %p", VAR_5, VAR_3));




 FUNC_1(&VAR_4->memq, VAR_3, VAR_2);




 VAR_4->resident_page_count--;




 if (VAR_4->resident_page_count == 0 && VAR_4->type == VAR_0)
  FUNC_3(VAR_4->handle);
}
