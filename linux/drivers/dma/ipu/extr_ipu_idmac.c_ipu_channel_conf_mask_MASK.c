
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum ipu_channel { ____Placeholder_ipu_channel } ipu_channel ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint32_t FUNC_0(enum ipu_channel VAR_4)
{
 uint32_t VAR_5;

 switch (VAR_4) {
 case 131:
 case 130:
  VAR_5 = VAR_0 | VAR_2;
  break;
 case 129:
 case 128:
  VAR_5 = VAR_3 | VAR_1;
  break;
 default:
  VAR_5 = 0;
  break;
 }

 return VAR_5;
}
