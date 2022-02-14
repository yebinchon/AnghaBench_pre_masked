
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uprobe_opcode_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

bool FUNC_1(uprobe_opcode_t *VAR_1)
{
 return (FUNC_0(*VAR_1) & 0x0fffffff) ==
  (VAR_0 & 0x0fffffff);
}
