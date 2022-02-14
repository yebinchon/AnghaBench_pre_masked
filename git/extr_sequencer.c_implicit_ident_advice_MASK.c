
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (int ) ;
 char* FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static const char *FUNC_5(void)
{
 char *VAR_2 = FUNC_1("~/.gitconfig", 0);
 char *VAR_3 = FUNC_4("config");
 int VAR_4 = FUNC_2(VAR_2) || FUNC_2(VAR_3);

 FUNC_3(VAR_2);
 FUNC_3(VAR_3);

 if (VAR_4)
  return FUNC_0(VAR_0);
 else
  return FUNC_0(VAR_1);

}
