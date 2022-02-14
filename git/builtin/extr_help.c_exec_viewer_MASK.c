
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ,char const*) ;

__attribute__((used)) static void FUNC_8(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = FUNC_5(VAR_0);

 if (!FUNC_6(VAR_0, "man"))
  FUNC_3(VAR_2, VAR_1);
 else if (!FUNC_6(VAR_0, "woman"))
  FUNC_4(VAR_2, VAR_1);
 else if (!FUNC_6(VAR_0, "konqueror"))
  FUNC_2(VAR_2, VAR_1);
 else if (VAR_2)
  FUNC_1(VAR_2, VAR_1);
 else
  FUNC_7(FUNC_0("'%s': unknown man viewer."), VAR_0);
}
