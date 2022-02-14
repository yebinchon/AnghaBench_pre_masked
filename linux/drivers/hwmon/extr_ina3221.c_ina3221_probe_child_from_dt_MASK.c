
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ina3221_input {int disconnected; size_t shunt_resistor; int label; } ;
struct ina3221_data {struct ina3221_input* inputs; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct device*,char*,size_t,...) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*,char*,size_t*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3,
           struct device_node *VAR_4,
           struct ina3221_data *VAR_5)
{
 struct ina3221_input *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_4, "reg", &VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_3, "missing reg property of %pOFn\n", VAR_4);
  return VAR_8;
 } else if (VAR_7 > VAR_1) {
  FUNC_0(VAR_3, "invalid reg %d of %pOFn\n", VAR_7, VAR_4);
  return VAR_8;
 }

 VAR_6 = &VAR_5->inputs[VAR_7];


 if (!FUNC_1(VAR_4)) {
  VAR_6->disconnected = 1;
  return 0;
 }


 FUNC_2(VAR_4, "label", &VAR_6->label);


 if (!FUNC_3(VAR_4, "shunt-resistor-micro-ohms", &VAR_7)) {
  if (VAR_7 < 1 || VAR_7 > VAR_2) {
   FUNC_0(VAR_3, "invalid shunt resistor value %u of %pOFn\n",
    VAR_7, VAR_4);
   return -VAR_0;
  }
  VAR_6->shunt_resistor = VAR_7;
 }

 return 0;
}
