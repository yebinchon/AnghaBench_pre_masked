
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*,int) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (char const*,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2, const char *VAR_3, int VAR_4,
    const int *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 char VAR_10[8192];





 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_9 = VAR_5[VAR_8];
  VAR_7 = FUNC_4(VAR_3, VAR_9);
  if (VAR_7 < 0) {
   FUNC_2(VAR_2, "open", VAR_9);
   continue;
  }
  if (FUNC_1(VAR_7, VAR_10, sizeof(VAR_10)) >= 0) {
   if (VAR_4 && ((VAR_9 & VAR_0) == VAR_1))
    FUNC_3(VAR_2, "directory succeeded",
        VAR_9);
   else if (VAR_4)
    FUNC_2(VAR_2, "directory succeeded",
        VAR_9);
   else
    FUNC_2(VAR_2, "file succeeded", VAR_9);
  } else {
   if (VAR_4 && ((VAR_9 & VAR_0) == VAR_1))
    FUNC_2(VAR_2, "directory failed",
        VAR_9);
   else if (VAR_4)
    FUNC_3(VAR_2, "directory failed", VAR_9);
   else
    FUNC_3(VAR_2, "file failed", VAR_9);
  }
  FUNC_0(VAR_7);
 }
}
