
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
typedef int pgd_t ;
struct TYPE_2__ {struct mm_struct* pt_mm; } ;


 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(pgd_t *VAR_0, struct mm_struct *VAR_1)
{
 FUNC_0(VAR_0)->pt_mm = VAR_1;
}
