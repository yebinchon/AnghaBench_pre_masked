
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fcu_softc {int sc_addr; int sc_dev; } ;
struct fcu_fan {scalar_t__ type; int id; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct fcu_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ,int ,int,int*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6, struct fcu_fan *VAR_7, int *VAR_8, int *VAR_9)
{
 uint8_t VAR_10;
 struct fcu_softc *VAR_11;
 uint8_t VAR_12[2];
 uint8_t VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;

 VAR_11 = FUNC_2(VAR_6);

 if (VAR_7->type == VAR_1) {

  VAR_10 = VAR_3;
  if (FUNC_4(VAR_11->sc_dev, VAR_11->sc_addr, VAR_10, &VAR_14) < 0)
   return (-1);
  if ((VAR_14 & (1 << VAR_7->id)) == 0) {
   FUNC_3(VAR_6, "PWM Fan not available ID: %d\n",
          VAR_7->id);
   return (-1);
  }

  VAR_10 = VAR_4;
  if (FUNC_4(VAR_11->sc_dev, VAR_11->sc_addr, VAR_10, &VAR_15) < 0)
   return (-1);
  if ((VAR_15 & (1 << VAR_7->id)) != 0) {
   FUNC_3(VAR_6, "PWM Fan failed ID: %d\n", VAR_7->id);
   return (-1);
  }

  VAR_10 = VAR_2;
  if (FUNC_4(VAR_11->sc_dev, VAR_11->sc_addr, VAR_10, &VAR_13) < 0)
   return (-1);
  if ((VAR_13 & (1 << VAR_7->id)) == 0) {
   FUNC_3(VAR_6, "PWM Fan not active ID: %d\n",
          VAR_7->id);
   return (-1);
  }
  VAR_10 = FUNC_1(VAR_7->id);
 } else {
  FUNC_3(VAR_6, "Unknown fan type: %d\n", VAR_7->type);
  return (VAR_0);
 }


 if (FUNC_4(VAR_11->sc_dev, VAR_11->sc_addr, VAR_10, VAR_12) < 0)
  return (-1);

 *VAR_8 = (VAR_12[0] * 1000) / 2550;


 VAR_10 = FUNC_0(VAR_7->id);
 if (FUNC_4(VAR_11->sc_dev, VAR_11->sc_addr, VAR_10, VAR_12) < 0)
  return (-1);

 *VAR_9 = (VAR_12[0] << (8 - VAR_5)) | VAR_12[1] >> VAR_5;

 return (0);
}
