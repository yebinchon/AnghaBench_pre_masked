
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct config_set_element {struct string_list const value_list; } ;
struct config_set {int dummy; } ;


 struct config_set_element* FUNC_0 (struct config_set*,char const*) ;

const struct string_list *FUNC_1(struct config_set *VAR_0, const char *VAR_1)
{
 struct config_set_element *VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2 ? &VAR_2->value_list : ((void*)0);
}
