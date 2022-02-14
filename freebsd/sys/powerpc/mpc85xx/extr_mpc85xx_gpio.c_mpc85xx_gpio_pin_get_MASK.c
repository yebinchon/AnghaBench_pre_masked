
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mpc85xx_gpio_softc {int in_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 struct mpc85xx_gpio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, uint32_t VAR_2, unsigned int *VAR_3)
{
 struct mpc85xx_gpio_softc *VAR_4 = FUNC_2(VAR_1);

 if (!FUNC_0(VAR_2))
  return (VAR_0);

 *VAR_3 = (FUNC_1(VAR_4->in_res, 0) >> (31 - VAR_2)) & 1;

 return (0);
}
