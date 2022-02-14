
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fcu_softc {int sc_addr; int sc_dev; } ;
struct fcu_fan {scalar_t__ type; int id; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct fcu_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int,int*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct fcu_fan *VAR_5)
{
 uint8_t VAR_6;
 struct fcu_softc *VAR_7;
 uint8_t VAR_8[2] = { 0, 0 };
 uint8_t VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 int VAR_12;

 VAR_7 = FUNC_1(VAR_5->dev);

 if (VAR_5->type == VAR_0) {

  VAR_6 = VAR_2;
  if (FUNC_3(VAR_7->sc_dev, VAR_7->sc_addr, VAR_6, &VAR_10) < 0)
   return (-1);
  if ((VAR_10 & (1 << VAR_5->id)) == 0) {
   FUNC_2(VAR_5->dev,
       "RPM Fan not available ID: %d\n", VAR_5->id);
   return (-1);
  }

  VAR_6 = VAR_3;
  if (FUNC_3(VAR_7->sc_dev, VAR_7->sc_addr, VAR_6, &VAR_11) < 0)
   return (-1);
  if ((VAR_11 & (1 << VAR_5->id)) != 0) {
   FUNC_2(VAR_5->dev,
       "RPM Fan failed ID: %d\n", VAR_5->id);
   return (-1);
  }

  VAR_6 = VAR_1;
  if (FUNC_3(VAR_7->sc_dev, VAR_7->sc_addr, VAR_6, &VAR_9) < 0)
   return (-1);
  if ((VAR_9 & (1 << VAR_5->id)) == 0) {
   FUNC_2(VAR_5->dev, "RPM Fan not active ID: %d\n",
          VAR_5->id);
   return (-1);
  }
  VAR_6 = FUNC_0(VAR_5->id);

 } else {
  FUNC_2(VAR_5->dev, "Unknown fan type: %d\n", VAR_5->type);
  return (-1);
 }


 if (FUNC_3(VAR_7->sc_dev, VAR_7->sc_addr, VAR_6, VAR_8) < 0)
  return (-1);

 VAR_12 = (VAR_8[0] << (8 - VAR_4)) | VAR_8[1] >> VAR_4;

 return (VAR_12);
}
