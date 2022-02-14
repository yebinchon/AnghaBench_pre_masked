
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_fan {int old_style; int reg; int dev; } ;
struct smu_cmd {int len; int* data; void* cmd; } ;
typedef int device_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smu_fan*) ;
 int FUNC_1 (int ,struct smu_cmd*,int) ;

__attribute__((used)) static int
FUNC_2(struct smu_fan *VAR_3)
{
 device_t VAR_4 = VAR_3->dev;
 struct smu_cmd VAR_5;
 int VAR_6, VAR_7;

 FUNC_0(VAR_3);

 if (!VAR_3->old_style) {
  VAR_5.cmd = VAR_1;
  VAR_5.len = 2;
  VAR_5.data[0] = 0x31;
  VAR_5.data[1] = VAR_3->reg;

  VAR_7 = FUNC_1(VAR_4, &VAR_5, 1);
  if (VAR_7 && VAR_7 != VAR_0)
   VAR_3->old_style = 1;

  VAR_6 = (VAR_5.data[0] << 8) | VAR_5.data[1];
 }

 if (VAR_3->old_style) {
  VAR_5.cmd = VAR_1;
  VAR_5.len = 1;
  VAR_5.data[0] = VAR_2;

  VAR_7 = FUNC_1(VAR_4, &VAR_5, 1);
  if (VAR_7)
   return (VAR_7);

  VAR_6 = (VAR_5.data[VAR_3->reg*2+1] << 8) | VAR_5.data[VAR_3->reg*2+2];
 }

 return (VAR_6);
}
