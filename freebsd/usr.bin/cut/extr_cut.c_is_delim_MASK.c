
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(wchar_t VAR_2)
{
 if (VAR_1) {
  if (VAR_2 == ' ' || VAR_2 == '\t')
   return 1;
 } else {
  if (VAR_2 == VAR_0)
   return 1;
 }
 return 0;
}
