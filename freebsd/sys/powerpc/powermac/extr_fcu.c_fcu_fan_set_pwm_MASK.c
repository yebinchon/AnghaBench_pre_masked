
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct fcu_softc {int sc_addr; int sc_dev; } ;
struct TYPE_2__ {int max_rpm; int min_rpm; } ;
struct fcu_fan {scalar_t__ type; int setpoint; int dev; int id; TYPE_1__ fan; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct fcu_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int,int*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(struct fcu_fan *VAR_2, int VAR_3)
{
 uint8_t VAR_4;
 struct fcu_softc *VAR_5;
 uint8_t VAR_6[2];

 VAR_5 = FUNC_1(VAR_2->dev);


 VAR_3 = FUNC_4(VAR_2->fan.min_rpm, VAR_3);
 VAR_3 = FUNC_5(VAR_2->fan.max_rpm, VAR_3);

 if (VAR_2->type == VAR_1) {
  VAR_4 = FUNC_0(VAR_2->id);
  if (VAR_3 > 100)
   VAR_3 = 100;
  if (VAR_3 < 30)
   VAR_3 = 30;
  VAR_2->setpoint = VAR_3;
 } else {
  FUNC_2(VAR_2->dev, "Unknown fan type: %d\n", VAR_2->type);
  return (VAR_0);
 }

 VAR_6[0] = (VAR_3 * 2550) / 1000;

 if (FUNC_3(VAR_5->sc_dev, VAR_5->sc_addr, VAR_4, VAR_6, 1) < 0)
  return (VAR_0);
 return (0);
}
