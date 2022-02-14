
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 scalar_t__* FUNC_0 (scalar_t__*,int) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

void
FUNC_2(wchar_t VAR_3)
{
 if ((VAR_0 + 1) >= VAR_2) {
  VAR_2 += 64;
  VAR_1 = FUNC_0(VAR_1, (VAR_2 * sizeof (wchar_t)));
  if (VAR_1 == ((void*)0)) {
   FUNC_1("out of memory");
   VAR_0 = 0;
   VAR_2 = 0;
   return;
  }
 }

 VAR_1[VAR_0++] = VAR_3;
 VAR_1[VAR_0] = 0;
}
