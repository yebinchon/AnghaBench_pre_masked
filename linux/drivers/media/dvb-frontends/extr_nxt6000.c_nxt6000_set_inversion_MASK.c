
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nxt6000_state {int dummy; } ;
typedef enum fe_spectral_inversion { ____Placeholder_fe_spectral_inversion } fe_spectral_inversion ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nxt6000_state*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct nxt6000_state *VAR_3,
     enum fe_spectral_inversion VAR_4)
{
 switch (VAR_4) {

 case 129:
  return FUNC_0(VAR_3, VAR_2, 0x00);

 case 128:
  return FUNC_0(VAR_3, VAR_2, VAR_1);

 default:
  return -VAR_0;

 }
}
