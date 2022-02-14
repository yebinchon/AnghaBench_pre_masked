
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct reg_property {int num_values; scalar_t__ set_value; scalar_t__ def_value; int name; TYPE_1__* values; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {scalar_t__ of_value; scalar_t__ reg_value; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,char*,int ,scalar_t__,...) ;
 scalar_t__ FUNC_2 (struct device_node*,int ) ;
 scalar_t__ FUNC_3 (struct device_node*,int ,scalar_t__*) ;

__attribute__((used)) static u32 FUNC_4(struct device *VAR_0,
    const struct reg_property *VAR_1, size_t VAR_2)
{
 struct device_node *VAR_3 = VAR_0->of_node;
 u32 VAR_4 = 0;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_1++) {
  u32 VAR_7;

  if (VAR_1->num_values == 0) {
   if (FUNC_2(VAR_3, VAR_1->name))
    VAR_4 |= VAR_1->set_value;
   else
    VAR_4 |= VAR_1->def_value;
   continue;
  }

  if (FUNC_3(VAR_3, VAR_1->name, &VAR_7)) {
   FUNC_1(VAR_0, "%s not specified, using %08x\n",
    VAR_1->name, VAR_1->def_value);
   VAR_4 |= VAR_1->def_value;
   continue;
  }

  for (VAR_6 = 0; VAR_6 < VAR_1->num_values; VAR_6++) {
   if (VAR_1->values[VAR_6].of_value == VAR_7) {
    FUNC_1(VAR_0, "%s value %u, using %08x\n",
     VAR_1->name, VAR_7, VAR_1->values[VAR_6].reg_value);
    VAR_4 |= VAR_1->values[VAR_6].reg_value;
    break;
   }
  }

  if (VAR_6 == VAR_1->num_values) {
   FUNC_0(VAR_0, "DT property %s is not a valid value\n",
    VAR_1->name);
   VAR_4 |= VAR_1->def_value;
  }
 }

 return VAR_4;
}
