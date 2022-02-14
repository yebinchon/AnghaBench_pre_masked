
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct defined_value {void* d_value; void* d_name; } ;


 int FUNC_0 (int *,struct defined_value*,int ) ;
 struct defined_value* FUNC_1 (int,int) ;
 void* FUNC_2 (char const*) ;
 int VAR_0 ;
 char* FUNC_3 (char const*) ;
 int VAR_1 ;
 int FUNC_4 (char*,char const*,char const*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*,char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2, const char *VAR_3)
{
 struct defined_value *VAR_4;
 const char *VAR_5;

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 != ((void*)0))
  FUNC_6(1, "variable %s already defined", VAR_2);

 FUNC_4("defining variable %s=%s", VAR_2, VAR_3);

 VAR_4 = FUNC_1(1, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  FUNC_5(1, "calloc");
 VAR_4->d_name = FUNC_2(VAR_2);
 VAR_4->d_value = FUNC_2(VAR_3);

 FUNC_0(&VAR_1, VAR_4, VAR_0);
}
