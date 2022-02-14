
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc85xx_gpio_softc {int * busdev; int * in_res; int * out_res; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct mpc85xx_gpio_softc*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 struct mpc85xx_gpio_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct mpc85xx_gpio_softc *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 VAR_4->dev = VAR_3;

 FUNC_0(VAR_4);


 VAR_5 = 0;
 VAR_4->out_res = FUNC_3(VAR_3,
       VAR_2, &VAR_5, VAR_1);
 if (VAR_4->out_res == ((void*)0)) {
  FUNC_5(VAR_3, "Can't allocate memory for device output port");
  FUNC_7(VAR_3);
  return (VAR_0);
 }

 VAR_5 = 1;
 VAR_4->in_res = FUNC_3(VAR_3,
       VAR_2, &VAR_5, VAR_1);
 if (VAR_4->in_res == ((void*)0)) {
  FUNC_5(VAR_3, "Can't allocate memory for device input port");
  FUNC_7(VAR_3);
  return (VAR_0);
 }

 VAR_4->busdev = FUNC_6(VAR_3);
 if (VAR_4->busdev == ((void*)0)) {
  FUNC_7(VAR_3);
  return (VAR_0);
 }

 FUNC_1(FUNC_2(FUNC_8(VAR_3)), VAR_3);

 return (0);
}
