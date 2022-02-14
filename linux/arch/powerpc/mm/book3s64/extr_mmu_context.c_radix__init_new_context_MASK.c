
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hash_context; } ;
struct mm_struct {TYPE_1__ context; int pgd; } ;
struct TYPE_4__ {int prtb0; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 unsigned long FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct mm_struct *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = (1 << VAR_2) - 1;
 VAR_6 = FUNC_1(VAR_1, VAR_7);
 if (VAR_6 < 0)
  return VAR_6;




 VAR_5 = FUNC_3();
 VAR_3[VAR_6].prtb0 = FUNC_2(VAR_5 | FUNC_0(VAR_4->pgd) | VAR_0);







 asm volatile("ptesync;isync" : : : "memory");

 VAR_4->context.hash_context = ((void*)0);

 return VAR_6;
}
