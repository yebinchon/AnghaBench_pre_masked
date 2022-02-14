
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_paddr_t ;
struct TYPE_4__ {int mas1; } ;
typedef TYPE_1__ tlb_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_1(vm_paddr_t VAR_2, tlb_entry_t *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(VAR_3, VAR_4);
  if ((VAR_3->mas1 & VAR_0) == 0)
   return (VAR_4);
 }
 return (-1);
}
