
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_3(int VAR_7)
{
 HANDLE VAR_8 = (HANDLE)FUNC_2(VAR_7);

 VAR_6++;

 if (VAR_8 == VAR_4) {
  VAR_5 = VAR_0;
  return -1;
 }

 if (!FUNC_0(VAR_8)) {
  DWORD VAR_9 = FUNC_1();

  if (VAR_9 == VAR_3)
   VAR_5 = VAR_1;
  else
   VAR_5 = VAR_2;

  return -1;
 }

 return 0;
}
