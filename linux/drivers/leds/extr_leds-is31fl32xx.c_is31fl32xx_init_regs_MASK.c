
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct is31fl32xx_priv {struct is31fl32xx_chipdef* cdef; } ;
struct is31fl32xx_chipdef {scalar_t__ led_control_register_base; int enable_bits_per_led_control_register; int channels; scalar_t__ global_control_reg; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct is31fl32xx_priv*) ;
 int FUNC_2 (struct is31fl32xx_priv*,int) ;
 int FUNC_3 (struct is31fl32xx_priv*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct is31fl32xx_priv *VAR_1)
{
 const struct is31fl32xx_chipdef *VAR_2 = VAR_1->cdef;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return VAR_3;





 if (VAR_2->led_control_register_base != VAR_0) {
  u8 VAR_4 =
      FUNC_0(VAR_2->enable_bits_per_led_control_register-1, 0);
  u8 VAR_5 = VAR_2->channels /
    VAR_2->enable_bits_per_led_control_register;
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_3 = FUNC_3(VAR_1,
            VAR_2->led_control_register_base+VAR_6,
            VAR_4);
   if (VAR_3)
    return VAR_3;
  }
 }

 VAR_3 = FUNC_2(VAR_1, 0);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->global_control_reg != VAR_0) {
  VAR_3 = FUNC_3(VAR_1, VAR_2->global_control_reg, 0x00);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
