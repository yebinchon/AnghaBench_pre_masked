
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (int *,int ) ;
 unsigned int FUNC_2 (struct device_node*,int ) ;
 struct device_node* FUNC_3 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_4(void)
{
 static struct device_node *VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_3(((void*)0), VAR_1);

 if (FUNC_0(!VAR_2))
  goto default_map;

 VAR_3 = FUNC_2(VAR_2, 0);
 if (!VAR_3)
  goto default_map;

 return VAR_3;

default_map:

 return FUNC_1(((void*)0), VAR_0);
}
