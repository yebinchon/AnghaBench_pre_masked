
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sony_sc {int quirks; int cable_state; int battery_capacity; int battery_charging; int sensor_dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct sony_sc *VAR_6, u8 *VAR_7, int VAR_8)
{
 static const u8 VAR_9[] = { 0, 1, 25, 50, 75, 100 };
 unsigned long VAR_10;
 int VAR_11;
 u8 VAR_12, VAR_13, VAR_14;







 VAR_11 = (VAR_6->quirks & VAR_3) ? 12 : 30;

 if (VAR_7[VAR_11] >= 0xee) {
  VAR_13 = 100;
  VAR_14 = !(VAR_7[VAR_11] & 0x01);
  VAR_12 = 1;
 } else {
  u8 VAR_15 = VAR_7[VAR_11] <= 5 ? VAR_7[VAR_11] : 5;
  VAR_13 = VAR_9[VAR_15];
  VAR_14 = 0;
  VAR_12 = 0;
 }

 FUNC_2(&VAR_6->lock, VAR_10);
 VAR_6->cable_state = VAR_12;
 VAR_6->battery_capacity = VAR_13;
 VAR_6->battery_charging = VAR_14;
 FUNC_3(&VAR_6->lock, VAR_10);

 if (VAR_6->quirks & VAR_4) {
  int VAR_16;

  VAR_11 = VAR_5;
  VAR_16 = ((VAR_7[VAR_11+1] << 8) | VAR_7[VAR_11]) - 511;
  FUNC_0(VAR_6->sensor_dev, VAR_0, VAR_16);


  VAR_16 = 511 - ((VAR_7[VAR_11+5] << 8) | VAR_7[VAR_11+4]);
  FUNC_0(VAR_6->sensor_dev, VAR_1, VAR_16);

  VAR_16 = 511 - ((VAR_7[VAR_11+3] << 8) | VAR_7[VAR_11+2]);
  FUNC_0(VAR_6->sensor_dev, VAR_2, VAR_16);

  FUNC_1(VAR_6->sensor_dev);
 }
}
