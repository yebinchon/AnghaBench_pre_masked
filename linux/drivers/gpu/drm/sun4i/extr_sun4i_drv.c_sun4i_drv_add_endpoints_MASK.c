
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct endpoint_list {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct component_match {int dummy; } ;


 int FUNC_0 (char*,struct device_node*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,struct component_match**,int ,struct device_node*) ;
 scalar_t__ FUNC_2 (struct device_node*) ;
 scalar_t__ FUNC_3 (struct device_node*) ;
 scalar_t__ FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (struct device_node*) ;
 scalar_t__ FUNC_6 (struct device_node*) ;
 scalar_t__ FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct endpoint_list*,struct device_node*,int) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_1,
       struct endpoint_list *VAR_2,
       struct component_match **VAR_3,
       struct device_node *VAR_4)
{
 int VAR_5 = 0;
 if (!FUNC_5(VAR_4) &&
     !FUNC_2(VAR_4))
  return 0;





 if (FUNC_3(VAR_4))
  return 0;






 if (!(FUNC_5(VAR_4) ||
       FUNC_4(VAR_4)) ||
     (FUNC_6(VAR_4) &&
      FUNC_2(VAR_4))) {

  FUNC_0("Adding component %pOF\n", VAR_4);
  FUNC_1(VAR_1, VAR_3, VAR_0, VAR_4);
  VAR_5++;
 }


 FUNC_8(VAR_2, VAR_4, 1);


 if (FUNC_7(VAR_4)) {
  FUNC_8(VAR_2, VAR_4, 3);
  FUNC_8(VAR_2, VAR_4, 5);
 }

 return VAR_5;
}
