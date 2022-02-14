
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ insn_byte_t ;
typedef int const insn_attr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int const*** VAR_2 ;
 int FUNC_0 (int const) ;

insn_attr_t FUNC_1(insn_byte_t VAR_3, insn_byte_t VAR_4,
       insn_byte_t VAR_5)
{
 const insn_attr_t *VAR_6;
 if (VAR_4 > VAR_1 || VAR_5 > VAR_0)
  return 0;

 VAR_6 = VAR_2[VAR_4][0];
 if (!VAR_6)
  return 0;
 if (!FUNC_0(VAR_6[VAR_3]) && VAR_5) {

  VAR_6 = VAR_2[VAR_4][VAR_5];
  if (!VAR_6)
   return 0;
 }
 return VAR_6[VAR_3];
}
