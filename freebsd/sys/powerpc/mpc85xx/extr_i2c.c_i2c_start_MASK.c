
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_char ;
struct i2c_softc {int mutex; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 struct i2c_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct i2c_softc*,int,int) ;
 int FUNC_4 (struct i2c_softc*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct i2c_softc*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_9, u_char VAR_10, int VAR_11)
{
 struct i2c_softc *VAR_12;
 uint8_t VAR_13;
 int VAR_14;

 VAR_12 = FUNC_2(VAR_9);
 FUNC_0(1000);

 FUNC_7(&VAR_12->mutex);
 VAR_13 = FUNC_4(VAR_12, VAR_6);

 if (VAR_13 & VAR_3) {
  FUNC_1("bus busy");
  FUNC_8(&VAR_12->mutex);
  FUNC_5(VAR_9);
  return (VAR_7);
 }


 FUNC_6(VAR_12, VAR_4, VAR_0 | VAR_1 | VAR_2);

 FUNC_6(VAR_12, VAR_5, VAR_10);
 FUNC_0(1250);

 VAR_14 = FUNC_3(VAR_9, VAR_12, 1, 1);

 FUNC_8(&VAR_12->mutex);
 if (VAR_14)
  return (VAR_14);

 return (VAR_8);
}
