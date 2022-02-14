
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_softc {int mutex; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct i2c_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_softc*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 struct i2c_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 FUNC_3(&VAR_5->mutex);
 FUNC_2(VAR_5, VAR_2, VAR_0 | VAR_1);
 FUNC_0(1000);
 FUNC_4(&VAR_5->mutex);

 return (VAR_3);
}
