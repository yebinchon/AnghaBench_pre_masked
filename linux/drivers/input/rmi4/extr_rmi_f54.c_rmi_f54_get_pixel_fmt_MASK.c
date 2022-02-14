
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum rmi_f54_report_type { ____Placeholder_rmi_f54_report_type } rmi_f54_report_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(enum rmi_f54_report_type VAR_4, u32 *VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_4) {
 case 134:
  *VAR_5 = VAR_1;
  break;

 case 135:
  *VAR_5 = VAR_2;
  break;

 case 130:
 case 128:
 case 133:
 case 132:
  *VAR_5 = VAR_3;
  break;

 case 129:
 case 131:
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
