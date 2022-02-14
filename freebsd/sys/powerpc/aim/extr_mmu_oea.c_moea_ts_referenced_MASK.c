
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int mmu_t ;
struct TYPE_4__ {int oflags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(mmu_t VAR_3, vm_page_t VAR_4)
{
 int VAR_5;

 FUNC_0((VAR_4->oflags & VAR_1) == 0,
     ("moea_ts_referenced: page %p is not managed", VAR_4));
 FUNC_2(&VAR_2);
 VAR_5 = FUNC_1(VAR_4, VAR_0);
 FUNC_3(&VAR_2);
 return (VAR_5);
}
