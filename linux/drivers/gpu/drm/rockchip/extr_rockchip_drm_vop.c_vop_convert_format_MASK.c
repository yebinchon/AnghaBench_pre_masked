
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum vop_data_format { ____Placeholder_vop_data_format } vop_data_format ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum vop_data_format FUNC_1(uint32_t VAR_7)
{
 switch (VAR_7) {
 case 128:
 case 137:
 case 129:
 case 138:
  return VAR_1;
 case 130:
 case 135:
  return VAR_3;
 case 131:
 case 136:
  return VAR_2;
 case 134:
  return VAR_4;
 case 133:
  return VAR_5;
 case 132:
  return VAR_6;
 default:
  FUNC_0("unsupported format[%08x]\n", VAR_7);
  return -VAR_0;
 }
}
