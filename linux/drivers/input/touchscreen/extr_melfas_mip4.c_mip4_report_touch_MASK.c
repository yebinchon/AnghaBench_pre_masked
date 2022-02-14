
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mip4_ts {int event_format; int input; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,int,int,int,int,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct mip4_ts *VAR_7, u8 *VAR_8)
{
 int VAR_9;
 bool VAR_10;
 bool VAR_11;
 bool VAR_12;
 u16 VAR_13, VAR_14;
 u8 VAR_15 = 0;
 u8 VAR_16;
 u8 VAR_17;
 u8 VAR_18;
 u8 VAR_19;

 switch (VAR_7->event_format) {
 case 0:
 case 1:

  VAR_12 = VAR_8[0] & FUNC_0(7);
  VAR_10 = VAR_8[0] & FUNC_0(5);
  VAR_11 = VAR_8[0] & FUNC_0(4);
  VAR_9 = (VAR_8[0] & 0x0F) - 1;
  VAR_13 = ((VAR_8[1] & 0x0F) << 8) | VAR_8[2];
  VAR_14 = (((VAR_8[1] >> 4) & 0x0F) << 8) |
   VAR_8[3];
  VAR_16 = VAR_8[4];
  VAR_17 = VAR_8[5];
  if (VAR_7->event_format == 0) {
   VAR_18 = VAR_8[5];
   VAR_19 = VAR_8[5];
  } else {
   VAR_18 = VAR_8[6];
   VAR_19 = VAR_8[7];
  }
  break;

 case 3:
 default:

  VAR_9 = (VAR_8[0] & 0x0F) - 1;
  VAR_10 = VAR_8[1] & FUNC_0(2);
  VAR_11 = VAR_8[1] & FUNC_0(1);
  VAR_12 = VAR_8[1] & FUNC_0(0);
  VAR_13 = ((VAR_8[2] & 0x0F) << 8) | VAR_8[3];
  VAR_14 = (((VAR_8[2] >> 4) & 0x0F) << 8) |
   VAR_8[4];
  VAR_17 = VAR_8[6];
  VAR_15 = (VAR_8[7] & 0xF0) >> 4;
  VAR_16 = ((VAR_8[7] & 0x0F) << 8) |
   VAR_8[8];
  VAR_18 = VAR_8[9];
  VAR_19 = VAR_8[10];
  break;
 }

 FUNC_1(&VAR_7->client->dev,
  "Screen - Slot: %d State: %d X: %04d Y: %04d Z: %d\n",
  VAR_9, VAR_12, VAR_13, VAR_14, VAR_16);

 if (FUNC_7(VAR_9 < 0 || VAR_9 >= VAR_5)) {
  FUNC_2(&VAR_7->client->dev, "Screen - invalid slot ID: %d\n", VAR_9);
 } else if (VAR_12) {

  FUNC_4(VAR_7->input, VAR_9);
  FUNC_3(VAR_7->input, VAR_6, 1);
  FUNC_6(VAR_7->input, VAR_0, VAR_13);
  FUNC_6(VAR_7->input, VAR_1, VAR_14);
  FUNC_6(VAR_7->input, VAR_2, VAR_16);
  FUNC_6(VAR_7->input, VAR_3, VAR_18);
  FUNC_6(VAR_7->input, VAR_4, VAR_19);
 } else {

  FUNC_4(VAR_7->input, VAR_9);
  FUNC_3(VAR_7->input, VAR_6, 0);
 }

 FUNC_5(VAR_7->input);
}
