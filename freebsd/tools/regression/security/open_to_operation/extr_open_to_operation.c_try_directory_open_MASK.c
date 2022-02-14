
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char const*,int *,int) ;
 int FUNC_3 (char const*,int) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, const char *VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5 >= 0) {
  if (VAR_4)
   FUNC_1(VAR_1, "opened", VAR_3);
  else
   FUNC_2(VAR_1, ((void*)0), VAR_3);
  FUNC_0(VAR_5);
 } else {
  if (VAR_4 && VAR_4 == VAR_0)
   FUNC_2(VAR_1, ((void*)0), VAR_3);
  else if (VAR_4 != 0)
   FUNC_1(VAR_1, "wrong errno", VAR_3);
  else
   FUNC_1(VAR_1, "failed", VAR_3);
 }
}
