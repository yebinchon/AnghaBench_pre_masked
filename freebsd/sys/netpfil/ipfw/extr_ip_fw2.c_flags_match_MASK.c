
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_char ;
struct TYPE_3__ {int arg1; } ;
typedef TYPE_1__ ipfw_insn ;



__attribute__((used)) static int
FUNC_0(ipfw_insn *VAR_0, u_int8_t VAR_1)
{
 u_char VAR_2;
 VAR_1 = ~VAR_1;

 if ( ((VAR_0->arg1 & 0xff) & VAR_1) != 0)
  return 0;
 VAR_2 = (VAR_0->arg1 >> 8) & 0xff;
 if ( (VAR_2 & VAR_1) != VAR_2)
  return 0;
 return 1;
}
