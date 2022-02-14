
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv {scalar_t__ regoff; } ;
typedef enum fe_code_rate { ____Placeholder_fe_code_rate } fe_code_rate ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (struct stv*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct stv *VAR_1, enum fe_code_rate VAR_2)
{
 u8 VAR_3;

 switch (VAR_2) {
 case 133:
  VAR_3 = 0x01;
  break;
 case 132:
  VAR_3 = 0x02;
  break;
 case 131:
  VAR_3 = 0x04;
  break;
 case 130:
  VAR_3 = 0x08;
  break;
 case 129:
  VAR_3 = 0x20;
  break;
 case 128:
 default:
  VAR_3 = 0x2f;
  break;
 }

 return FUNC_0(VAR_1, VAR_0 + VAR_1->regoff, VAR_3);
}
