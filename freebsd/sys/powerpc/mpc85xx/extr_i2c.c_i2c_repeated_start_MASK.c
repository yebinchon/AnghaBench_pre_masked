
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct i2c_softc {int mutex; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct i2c_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct i2c_softc*,int,int) ;
 int FUNC_3 (struct i2c_softc*,int ,int ) ;
 int FUNC_4 (struct i2c_softc*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4, u_char VAR_5, int VAR_6)
{
 struct i2c_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_4);

 FUNC_5(&VAR_7->mutex);

 FUNC_3(VAR_7, VAR_1 ,VAR_0);

 FUNC_4(VAR_7, VAR_2, VAR_5);
 FUNC_0(1250);

 VAR_8 = FUNC_2(VAR_4, VAR_7, 1, 1);
 FUNC_6(&VAR_7->mutex);

 if (VAR_8)
  return (VAR_8);

 return (VAR_3);
}
