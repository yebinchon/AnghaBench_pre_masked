
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {char const* util; } ;


 int FUNC_0 () ;
 struct string_list_item* FUNC_1 (int ,char const*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0)
{
 struct string_list_item *VAR_1;
 VAR_1 = FUNC_1(FUNC_0(), VAR_0);
 return VAR_1 ? VAR_1->util : ((void*)0);
}
