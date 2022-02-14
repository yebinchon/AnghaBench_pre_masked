
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char const**,int ) ;
 int FUNC_2 (char const*,char const**) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char const*,char* const*) ;
 scalar_t__ FUNC_5 (int,int*,int ) ;

int FUNC_6(const char *VAR_0, char *const *VAR_1)
{

 if (!FUNC_4(VAR_0, VAR_1)) {
  int VAR_2, VAR_3;
  int VAR_4;

  VAR_4 = FUNC_2(VAR_0, (const char **)VAR_1);
  VAR_2 = FUNC_1(VAR_0, (const char **)VAR_1, 0);
  if (VAR_2 < 0) {
   FUNC_3(VAR_4, -1);
   return -1;
  }
  if (FUNC_5(VAR_2, &VAR_3, 0) < 0)
   VAR_3 = 255;
  FUNC_3(VAR_4, VAR_3);
  FUNC_0(VAR_3);
 }
 return -1;
}
