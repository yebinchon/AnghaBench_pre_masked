
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct is31fl32xx_priv {TYPE_1__* cdef; } ;
struct TYPE_2__ {unsigned int channels; scalar_t__ pwm_update_reg; scalar_t__ pwm_register_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct is31fl32xx_priv*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct is31fl32xx_priv *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_1,
          VAR_2);
 if (VAR_6)
  return VAR_6;
 for (VAR_5 = 0; VAR_5 < VAR_4->cdef->channels; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4, VAR_4->cdef->pwm_register_base+VAR_5,
           0x00);
  if (VAR_6)
   return VAR_6;
 }
 VAR_6 = FUNC_0(VAR_4, VAR_4->cdef->pwm_update_reg, 0);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_4, VAR_3, 0x00);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_4, VAR_0, 0x00);
 if (VAR_6)
  return VAR_6;

 return 0;
}
