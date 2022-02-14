
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_page_bits_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int uintmax_t ;
struct TYPE_3__ {int dirty; scalar_t__ pindex; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(vm_page_t VAR_0, vm_ooffset_t VAR_1)
{

 FUNC_1(FUNC_0(VAR_0->pindex) <= VAR_1 &&
     VAR_1 < FUNC_0(VAR_0->pindex + 1),
     ("page %p pidx %ju offset %ju", VAR_0, (uintmax_t)VAR_0->pindex,
     (uintmax_t)VAR_1));
 return ((VAR_0->dirty & ((vm_page_bits_t)1 << FUNC_2(VAR_1))) != 0);
}
