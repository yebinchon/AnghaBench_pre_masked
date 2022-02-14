
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_softc {int * res; scalar_t__ rid; int bsh; int bst; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int *) ;
 struct i2c_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct i2c_softc*,int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_6)
{
 struct i2c_softc *VAR_7;

 if (!FUNC_6(VAR_6, "fsl-i2c"))
  return (VAR_1);

 VAR_7 = FUNC_2(VAR_6);
 VAR_7->rid = 0;

 VAR_7->res = FUNC_0(VAR_6, VAR_5, &VAR_7->rid,
     VAR_4);
 if (VAR_7->res == ((void*)0)) {
  FUNC_3(VAR_6, "could not allocate resources\n");
  return (VAR_1);
 }

 VAR_7->bst = FUNC_8(VAR_7->res);
 VAR_7->bsh = FUNC_7(VAR_7->res);


 FUNC_5(VAR_7, VAR_2, VAR_3);
 FUNC_1(VAR_6, VAR_5, VAR_7->rid, VAR_7->res);
 FUNC_4(VAR_6, "I2C bus controller");

 return (VAR_0);
}
