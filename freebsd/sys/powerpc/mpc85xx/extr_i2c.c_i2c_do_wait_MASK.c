
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct i2c_softc*,int ) ;
 int FUNC_2 (struct i2c_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_11, struct i2c_softc *VAR_12, int VAR_13, int VAR_14)
{
 int VAR_15;
 uint8_t VAR_16;

 VAR_16 = FUNC_1(VAR_12, VAR_7);
 if (VAR_16 & VAR_4) {
  if (VAR_13 && VAR_14 && (VAR_16 & VAR_5)) {
   FUNC_0("no ack %s", VAR_14 ?
       "after sending slave address" : "");
   VAR_15 = VAR_9;
   goto error;
  }
  if (VAR_16 & VAR_2) {
   FUNC_0("arbitration lost");
   VAR_15 = VAR_8;
   goto error;
  }
  if (!VAR_13 && !(VAR_16 & VAR_3)) {
   FUNC_0("transfer unfinished");
   VAR_15 = VAR_8;
   goto error;
  }
 }

 return (VAR_10);

error:
 FUNC_2(VAR_12, VAR_7, 0x0);
 FUNC_2(VAR_12, VAR_6, VAR_0 | VAR_1);
 return (VAR_15);
}
