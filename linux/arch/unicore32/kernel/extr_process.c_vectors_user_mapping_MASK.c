
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (struct mm_struct*,int,int ,int,int *) ;

int FUNC_1(void)
{
 struct mm_struct *VAR_8 = VAR_7->mm;
 return FUNC_0(VAR_8, 0xffff0000, VAR_0,
           VAR_6 | VAR_3 |
           VAR_5 | VAR_4 |
           VAR_2 | VAR_1,
           ((void*)0));
}
