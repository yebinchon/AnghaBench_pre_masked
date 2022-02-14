
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*,struct device_node*) ;
 struct device_node* FUNC_2 (int ,struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ) ;
 int FUNC_5 (struct device_node*) ;

__attribute__((used)) static int FUNC_6(__be32 VAR_1, __be32 VAR_2)
{
 struct device_node *VAR_3;
 struct device_node *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(FUNC_0(VAR_1));
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_2, VAR_4);
 if (!VAR_3) {
  FUNC_5(VAR_4);
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5)
  FUNC_3(VAR_3);

 FUNC_5(VAR_4);
 return VAR_5;
}
