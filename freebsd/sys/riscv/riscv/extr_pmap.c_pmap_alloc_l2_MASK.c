
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
struct rwlock {int dummy; } ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_5__ {int ref_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__,struct rwlock**) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static vm_page_t
FUNC_6(pmap_t VAR_3, vm_offset_t VAR_4, struct rwlock **VAR_5)
{
 pd_entry_t *VAR_6;
 vm_page_t VAR_7;
 vm_pindex_t VAR_8;

retry:
 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (VAR_6 != ((void*)0) && (FUNC_5(VAR_6) & VAR_2) == 0) {

  VAR_7 = FUNC_0(FUNC_1(FUNC_5(VAR_6)));
  VAR_7->ref_count++;
 } else {

  VAR_8 = FUNC_4(VAR_4) >> VAR_0;
  VAR_7 = FUNC_2(VAR_3, VAR_1 + VAR_8, VAR_5);
  if (VAR_7 == ((void*)0) && VAR_5 != ((void*)0))
   goto retry;
 }
 return (VAR_7);
}
