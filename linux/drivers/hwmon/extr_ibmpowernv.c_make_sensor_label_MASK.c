
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sensor_data {int label; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device_node*,char*,int*) ;
 size_t FUNC_2 (int ,int,char*,...) ;

__attribute__((used)) static void FUNC_3(struct device_node *VAR_0,
         struct sensor_data *VAR_1, const char *VAR_2)
{
 u32 VAR_3;
 size_t VAR_4;

 VAR_4 = FUNC_2(VAR_1->label, sizeof(VAR_1->label), "%s", VAR_2);




 if (!FUNC_1(VAR_0, "ibm,pir", &VAR_3)) {
  int VAR_5 = FUNC_0(VAR_3);

  if (VAR_5 >= 0)




   VAR_4 += FUNC_2(VAR_1->label + VAR_4,
          sizeof(VAR_1->label) - VAR_4, " %d",
          VAR_5);
  else
   VAR_4 += FUNC_2(VAR_1->label + VAR_4,
          sizeof(VAR_1->label) - VAR_4, " phy%d", VAR_3);
 }




 if (!FUNC_1(VAR_0, "ibm,chip-id", &VAR_3))
  VAR_4 += FUNC_2(VAR_1->label + VAR_4, sizeof(VAR_1->label) - VAR_4,
         " %d", VAR_3 & 0xffff);
}
