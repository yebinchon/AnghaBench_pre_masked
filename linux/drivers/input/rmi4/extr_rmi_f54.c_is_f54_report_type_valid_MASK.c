
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f54_data {int capabilities; } ;
typedef enum rmi_f54_report_type { ____Placeholder_rmi_f54_report_type } rmi_f54_report_type ;




 int VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static bool FUNC_0(struct f54_data *VAR_2,
         enum rmi_f54_report_type VAR_3)
{
 switch (VAR_3) {
 case 132:
  return VAR_2->capabilities & VAR_1;
 case 133:
 case 129:
  return VAR_2->capabilities & VAR_0;
 case 128:
  return VAR_2->capabilities & VAR_0;
 case 131:
 case 130:
  return 1;
 default:
  return 0;
 }
}
