
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct device* FUNC_2 (int) ;
 int FUNC_3 (struct device_node*,char*,int *) ;

int FUNC_4(int VAR_0)
{
 struct device_node *VAR_1;
 struct device *VAR_2;
 u32 VAR_3;
 int VAR_4;

 VAR_2 = FUNC_2(VAR_0);
 VAR_1 = VAR_2->of_node;

 VAR_4 = FUNC_3(VAR_1, "ibm,my-drc-index", &VAR_3);

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_3);

 return VAR_4;
}
