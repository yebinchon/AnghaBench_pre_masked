
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum transmitter_color_depth { ____Placeholder_transmitter_color_depth } transmitter_color_depth ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





__attribute__((used)) static uint8_t FUNC_1(enum transmitter_color_depth VAR_4)
{
 uint8_t VAR_5 = 0;

 switch (VAR_4) {
 case 131:
  VAR_5 = VAR_3;
  break;
 case 130:
  VAR_5 = VAR_2;
  break;
 case 129:
  VAR_5 = VAR_1;
  break;
 case 128:
  VAR_5 = VAR_0;
  break;
 default:
  FUNC_0(0);
  break;
 }

 return VAR_5;
}
