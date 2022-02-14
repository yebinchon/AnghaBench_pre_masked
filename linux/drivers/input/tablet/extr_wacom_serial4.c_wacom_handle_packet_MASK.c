
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wacom {int* data; int extra_z_bits; int eraser_mask; unsigned int tool; int dev; } ;
struct TYPE_2__ {int device_id; int input_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_14 ;

__attribute__((used)) static void FUNC_4(struct wacom *VAR_15)
{
 u8 VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19;
 int VAR_20, VAR_21, VAR_22;

 VAR_16 = VAR_15->data[0] & 0x40;
 VAR_17 = VAR_15->data[0] & 0x20;
 VAR_18 = (VAR_15->data[3] & 0x78) >> 3;
 VAR_20 = (VAR_15->data[0] & 3) << 14 | VAR_15->data[1]<<7 | VAR_15->data[2];
 VAR_21 = (VAR_15->data[3] & 3) << 14 | VAR_15->data[4]<<7 | VAR_15->data[5];

 if (VAR_16 && VAR_17) {
  VAR_22 = VAR_15->data[6] & 0x7f;
  if (VAR_15->extra_z_bits >= 1)
   VAR_22 = VAR_22 << 1 | (VAR_15->data[3] & 0x4) >> 2;
  if (VAR_15->extra_z_bits > 1)
   VAR_22 = VAR_22 << 1 | (VAR_15->data[0] & 0x4) >> 2;
  VAR_22 = VAR_22 ^ (0x40 << VAR_15->extra_z_bits);
 } else {
  VAR_22 = -1;
 }

 if (VAR_17)
  VAR_19 = (VAR_18 & VAR_15->eraser_mask) ? VAR_11 : VAR_13;
 else
  VAR_19 = VAR_10;

 if (VAR_19 != VAR_15->tool && VAR_15->tool != 0) {
  FUNC_1(VAR_15->dev, VAR_14[VAR_15->tool].input_id, 0);
  FUNC_3(VAR_15->dev);
 }
 VAR_15->tool = VAR_19;

 FUNC_1(VAR_15->dev, VAR_14[VAR_19].input_id, VAR_16);
 FUNC_0(VAR_15->dev, VAR_0,
    VAR_16 ? VAR_14[VAR_19].device_id : 0);
 FUNC_0(VAR_15->dev, VAR_2, VAR_20);
 FUNC_0(VAR_15->dev, VAR_3, VAR_21);
 FUNC_0(VAR_15->dev, VAR_1, VAR_22);
 if (VAR_17) {
  FUNC_1(VAR_15->dev, VAR_9, VAR_18 & 1);
  FUNC_1(VAR_15->dev, VAR_7, VAR_18 & 2);
  FUNC_1(VAR_15->dev, VAR_8, VAR_18 & 4);
 } else {
  FUNC_1(VAR_15->dev, VAR_4, VAR_18 & 1);
  FUNC_1(VAR_15->dev, VAR_6, VAR_18 & 2);
  FUNC_1(VAR_15->dev, VAR_5, VAR_18 & 4);

  VAR_22 = (VAR_15->data[6] & 0x30) >> 4;
  if (VAR_15->data[6] & 0x40)
   VAR_22 = -VAR_22;
  FUNC_2(VAR_15->dev, VAR_12, VAR_22);
 }
 FUNC_3(VAR_15->dev);
}
