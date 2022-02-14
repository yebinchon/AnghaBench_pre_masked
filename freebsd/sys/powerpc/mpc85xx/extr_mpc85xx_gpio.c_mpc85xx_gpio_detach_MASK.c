
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc85xx_gpio_softc {int * in_res; int * out_res; } ;
typedef int device_t ;


 int FUNC_0 (struct mpc85xx_gpio_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 struct mpc85xx_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct mpc85xx_gpio_softc *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1);

 if (VAR_2->out_res != ((void*)0)) {

  FUNC_1(VAR_1, VAR_0,
         FUNC_4(VAR_2->out_res), VAR_2->out_res);
 }

 if (VAR_2->in_res != ((void*)0)) {

  FUNC_1(VAR_1, VAR_0,
         FUNC_4(VAR_2->in_res), VAR_2->in_res);
 }

 FUNC_0(VAR_2);

 return (0);
}
