
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* read_fn ) (int,char*,int) ;
typedef int ch ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char const*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3, read_fn VAR_4, const char *VAR_5,
    const int *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 char VAR_11;





 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_10 = VAR_6[VAR_9];
  VAR_8 = FUNC_3(VAR_5, VAR_10);
  if (VAR_8 < 0) {
   FUNC_1(VAR_3, "open", VAR_10);
   continue;
  }
  if (VAR_4(VAR_8, &VAR_11, sizeof(VAR_11)) < 0) {
   if ((VAR_10 & VAR_0) == VAR_1 ||
       (VAR_10 & VAR_0) == VAR_2)
    FUNC_1(VAR_3, "read failed", VAR_10);
   else
    FUNC_2(VAR_3, "read failed", VAR_10);
  } else {
   if (!((VAR_10 & VAR_0) == VAR_1 ||
       (VAR_10 & VAR_0) == VAR_2))
    FUNC_1(VAR_3, "read succeeded", VAR_10);
   else
    FUNC_2(VAR_3, "read succeeded", VAR_10);
  }
  FUNC_0(VAR_8);
 }
}
