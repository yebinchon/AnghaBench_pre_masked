
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 int * VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,char const*) ;

int FUNC_9(const char *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 wchar_t VAR_8[VAR_2];
 if (FUNC_8(VAR_8, VAR_5) < 0)
  return -1;

 while ((VAR_6 = FUNC_3(VAR_8)) == -1 && VAR_7 < FUNC_0(VAR_3)) {
  if (!FUNC_7(FUNC_1()))
   VAR_4 = FUNC_5(FUNC_1());
  if (VAR_4 != VAR_0)
   break;
  if (!FUNC_6(VAR_8)) {
   VAR_4 = VAR_1;
   break;
  }







  FUNC_2(VAR_3[VAR_7]);
  VAR_7++;
 }
 while (VAR_6 == -1 && VAR_4 == VAR_0 && FUNC_7(FUNC_1()) &&
        FUNC_4("Deletion of directory '%s' failed. "
   "Should I try again?", VAR_5))
        VAR_6 = FUNC_3(VAR_8);
 return VAR_6;
}
