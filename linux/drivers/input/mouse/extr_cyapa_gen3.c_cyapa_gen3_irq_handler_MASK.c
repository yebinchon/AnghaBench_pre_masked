
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct cyapa_reg_data {int device_status; int finger_btn; } ;
struct cyapa {TYPE_1__* client; } ;
typedef int data ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cyapa*,struct cyapa_reg_data*) ;
 int FUNC_1 (struct cyapa*,int ,int *) ;
 int FUNC_2 (struct device*,char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct cyapa *VAR_6)
{
 struct device *VAR_7 = &VAR_6->client->dev;
 struct cyapa_reg_data VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_0, (u8 *)&VAR_8);
 if (VAR_9 != sizeof(VAR_8)) {
  FUNC_2(VAR_7, "failed to read report data, (%d)\n", VAR_9);
  return -VAR_2;
 }

 if ((VAR_8.device_status & VAR_5) != VAR_5 ||
     (VAR_8.device_status & VAR_4) != VAR_1 ||
     (VAR_8.finger_btn & VAR_3) != VAR_3) {
  FUNC_2(VAR_7, "invalid device state bytes: %02x %02x\n",
   VAR_8.device_status, VAR_8.finger_btn);
  return -VAR_2;
 }

 return FUNC_0(VAR_6, &VAR_8);
}
