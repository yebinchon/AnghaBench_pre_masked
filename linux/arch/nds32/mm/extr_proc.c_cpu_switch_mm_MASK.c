
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long id; } ;
struct mm_struct {int pgd; TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct mm_struct *VAR_3)
{
 unsigned long VAR_4;
 VAR_4 = FUNC_0(VAR_1);
 VAR_4 = (VAR_4 & ~VAR_2) | VAR_3->context.id;
 FUNC_1(VAR_4, VAR_1);
 FUNC_2(FUNC_3(VAR_3->pgd), VAR_0);
}
