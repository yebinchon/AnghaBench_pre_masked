
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct device* FUNC_1 (int ,int *,struct device_node*,int ) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,char*,int ) ;
 int FUNC_4 (struct device_node*,int *,int *,struct device*) ;
 int FUNC_5 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct device_node *VAR_4)
{
 struct device_node *VAR_5;
 struct device *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_4, "arm,vexpress,config-bridge", 0);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2, ((void*)0), VAR_5,
   VAR_3);
 FUNC_2(VAR_5);
 if (FUNC_0(!VAR_6))
  return -VAR_1;

 VAR_7 = FUNC_4(VAR_4, ((void*)0), ((void*)0), VAR_6);

 FUNC_5(VAR_6);

 return VAR_7;
}
