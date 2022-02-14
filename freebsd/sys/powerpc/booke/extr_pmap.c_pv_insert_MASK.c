
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_offset_t ;
typedef TYPE_3__* pv_entry_t ;
typedef int pmap_t ;
struct TYPE_9__ {int pv_va; int pv_pmap; } ;
struct TYPE_7__ {int pv_list; } ;
struct TYPE_8__ {TYPE_1__ md; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_3__* FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(pmap_t VAR_4, vm_offset_t VAR_5, vm_page_t VAR_6)
{
 pv_entry_t VAR_7;





 VAR_7 = FUNC_3();
 if (VAR_7 == ((void*)0))
  FUNC_2("pv_insert: no pv entries!");

 VAR_7->pv_pmap = VAR_4;
 VAR_7->pv_va = VAR_5;


 FUNC_0(VAR_4, VAR_0);
 FUNC_4(&VAR_3, VAR_1);

 FUNC_1(&VAR_6->md.pv_list, VAR_7, VAR_2);


}
