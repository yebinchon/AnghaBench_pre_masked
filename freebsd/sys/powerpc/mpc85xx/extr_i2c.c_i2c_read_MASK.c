
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
 int VAR_4 ;
 int VAR_5 ;
 struct i2c_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct i2c_softc*,int ,int ) ;
 int FUNC_3 (struct i2c_softc*,int ) ;
 int FUNC_4 (struct i2c_softc*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6, char *VAR_7, int VAR_8, int *VAR_9, int VAR_10, int VAR_11)
{
 struct i2c_softc *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_1(VAR_6);
 *VAR_9 = 0;

 FUNC_5(&VAR_12->mutex);
 if (VAR_8) {
  if (VAR_8 == 1)
   FUNC_4(VAR_12, VAR_3, VAR_0 |
       VAR_1 | VAR_2);

  else
   FUNC_4(VAR_12, VAR_3, VAR_0 |
       VAR_1);


  FUNC_3(VAR_12, VAR_4);
  FUNC_0(1000);
 }

 while (*VAR_9 < VAR_8) {
  FUNC_0(1000);
  VAR_13 = FUNC_2(VAR_6, VAR_12, 0, 0);
  if (VAR_13) {
   FUNC_6(&VAR_12->mutex);
   return (VAR_13);
  }
  if ((*VAR_9 == VAR_8 - 2) && VAR_10) {
   FUNC_4(VAR_12, VAR_3, VAR_0 |
       VAR_1 | VAR_2);
  }

  if ((*VAR_9 == VAR_8 - 1) && VAR_10) {
   FUNC_4(VAR_12, VAR_3, VAR_0 |
       VAR_2);
  }

  *VAR_7++ = FUNC_3(VAR_12, VAR_4);
  (*VAR_9)++;
  FUNC_0(1250);
 }
 FUNC_6(&VAR_12->mutex);

 return (VAR_5);
}
