
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct repository {int config; } ;


 int FUNC_0 (struct repository*) ;
 struct string_list const* FUNC_1 (int ,char const*) ;

const struct string_list *FUNC_2(struct repository *VAR_0,
            const char *VAR_1)
{
 FUNC_0(VAR_0);
 return FUNC_1(VAR_0->config, VAR_1);
}
