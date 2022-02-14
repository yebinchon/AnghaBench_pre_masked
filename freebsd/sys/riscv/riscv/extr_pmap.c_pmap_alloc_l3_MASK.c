
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_5__ {int ref_count; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (int ,int ,struct rwlock**) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static vm_page_t
FUNC_6(pmap_t VAR_0, vm_offset_t VAR_1, struct rwlock **VAR_2)
{
 vm_pindex_t VAR_3;
 pd_entry_t *VAR_4;
 vm_paddr_t VAR_5;
 vm_page_t VAR_6;




 VAR_3 = FUNC_4(VAR_1);
retry:



 VAR_4 = FUNC_3(VAR_0, VAR_1);





 if (VAR_4 != ((void*)0) && FUNC_5(VAR_4) != 0) {
  VAR_5 = FUNC_1(FUNC_5(VAR_4));
  VAR_6 = FUNC_0(VAR_5);
  VAR_6->ref_count++;
 } else {




  VAR_6 = FUNC_2(VAR_0, VAR_3, VAR_2);
  if (VAR_6 == ((void*)0) && VAR_2 != ((void*)0))
   goto retry;
 }
 return (VAR_6);
}
