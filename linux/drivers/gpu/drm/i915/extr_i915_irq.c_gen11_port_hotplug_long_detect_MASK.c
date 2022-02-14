
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum hpd_pin { ____Placeholder_hpd_pin } hpd_pin ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_1(enum hpd_pin VAR_4, u32 VAR_5)
{
 switch (VAR_4) {
 case 131:
  return VAR_5 & FUNC_0(VAR_0);
 case 130:
  return VAR_5 & FUNC_0(VAR_1);
 case 129:
  return VAR_5 & FUNC_0(VAR_2);
 case 128:
  return VAR_5 & FUNC_0(VAR_3);
 default:
  return 0;
 }
}
