
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
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 struct fcu_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ,int ,unsigned char*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(struct fcu_fan *VAR_4, int VAR_5)
{
 uint8_t VAR_6;
 struct fcu_softc *VAR_7;
 unsigned char VAR_8[2];

 VAR_7 = FUNC_1(VAR_4->dev);


 VAR_5 = FUNC_4(VAR_4->fan.min_rpm, VAR_5);
 VAR_5 = FUNC_5(VAR_4->fan.max_rpm, VAR_5);

 if (VAR_4->type == VAR_2) {
  VAR_6 = FUNC_0(VAR_4->id);
  VAR_4->setpoint = VAR_5;
 } else {
  FUNC_2(VAR_4->dev, "Unknown fan type: %d\n", VAR_4->type);
  return (VAR_1);
 }

 VAR_8[0] = VAR_5 >> (8 - VAR_3);
 VAR_8[1] = VAR_5 << VAR_3;

 if (FUNC_3(VAR_7->sc_dev, VAR_7->sc_addr, VAR_6, VAR_8, 2) < 0)
  return (VAR_0);

 return (0);
}
