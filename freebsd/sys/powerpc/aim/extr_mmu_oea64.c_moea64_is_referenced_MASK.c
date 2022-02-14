
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int mmu_t ;
typedef int boolean_t ;
struct TYPE_4__ {int oflags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;

boolean_t
FUNC_2(mmu_t VAR_2, vm_page_t VAR_3)
{

 FUNC_0((VAR_3->oflags & VAR_1) == 0,
     ("moea64_is_referenced: page %p is not managed", VAR_3));

 return (FUNC_1(VAR_2, VAR_3, VAR_0));
}
