
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_page_bits_t ;
struct TYPE_7__ {int dirty; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static __inline void
FUNC_4(vm_page_t VAR_0, vm_page_bits_t VAR_1)
{

 FUNC_1(VAR_0);
 if (FUNC_3(VAR_0) && !FUNC_0(VAR_0))
  VAR_0->dirty &= ~VAR_1;
 else
  FUNC_2(VAR_0, &VAR_0->dirty, VAR_1);
}
