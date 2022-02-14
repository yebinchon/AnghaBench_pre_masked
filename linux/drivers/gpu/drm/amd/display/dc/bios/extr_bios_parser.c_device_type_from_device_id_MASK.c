
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct device_id {int enum_id; void* device_type; int member_0; } ;
 int FUNC_0 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static struct device_id FUNC_1(uint16_t VAR_4)
{

 struct device_id VAR_5 = {0};

 switch (VAR_4) {
 case 129:
  VAR_5.device_type = VAR_2;
  VAR_5.enum_id = 1;
  break;

 case 128:
  VAR_5.device_type = VAR_2;
  VAR_5.enum_id = 2;
  break;

 case 137:
  VAR_5.device_type = VAR_0;
  VAR_5.enum_id = 1;
  break;

 case 136:
  VAR_5.device_type = VAR_0;
  VAR_5.enum_id = 2;
  break;

 case 135:
  VAR_5.device_type = VAR_1;
  VAR_5.enum_id = 1;
  break;

 case 134:
  VAR_5.device_type = VAR_1;
  VAR_5.enum_id = 2;
  break;

 case 133:
  VAR_5.device_type = VAR_1;
  VAR_5.enum_id = 3;
  break;

 case 132:
  VAR_5.device_type = VAR_1;
  VAR_5.enum_id = 4;
  break;

 case 131:
  VAR_5.device_type = VAR_1;
  VAR_5.enum_id = 5;
  break;

 case 130:
  VAR_5.device_type = VAR_1;
  VAR_5.enum_id = 6;
  break;

 default:
  FUNC_0();
  VAR_5.device_type = VAR_3;
  VAR_5.enum_id = 0;
 }
 return VAR_5;
}
