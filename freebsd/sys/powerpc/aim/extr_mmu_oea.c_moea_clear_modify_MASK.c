
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int mmu_t ;
struct TYPE_6__ {int oflags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(mmu_t VAR_3, vm_page_t VAR_4)
{

 FUNC_0((VAR_4->oflags & VAR_1) == 0,
     ("moea_clear_modify: page %p is not managed", VAR_4));
 FUNC_5(VAR_4);

 if (!FUNC_2(VAR_4))
  return;
 FUNC_3(&VAR_2);
 FUNC_1(VAR_4, VAR_0);
 FUNC_4(&VAR_2);
}
