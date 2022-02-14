
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_softc {int old_style_fans; } ;
struct smu_fan {int reg; int dev; } ;
struct smu_cmd {int len; int* data; int cmd; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct smu_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct smu_cmd*,int) ;

__attribute__((used)) static int
FUNC_2(struct smu_fan *VAR_2)
{
 device_t VAR_3 = VAR_2->dev;
 struct smu_softc *VAR_4 = FUNC_0(VAR_3);
 struct smu_cmd VAR_5;
 int VAR_6;

 if (VAR_4->old_style_fans != -1)
  return (VAR_4->old_style_fans);







 VAR_5.cmd = VAR_1;
 VAR_5.len = 2;
 VAR_5.data[0] = 0x31;
 VAR_5.data[1] = VAR_2->reg;

 do {
  VAR_6 = FUNC_1(VAR_3, &VAR_5, 1);
 } while (VAR_6 == VAR_0);

 VAR_4->old_style_fans = (VAR_6 != 0);

 return (VAR_4->old_style_fans);
}
