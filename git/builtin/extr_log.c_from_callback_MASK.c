
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char** value; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char const* FUNC_1 (int ) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 char **VAR_4 = VAR_1->value;

 FUNC_0(*VAR_4);

 if (VAR_3)
  *VAR_4 = ((void*)0);
 else if (VAR_2)
  *VAR_4 = FUNC_2(VAR_2);
 else
  *VAR_4 = FUNC_2(FUNC_1(VAR_0));
 return 0;
}
