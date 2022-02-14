
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct TYPE_4__ {int pte; } ;
typedef TYPE_1__ pte_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int ,unsigned long*) ;

int FUNC_2(struct vm_area_struct *VAR_1,
         unsigned long VAR_2, pte_t *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_0(*VAR_3))
  VAR_4 = FUNC_1(VAR_0,
      (unsigned long *) &VAR_3->pte);

 return VAR_4;
}
