
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tda10021_state {int reg0; TYPE_1__* config; } ;
typedef enum fe_spectral_inversion { ____Placeholder_fe_spectral_inversion } fe_spectral_inversion ;
struct TYPE_2__ {scalar_t__ invert; } ;


 int VAR_0 ;
 int FUNC_0 (struct tda10021_state*,int,int) ;

__attribute__((used)) static int FUNC_1(struct tda10021_state *VAR_1, u8 VAR_2,
          enum fe_spectral_inversion VAR_3)
{
 VAR_2 |= VAR_1->reg0 & 0x63;

 if ((VAR_0 == VAR_3) ^ (VAR_1->config->invert == 0))
  VAR_2 &= ~0x20;
 else
  VAR_2 |= 0x20;

 FUNC_0 (VAR_1, 0x00, VAR_2 & 0xfe);
 FUNC_0 (VAR_1, 0x00, VAR_2 | 0x01);

 VAR_1->reg0 = VAR_2;
 return 0;
}
