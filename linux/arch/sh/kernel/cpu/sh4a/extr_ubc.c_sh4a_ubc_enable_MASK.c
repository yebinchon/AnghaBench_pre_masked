
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arch_hw_breakpoint {int len; int type; int address; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct arch_hw_breakpoint *VAR_1, int VAR_2)
{
 FUNC_2(VAR_0 | VAR_1->len | VAR_1->type, FUNC_1(VAR_2));
 FUNC_2(VAR_1->address, FUNC_0(VAR_2));
}
