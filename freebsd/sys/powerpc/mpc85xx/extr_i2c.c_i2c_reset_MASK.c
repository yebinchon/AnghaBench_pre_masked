
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


 struct i2c_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_softc*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_9, u_char VAR_10, u_char VAR_11, u_char *VAR_12)
{
 struct i2c_softc *VAR_13;
 uint8_t VAR_14;

 VAR_13 = FUNC_1(VAR_9);

 switch (VAR_10) {
 case 131:
  VAR_14 = VAR_1;
  break;
 case 129:
 case 128:
 case 130:
 default:
  VAR_14 = VAR_0;
  break;
 }

 FUNC_3(&VAR_13->mutex);
 FUNC_2(VAR_13, VAR_2, 0x0);
 FUNC_2(VAR_13, VAR_7, 0x0);
 FUNC_0(1000);
 FUNC_2(VAR_13, VAR_6, VAR_14);
 FUNC_2(VAR_13, VAR_3, VAR_4);
 FUNC_2(VAR_13, VAR_2, VAR_5);
 FUNC_0(1000);
 FUNC_4(&VAR_13->mutex);

 return (VAR_8);
}
