
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static int FUNC_4(__be32 VAR_1)
{
 struct device_node *VAR_2;

 VAR_2 = FUNC_2(FUNC_0(VAR_1));
 if (!VAR_2)
  return -VAR_0;

 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 return 0;
}
