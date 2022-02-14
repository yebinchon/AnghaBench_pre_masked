
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (char*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static int FUNC_4(int *VAR_1, int *VAR_2)
{
 struct device_node *VAR_3;

 VAR_3 = FUNC_0("/");
 if (!VAR_3)
  return -VAR_0;

 *VAR_1 = FUNC_1(VAR_3);
 *VAR_2 = FUNC_2(VAR_3);

 FUNC_3(VAR_3);

 return 0;
}
