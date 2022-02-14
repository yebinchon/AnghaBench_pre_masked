
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device_node const*,char*,int*) ;

__attribute__((used)) static int FUNC_1(const struct device_node *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, "bus-width", &VAR_6);
 if (VAR_7 == -VAR_0)
  return 0;
 if (VAR_7)
  return VAR_7;

 switch (VAR_6) {
 case 12:
  return VAR_1;
 case 16:
  return VAR_2;
 case 18:
  return VAR_3;
 case 24:
  return VAR_4;
 default:
  return -VAR_0;
 }
}
