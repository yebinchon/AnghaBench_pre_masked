
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bcma_drv_cc {TYPE_1__* core; } ;
struct TYPE_4__ {int id; } ;
struct bcma_bus {TYPE_2__ chipinfo; } ;
struct TYPE_3__ {struct bcma_bus* bus; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct bcma_bus*,char*,int const) ;
 int FUNC_1 (struct bcma_drv_cc*,int ) ;
 int FUNC_2 (struct bcma_drv_cc*,int,int) ;
 int FUNC_3 (struct bcma_drv_cc*,int ,int) ;

void FUNC_4(struct bcma_drv_cc *VAR_15, int VAR_16)
{
 u32 VAR_17 = 0;
 u8 VAR_18 = 0;
 u8 VAR_19[] = {0x1, 0x5, 0x5};
 u8 VAR_20[] = {0x30, 0xf6, 0xfc};
 struct bcma_bus *VAR_21 = VAR_15->core->bus;

 switch (VAR_21->chipinfo.id) {
 case 129:
 case 130:
 case 128:




  VAR_18 = (VAR_21->chipinfo.id == 129 ||
         VAR_21->chipinfo.id == 130 ||
         VAR_21->chipinfo.id == 128) ? 6 : 0;


  FUNC_3(VAR_15, VAR_7,
    VAR_9 + VAR_18);
  VAR_17 = FUNC_1(VAR_15, VAR_8);
  VAR_17 &= (~(VAR_0));
  VAR_17 |= (VAR_19[VAR_16] << VAR_1);
  FUNC_3(VAR_15, VAR_8, VAR_17);


  FUNC_3(VAR_15, VAR_7,
    VAR_11 + VAR_18);
  VAR_17 = FUNC_1(VAR_15, VAR_8);
  VAR_17 &= ~(VAR_2);
  VAR_17 |= (VAR_20[VAR_16]) << VAR_3;
  FUNC_3(VAR_15, VAR_8, VAR_17);

  VAR_17 = VAR_6;
  break;

 case 137:
 case 134:
  if (VAR_16 == 2) {
   FUNC_2(VAR_15, VAR_9,
           0x11500014);
   FUNC_2(VAR_15, VAR_11,
           0x0FC00a08);
  } else if (VAR_16 == 1) {
   FUNC_2(VAR_15, VAR_9,
           0x11500014);
   FUNC_2(VAR_15, VAR_11,
           0x0F600a08);
  } else {
   FUNC_2(VAR_15, VAR_9,
           0x11100014);
   FUNC_2(VAR_15, VAR_11,
           0x03000a08);
  }
  VAR_17 = VAR_6;
  break;

 case 141:
 case 140:
 case 136:
  if (VAR_16 == 1) {
   FUNC_2(VAR_15, VAR_9,
           0x11500010);
   FUNC_2(VAR_15, VAR_10,
           0x000C0C06);
   FUNC_2(VAR_15, VAR_11,
           0x0F600a08);
   FUNC_2(VAR_15, VAR_12,
           0x00000000);
   FUNC_2(VAR_15, VAR_13,
           0x2001E920);
   FUNC_2(VAR_15, VAR_14,
           0x88888815);
  } else {
   FUNC_2(VAR_15, VAR_9,
           0x11100010);
   FUNC_2(VAR_15, VAR_10,
           0x000c0c06);
   FUNC_2(VAR_15, VAR_11,
           0x03000a08);
   FUNC_2(VAR_15, VAR_12,
           0x00000000);
   FUNC_2(VAR_15, VAR_13,
           0x200005c0);
   FUNC_2(VAR_15, VAR_14,
           0x88888815);
  }
  VAR_17 = VAR_6;
  break;

 case 133:
 case 131:
 case 132:
  if (VAR_16 == 1) {
   FUNC_2(VAR_15, VAR_9,
           0x11500060);
   FUNC_2(VAR_15, VAR_10,
           0x080C0C06);
   FUNC_2(VAR_15, VAR_11,
           0x0F600000);
   FUNC_2(VAR_15, VAR_12,
           0x00000000);
   FUNC_2(VAR_15, VAR_13,
           0x2001E924);
   FUNC_2(VAR_15, VAR_14,
           0x88888815);
  } else {
   FUNC_2(VAR_15, VAR_9,
           0x11100060);
   FUNC_2(VAR_15, VAR_10,
           0x080c0c06);
   FUNC_2(VAR_15, VAR_11,
           0x03000000);
   FUNC_2(VAR_15, VAR_12,
           0x00000000);
   FUNC_2(VAR_15, VAR_13,
           0x200005c0);
   FUNC_2(VAR_15, VAR_14,
           0x88888815);
  }

  VAR_17 = VAR_6 | VAR_5;
  break;

 case 143:
 case 142:
 case 139:
 case 138:
 case 135:



  if (VAR_16 == 1) {
   FUNC_2(VAR_15, VAR_9,
           0x01100014);
   FUNC_2(VAR_15, VAR_10,
           0x040C0C06);
   FUNC_2(VAR_15, VAR_11,
           0x03140A08);
   FUNC_2(VAR_15, VAR_12,
           0x00333333);
   FUNC_2(VAR_15, VAR_13,
           0x202C2820);
   FUNC_2(VAR_15, VAR_14,
           0x88888815);
  } else {
   FUNC_2(VAR_15, VAR_9,
           0x11100014);
   FUNC_2(VAR_15, VAR_10,
           0x040c0c06);
   FUNC_2(VAR_15, VAR_11,
           0x03000a08);
   FUNC_2(VAR_15, VAR_12,
           0x00000000);
   FUNC_2(VAR_15, VAR_13,
           0x200005c0);
   FUNC_2(VAR_15, VAR_14,
           0x88888815);
  }
  VAR_17 = VAR_6;
  break;
 default:
  FUNC_0(VAR_21, "Unknown spuravoidance settings for chip 0x%04X, not changing PLL\n",
    VAR_21->chipinfo.id);
  break;
 }

 VAR_17 |= FUNC_1(VAR_15, VAR_4);
 FUNC_3(VAR_15, VAR_4, VAR_17);
}
