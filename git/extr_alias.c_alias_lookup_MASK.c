
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_alias_data {char const* member_0; char* v; int * member_1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct config_alias_data*) ;

char *FUNC_1(const char *VAR_1)
{
 struct config_alias_data VAR_2 = { VAR_1, ((void*)0) };

 FUNC_0(VAR_0, &VAR_2);

 return VAR_2.v;
}
