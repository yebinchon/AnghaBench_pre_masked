
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_properties {scalar_t__ color; int color_present; scalar_t__ func_enum; int func_enum_present; int function; int label; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 scalar_t__ FUNC_1 (struct fwnode_handle*,char*) ;
 int FUNC_2 (struct fwnode_handle*,char*,int *) ;
 int FUNC_3 (struct fwnode_handle*,char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1,
       struct fwnode_handle *VAR_2,
       struct led_properties *VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return;

 if (FUNC_1(VAR_2, "label")) {
  VAR_4 = FUNC_2(VAR_2, "label", &VAR_3->label);
  if (VAR_4)
   FUNC_0(VAR_1, "Error parsing 'label' property (%d)\n", VAR_4);
  return;
 }

 if (FUNC_1(VAR_2, "color")) {
  VAR_4 = FUNC_3(VAR_2, "color", &VAR_3->color);
  if (VAR_4)
   FUNC_0(VAR_1, "Error parsing 'color' property (%d)\n", VAR_4);
  else if (VAR_3->color >= VAR_0)
   FUNC_0(VAR_1, "LED color identifier out of range\n");
  else
   VAR_3->color_present = 1;
 }


 if (!FUNC_1(VAR_2, "function"))
  return;

 VAR_4 = FUNC_2(VAR_2, "function", &VAR_3->function);
 if (VAR_4) {
  FUNC_0(VAR_1,
   "Error parsing 'function' property (%d)\n",
   VAR_4);
 }

 if (!FUNC_1(VAR_2, "function-enumerator"))
  return;

 VAR_4 = FUNC_3(VAR_2, "function-enumerator",
           &VAR_3->func_enum);
 if (VAR_4) {
  FUNC_0(VAR_1,
   "Error parsing 'function-enumerator' property (%d)\n",
   VAR_4);
 } else {
  VAR_3->func_enum_present = 1;
 }
}
