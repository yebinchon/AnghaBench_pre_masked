
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0297_state {int dummy; } ;
typedef enum fe_spectral_inversion { ____Placeholder_fe_spectral_inversion } fe_spectral_inversion ;


 int VAR_0 ;


 int FUNC_0 (struct stv0297_state*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct stv0297_state *VAR_1,
     enum fe_spectral_inversion VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2) {
 case 129:
  VAR_3 = 0;
  break;

 case 128:
  VAR_3 = 1;
  break;

 default:
  return -VAR_0;
 }

 FUNC_0(VAR_1, 0x83, 0x08, VAR_3 << 3);

 return 0;
}
