
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef int vm_memattr_t ;
struct TYPE_5__ {int busy_lock; int oflags; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,long) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_2(vm_page_t VAR_3, vm_paddr_t VAR_4,
    long VAR_5, vm_memattr_t VAR_6)
{
 long VAR_7;

 FUNC_0(VAR_3, VAR_5 * sizeof(*VAR_3));
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  FUNC_1(&VAR_3[VAR_7], VAR_4 + VAR_0 * VAR_7, VAR_6);
  VAR_3[VAR_7].oflags &= ~VAR_2;
  VAR_3[VAR_7].busy_lock = VAR_1;
 }
}
