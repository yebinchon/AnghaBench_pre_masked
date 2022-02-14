
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns_i3c_cmd {int error; } ;
typedef enum i3c_error_code { ____Placeholder_i3c_error_code } i3c_error_code ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum i3c_error_code FUNC_0(struct cdns_i3c_cmd *VAR_4)
{
 switch (VAR_4->error) {
 case 131:
  return VAR_0;

 case 130:
  return VAR_1;

 case 129:
 case 128:
  return VAR_2;

 default:
  break;
 }

 return VAR_3;
}
