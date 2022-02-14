
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_rpm; int min_rpm; } ;
struct smu_fan {int old_style; int reg; int setpoint; TYPE_1__ fan; int dev; } ;
struct smu_cmd {int len; int* data; int cmd; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct smu_cmd*,int) ;

__attribute__((used)) static int
FUNC_3(struct smu_fan *VAR_3, int VAR_4)
{
 device_t VAR_5 = VAR_3->dev;
 struct smu_cmd VAR_6;
 int VAR_7;

 VAR_6.cmd = VAR_2;
 VAR_7 = VAR_0;


 VAR_4 = FUNC_0(VAR_3->fan.min_rpm, VAR_4);
 VAR_4 = FUNC_1(VAR_3->fan.max_rpm, VAR_4);







 if (!VAR_3->old_style) {
  VAR_6.len = 4;
  VAR_6.data[0] = 0x30;
  VAR_6.data[1] = VAR_3->reg;
  VAR_6.data[2] = (VAR_4 >> 8) & 0xff;
  VAR_6.data[3] = VAR_4 & 0xff;

  VAR_7 = FUNC_2(VAR_5, &VAR_6, 1);
  if (VAR_7 && VAR_7 != VAR_1)
   VAR_3->old_style = 1;
 }

 if (VAR_3->old_style) {
  VAR_6.len = 14;
  VAR_6.data[0] = 0x10;
  VAR_6.data[1] = 1 << VAR_3->reg;
  VAR_6.data[2 + 2*VAR_3->reg] = (VAR_4 >> 8) & 0xff;
  VAR_6.data[3 + 2*VAR_3->reg] = VAR_4 & 0xff;
  VAR_7 = FUNC_2(VAR_5, &VAR_6, 1);
 }

 if (VAR_7 == 0)
  VAR_3->setpoint = VAR_4;

 return (VAR_7);
}
