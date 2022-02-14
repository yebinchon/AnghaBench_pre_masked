
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (char*,int*,int) ;

int FUNC_3(wchar_t *VAR_4, size_t VAR_5)
{
 int VAR_6;

 if (VAR_5 > VAR_1) {
  VAR_3 = VAR_0;
  return -1;
 }

 if ((VAR_6 = FUNC_1(VAR_4, (int)VAR_5)) < 0)
  return -1;


 if (FUNC_2(L"\\\\", VAR_4, 2) == 0) {





  if (VAR_6 > VAR_2 - 4) {
   VAR_3 = VAR_0;
   return -1;
  }

  FUNC_0(VAR_4+2, VAR_4, sizeof(wchar_t) * VAR_6);
  VAR_4[0] = L'U';
  VAR_4[1] = L'N';
  VAR_4[2] = L'C';

  VAR_6 += 2;
 }





 else if (VAR_6 > VAR_2 - 2) {
  VAR_3 = VAR_0;
  return -1;
 }

 return VAR_6;
}
