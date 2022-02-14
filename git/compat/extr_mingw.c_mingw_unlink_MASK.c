
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,char const*) ;

int FUNC_8(const char *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 wchar_t VAR_5[VAR_0];
 if (FUNC_7(VAR_5, VAR_2) < 0)
  return -1;


 FUNC_3(VAR_5, 0666);
 while ((VAR_3 = FUNC_4(VAR_5)) == -1 && VAR_4 < FUNC_0(VAR_1)) {
  if (!FUNC_6(FUNC_1()))
   break;







  FUNC_2(VAR_1[VAR_4]);
  VAR_4++;
 }
 while (VAR_3 == -1 && FUNC_6(FUNC_1()) &&
        FUNC_5("Unlink of file '%s' failed. "
   "Should I try again?", VAR_2))
        VAR_3 = FUNC_4(VAR_5);
 return VAR_3;
}
