
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_6__ {int opcode; int len; int arg1; } ;
typedef TYPE_1__ ipfw_insn ;
typedef enum ipfw_opcodes { ____Placeholder_ipfw_opcodes } ipfw_opcodes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static ipfw_insn *
FUNC_1(ipfw_insn * VAR_3, enum ipfw_opcodes VAR_4, int VAR_5,
    int VAR_6, u_int16_t VAR_7)
{
 VAR_3->opcode = VAR_4;
 VAR_3->len = ((VAR_3->len | VAR_6) & (VAR_1 | VAR_2)) | (VAR_5 & VAR_0);
 VAR_3->arg1 = VAR_7;
 return FUNC_0(VAR_3);
}
