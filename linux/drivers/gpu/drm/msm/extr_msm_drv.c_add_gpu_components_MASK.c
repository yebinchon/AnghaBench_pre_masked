
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct component_match {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct component_match**,int ,struct device_node*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2,
         struct component_match **VAR_3)
{
 struct device_node *VAR_4;

 VAR_4 = FUNC_2(((void*)0), VAR_1);
 if (!VAR_4)
  return 0;

 if (FUNC_1(VAR_4))
  FUNC_0(VAR_2, VAR_3, VAR_0, VAR_4);

 FUNC_3(VAR_4);

 return 0;
}
