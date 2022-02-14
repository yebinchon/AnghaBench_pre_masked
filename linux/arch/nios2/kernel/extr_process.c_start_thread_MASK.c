
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int estatus; unsigned long ea; unsigned long sp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int) ;

void FUNC_1(struct pt_regs *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 FUNC_0((void *) VAR_2, 0, sizeof(struct pt_regs));
 VAR_2->estatus = VAR_0 | VAR_1;
 VAR_2->ea = VAR_3;
 VAR_2->sp = VAR_4;
}
