
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pte_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned long,unsigned long,int) ;

void FUNC_2(struct mm_struct *VAR_2, pte_t *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;

 if (VAR_0) {
  VAR_5 = FUNC_0(VAR_3) & VAR_1;
  FUNC_1(VAR_2->context.id, VAR_4, VAR_5, 1);
 }
}
