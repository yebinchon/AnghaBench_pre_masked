
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct device_id {int raw_device_tag; int enum_id; void* device_type; } ;
 int FUNC_0 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static struct device_id FUNC_1(uint16_t VAR_3)
{

 struct device_id VAR_4;

 VAR_4.raw_device_tag = VAR_3;

 switch (VAR_3) {
 case 128:
  VAR_4.device_type = VAR_1;
  VAR_4.enum_id = 1;
  break;

 case 134:
  VAR_4.device_type = VAR_0;
  VAR_4.enum_id = 1;
  break;

 case 133:
  VAR_4.device_type = VAR_0;
  VAR_4.enum_id = 2;
  break;

 case 132:
  VAR_4.device_type = VAR_0;
  VAR_4.enum_id = 3;
  break;

 case 131:
  VAR_4.device_type = VAR_0;
  VAR_4.enum_id = 4;
  break;

 case 130:
  VAR_4.device_type = VAR_0;
  VAR_4.enum_id = 5;
  break;

 case 129:
  VAR_4.device_type = VAR_0;
  VAR_4.enum_id = 6;
  break;

 default:
  FUNC_0();
  VAR_4.device_type = VAR_2;
  VAR_4.enum_id = 0;
 }
 return VAR_4;
}
