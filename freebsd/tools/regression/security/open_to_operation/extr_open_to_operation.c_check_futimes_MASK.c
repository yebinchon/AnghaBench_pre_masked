
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char const*,int *,int) ;
 int FUNC_4 (char const*,int) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_0, const char *VAR_1, const int *VAR_2,
    int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;




 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = VAR_2[VAR_5];
  VAR_4 = FUNC_4(VAR_1, VAR_6);
  if (VAR_4 < 0) {
   FUNC_2(VAR_0, "open", VAR_6);
   continue;
  }
  if (FUNC_1(VAR_4, ((void*)0)) == 0)
   FUNC_3(VAR_0, ((void*)0), VAR_6);
  else
   FUNC_2(VAR_0, "failed", VAR_6);
  FUNC_0(VAR_4);
 }
}
