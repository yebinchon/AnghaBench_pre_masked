
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {void* syscfg_eng; void* syscfg; struct device* cpu; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct device *VAR_1 = VAR_0.cpu;
 struct device_node *VAR_2 = VAR_1->of_node;

 VAR_0.syscfg = FUNC_3(VAR_2, "st,syscfg");
 if (FUNC_0(VAR_0.syscfg)) {
  FUNC_2(VAR_1, "\"st,syscfg\" not supplied\n");
  return FUNC_1(VAR_0.syscfg);
 }

 VAR_0.syscfg_eng = FUNC_3(VAR_2, "st,syscfg-eng");
 if (FUNC_0(VAR_0.syscfg_eng)) {
  FUNC_2(VAR_1, "\"st,syscfg-eng\" not supplied\n");
  return FUNC_1(VAR_0.syscfg_eng);
 }

 return 0;
}
