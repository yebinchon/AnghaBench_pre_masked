
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const**) ;
 int FUNC_2 () ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, char *VAR_1)
{
 const char *VAR_2[4];

 FUNC_2();
 if (!VAR_1 || !(VAR_1 = FUNC_3(VAR_1)) || *VAR_1 == '-')
  FUNC_0("bad argument");
 if (!FUNC_4(VAR_0, "git-"))
  FUNC_0("bad command");

 VAR_2[0] = VAR_0 + 4;
 VAR_2[1] = VAR_1;
 VAR_2[2] = ((void*)0);

 return FUNC_1(VAR_2);
}
