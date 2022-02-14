
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mpc85xx_gpio_softc {int out_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct mpc85xx_gpio_softc*) ;
 int FUNC_1 (struct mpc85xx_gpio_softc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct mpc85xx_gpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, uint32_t VAR_2)
{
 struct mpc85xx_gpio_softc *VAR_3 = FUNC_5(VAR_1);
 uint32_t VAR_4;

 if (!FUNC_2(VAR_2))
  return (VAR_0);

 FUNC_0(VAR_3);

 VAR_4 = FUNC_3(VAR_3->out_res, 0);
 VAR_4 ^= (1 << (31 - VAR_2));
 FUNC_4(VAR_3->out_res, 0, VAR_4);

 FUNC_1(VAR_3);

 return (0);
}
