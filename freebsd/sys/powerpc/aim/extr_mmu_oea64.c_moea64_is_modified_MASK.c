
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int mmu_t ;
typedef int boolean_t ;
struct TYPE_5__ {int oflags; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

boolean_t
FUNC_3(mmu_t VAR_3, vm_page_t VAR_4)
{

 FUNC_0((VAR_4->oflags & VAR_2) == 0,
     ("moea64_is_modified: page %p is not managed", VAR_4));




 if (!FUNC_2(VAR_4))
  return (VAR_0);

 return (FUNC_1(VAR_3, VAR_4, VAR_1));
}
