
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int node_type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
 struct ib_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct ib_device *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_3->node_type) {
 case 134: return FUNC_1(VAR_2, "%d: CA\n", VAR_3->node_type);
 case 131: return FUNC_1(VAR_2, "%d: RNIC\n", VAR_3->node_type);
 case 129: return FUNC_1(VAR_2, "%d: usNIC\n", VAR_3->node_type);
 case 128: return FUNC_1(VAR_2, "%d: usNIC UDP\n", VAR_3->node_type);
 case 130: return FUNC_1(VAR_2, "%d: unspecified\n", VAR_3->node_type);
 case 132: return FUNC_1(VAR_2, "%d: switch\n", VAR_3->node_type);
 case 133: return FUNC_1(VAR_2, "%d: router\n", VAR_3->node_type);
 default: return FUNC_1(VAR_2, "%d: <unknown>\n", VAR_3->node_type);
 }
}
