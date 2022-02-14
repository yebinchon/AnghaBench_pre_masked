
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ves1x93_state {int* init_1x93_tab; } ;
typedef enum fe_spectral_inversion { ____Placeholder_fe_spectral_inversion } fe_spectral_inversion ;


 int VAR_0 ;



 int FUNC_0 (struct ves1x93_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct ves1x93_state *VAR_1,
     enum fe_spectral_inversion VAR_2)
{
 u8 VAR_3;






 switch (VAR_2) {
 case 129:
  VAR_3 = 0xc0;
  break;
 case 128:
  VAR_3 = 0x80;
  break;
 case 130:
  VAR_3 = 0x00;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0 (VAR_1, 0x0c, (VAR_1->init_1x93_tab[0x0c] & 0x3f) | VAR_3);
}
