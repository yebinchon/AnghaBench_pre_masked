
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {int dummy; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (char*) ;
 struct of_device_id* FUNC_1 (int ,struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int VAR_0 ;

__attribute__((used)) static const struct of_device_id *FUNC_3(void)
{
 struct device_node *VAR_1;
 const struct of_device_id *VAR_2;

 VAR_1 = FUNC_0("/");
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_1);

 return VAR_2;
}
