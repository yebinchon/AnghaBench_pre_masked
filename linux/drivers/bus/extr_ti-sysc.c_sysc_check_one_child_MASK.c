
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysc {int dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct sysc*,struct device_node*) ;
 int FUNC_3 (struct sysc*,struct device_node*,int) ;

__attribute__((used)) static void FUNC_4(struct sysc *VAR_0,
     struct device_node *VAR_1)
{
 const char *VAR_2;

 VAR_2 = FUNC_1(VAR_1, "ti,hwmods", ((void*)0));
 if (VAR_2)
  FUNC_0(VAR_0->dev, "really a child ti,hwmods property?");

 FUNC_2(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_1, 1);
}
