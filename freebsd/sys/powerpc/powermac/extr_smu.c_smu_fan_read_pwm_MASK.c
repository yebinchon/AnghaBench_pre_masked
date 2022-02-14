
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
 int VAR_3 ;
 int FUNC_0 (int ,struct smu_cmd*,int) ;

__attribute__((used)) static int
FUNC_1(struct smu_fan *VAR_4, int *VAR_5, int *VAR_6)
{
 device_t VAR_7 = VAR_4->dev;
 struct smu_cmd VAR_8;
 int VAR_9;

 if (!VAR_4->old_style) {
  VAR_8.cmd = VAR_1;
  VAR_8.len = 2;
  VAR_8.data[0] = 0x31;
  VAR_8.data[1] = VAR_4->reg;

  VAR_9 = FUNC_0(VAR_7, &VAR_8, 1);
  if (VAR_9 && VAR_9 != VAR_0)
   VAR_4->old_style = 1;

  *VAR_6 = (VAR_8.data[0] << 8) | VAR_8.data[1];
 }

 if (VAR_4->old_style) {
  VAR_8.cmd = VAR_1;
  VAR_8.len = 1;
  VAR_8.data[0] = VAR_3;

  VAR_9 = FUNC_0(VAR_7, &VAR_8, 1);
  if (VAR_9)
   return (VAR_9);

  *VAR_6 = (VAR_8.data[VAR_4->reg*2+1] << 8) | VAR_8.data[VAR_4->reg*2+2];
 }
 if (VAR_4->old_style) {
  VAR_8.cmd = VAR_1;
  VAR_8.len = 14;
  VAR_8.data[0] = VAR_2;
  VAR_8.data[1] = 1 << VAR_4->reg;

  VAR_9 = FUNC_0(VAR_7, &VAR_8, 1);
  if (VAR_9)
   return (VAR_9);

  *VAR_5 = VAR_8.data[VAR_4->reg*2+2];
 }
 return (0);
}
