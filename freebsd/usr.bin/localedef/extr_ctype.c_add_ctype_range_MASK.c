
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int ctype_node_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;

void
FUNC_3(wchar_t VAR_2)
{
 ctype_node_t *VAR_3;
 wchar_t VAR_4;

 if (VAR_2 < VAR_1) {
  FUNC_1("malformed character range (%u ... %u))",
      VAR_1, VAR_2);
  return;
 }
 for (VAR_4 = VAR_1 + 1; VAR_4 <= VAR_2; VAR_4++) {
  if ((VAR_3 = FUNC_2(VAR_4)) == ((void*)0)) {
   VAR_0;
   return;
  }
  FUNC_0(VAR_3);
 }
 VAR_1 = VAR_2;

}
