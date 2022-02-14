
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (char const*) ;
 char* FUNC_3 (struct device_node*,char*,int *) ;
 struct device_node* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct sysc *VAR_2)
{
 struct device_node *VAR_3 = ((void*)0);
 const char *VAR_4;

 if (FUNC_1(VAR_1))
  return;

 if (VAR_1)
  return;

 VAR_3 = FUNC_2("/chosen");
 if (!VAR_3)
  goto err;

 VAR_4 = FUNC_3(VAR_3, "stdout-path", ((void*)0));
 if (!VAR_4)
  goto err;

 VAR_3 = FUNC_2(VAR_4);
 if (!VAR_3)
  goto err;

 VAR_1 = VAR_3;

 return;

err:
 VAR_1 = FUNC_0(-VAR_0);
}
