
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lit_code_point_t ;
typedef int ecma_char_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ecma_char_t
FUNC_1 (lit_code_point_t VAR_5)
{
  FUNC_0 (VAR_5 > VAR_2);
  FUNC_0 (VAR_5 <= VAR_0);

  ecma_char_t VAR_6;
  VAR_6 = (ecma_char_t) ((VAR_5 - VAR_3) >> VAR_1);

  return (VAR_4 | VAR_6);
}
