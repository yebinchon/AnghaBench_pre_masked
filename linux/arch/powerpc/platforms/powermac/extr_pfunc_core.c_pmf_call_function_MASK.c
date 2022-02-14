
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmf_function {int dummy; } ;
struct pmf_args {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pmf_function*,struct pmf_args*) ;
 struct pmf_function* FUNC_1 (struct device_node*,char const*) ;
 int FUNC_2 (struct pmf_function*) ;

int FUNC_3(struct device_node *VAR_1, const char *VAR_2,
        struct pmf_args *VAR_3)
{
 struct pmf_function *VAR_4 = FUNC_1(VAR_1, VAR_2);
 int VAR_5;

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 FUNC_2(VAR_4);
 return VAR_5;
}
