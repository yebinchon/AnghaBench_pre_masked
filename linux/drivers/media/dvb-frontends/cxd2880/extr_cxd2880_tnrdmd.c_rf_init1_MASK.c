
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_52__ TYPE_6__ ;
typedef struct TYPE_51__ TYPE_5__ ;
typedef struct TYPE_50__ TYPE_4__ ;
typedef struct TYPE_49__ TYPE_3__ ;
typedef struct TYPE_48__ TYPE_2__ ;
typedef struct TYPE_47__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_51__ {scalar_t__ xtal_share_type; scalar_t__ stationary_use; scalar_t__ is_cxd2881gg; } ;
struct cxd2880_tnrdmd {scalar_t__ chip_id; TYPE_6__* io; TYPE_5__ create_param; TYPE_4__* lna_thrs_tbl_cable; TYPE_2__* lna_thrs_tbl_air; } ;
struct TYPE_52__ {int (* write_reg ) (TYPE_6__*,int ,int,int) ;int (* write_regs ) (TYPE_6__*,int ,int,int*,int) ;int (* read_regs ) (TYPE_6__*,int ,int,int*,int) ;} ;
struct TYPE_50__ {TYPE_3__* thrs; } ;
struct TYPE_49__ {int off_on; int on_off; } ;
struct TYPE_48__ {TYPE_1__* thrs; } ;
struct TYPE_47__ {int off_on; int on_off; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_6__*,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_6__*,int ,int,int) ;
 int FUNC_3 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_4 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_5 (TYPE_6__*,int ,int,int) ;
 int FUNC_6 (TYPE_6__*,int ,int,int const*,int) ;
 int FUNC_7 (TYPE_6__*,int ,int,int) ;
 int FUNC_8 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_9 (TYPE_6__*,int ,int,int) ;
 int FUNC_10 (TYPE_6__*,int ,int,int const*,int) ;
 int FUNC_11 (TYPE_6__*,int ,int,int const*,int) ;
 int FUNC_12 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_13 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_14 (TYPE_6__*,int ,int,int) ;
 int FUNC_15 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_16 (TYPE_6__*,int ,int,int) ;
 int FUNC_17 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_18 (TYPE_6__*,int ,int,int) ;
 int FUNC_19 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_20 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_21 (TYPE_6__*,int ,int,int const*,int) ;
 int FUNC_22 (TYPE_6__*,int ,int,int) ;
 int FUNC_23 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_24 (TYPE_6__*,int ,int,int) ;
 int FUNC_25 (TYPE_6__*,int ,int,int const*,int) ;
 int FUNC_26 (TYPE_6__*,int ,int,int) ;
 int FUNC_27 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_28 (TYPE_6__*,int ,int,int) ;
 int FUNC_29 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_30 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_31 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_32 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_33 (TYPE_6__*,int ,int,int) ;
 int FUNC_34 (TYPE_6__*,int ,int,int) ;
 int FUNC_35 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_36 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_37 (TYPE_6__*,int ,int,int) ;
 int FUNC_38 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_39 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_40 (TYPE_6__*,int ,int,int) ;
 int FUNC_41 (TYPE_6__*,int ,int,int*,int) ;
 int FUNC_42 (int,int) ;

__attribute__((used)) static int FUNC_43(struct cxd2880_tnrdmd *VAR_14)
{
 u8 VAR_15[8] = { 0 };
 static const u8 VAR_16[40] = {
  0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
  0x05, 0x05, 0x04, 0x04, 0x04, 0x03, 0x03,
  0x03, 0x04, 0x04, 0x05, 0x05, 0x05, 0x02,
  0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
  0x02, 0x03, 0x02, 0x01, 0x01, 0x01, 0x02,
  0x02, 0x03, 0x04, 0x04, 0x04
 };

 static const u8 VAR_17[5] = {0xff, 0x00, 0x00, 0x00, 0x00};
 static const u8 VAR_18[80] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
  0x01, 0x00, 0x02, 0x00, 0x63, 0x00, 0x00,
  0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x06, 0x00, 0x08, 0x00, 0x09,
  0x00, 0x0b, 0x00, 0x0b, 0x00, 0x0d, 0x00,
  0x0d, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f,
  0x00, 0x10, 0x00, 0x79, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01,
  0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00,
  0x04, 0x00, 0x04, 0x00, 0x06, 0x00, 0x05,
  0x00, 0x07, 0x00, 0x07, 0x00, 0x08, 0x00,
  0x0a, 0x03, 0xe0
 };

 static const u8 VAR_19[8] = {
  0x20, 0x20, 0x30, 0x41, 0x50, 0x5f, 0x6f, 0x80
 };

 static const u8 VAR_20[50] = {
  0x00, 0x09, 0x00, 0x08, 0x00, 0x07, 0x00,
  0x06, 0x00, 0x05, 0x00, 0x03, 0x00, 0x02,
  0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x08, 0x00, 0x08, 0x00, 0x0c,
  0x00, 0x0c, 0x00, 0x0d, 0x00, 0x0f, 0x00,
  0x0e, 0x00, 0x0e, 0x00, 0x10, 0x00, 0x0f,
  0x00, 0x0e, 0x00, 0x10, 0x00, 0x0f, 0x00,
  0x0e
 };

 u8 VAR_21 = 0;
 int VAR_22;

 if (!VAR_14)
  return -VAR_4;

 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x00, 0x00);
 if (VAR_22)
  return VAR_22;
 VAR_15[0] = 0x01;
 VAR_15[1] = 0x00;
 VAR_15[2] = 0x01;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0x21, VAR_15, 3);
 if (VAR_22)
  return VAR_22;

 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x00, 0x10);
 if (VAR_22)
  return VAR_22;
 VAR_15[0] = 0x01;
 VAR_15[1] = 0x01;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0x17, VAR_15, 2);
 if (VAR_22)
  return VAR_22;

 if (VAR_14->create_param.stationary_use) {
  VAR_22 = VAR_14->io->write_reg(VAR_14->io,
          VAR_1,
          0x1a, 0x06);
  if (VAR_22)
   return VAR_22;
 }

 VAR_22 = FUNC_1(VAR_14->io,
       VAR_1,
       VAR_5,
       FUNC_0(VAR_5));
 if (VAR_22)
  return VAR_22;

 VAR_15[0] = 0x00;
 if (VAR_14->create_param.is_cxd2881gg &&
     VAR_14->create_param.xtal_share_type ==
  VAR_3)
  VAR_15[1] = 0x00;
 else
  VAR_15[1] = 0x1f;
 VAR_15[2] = 0x0a;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0xb5, VAR_15, 3);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_1(VAR_14->io,
       VAR_1,
       VAR_6,
       FUNC_0(VAR_6));
 if (VAR_22)
  return VAR_22;

 if (VAR_14->chip_id == VAR_2) {
  VAR_15[0] = 0x34;
  VAR_15[1] = 0x2c;
 } else {
  VAR_15[0] = 0x2f;
  VAR_15[1] = 0x25;
 }
 VAR_15[2] = 0x15;
 VAR_15[3] = 0x19;
 VAR_15[4] = 0x1b;
 VAR_15[5] = 0x15;
 VAR_15[6] = 0x19;
 VAR_15[7] = 0x1b;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0xd9, VAR_15, 8);
 if (VAR_22)
  return VAR_22;

 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x00, 0x11);
 if (VAR_22)
  return VAR_22;
 VAR_15[0] = 0x6c;
 VAR_15[1] = 0x10;
 VAR_15[2] = 0xa6;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0x44, VAR_15, 3);
 if (VAR_22)
  return VAR_22;
 VAR_15[0] = 0x16;
 VAR_15[1] = 0xa8;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0x50, VAR_15, 2);
 if (VAR_22)
  return VAR_22;
 VAR_15[0] = 0x00;
 VAR_15[1] = 0x22;
 VAR_15[2] = 0x00;
 VAR_15[3] = 0x88;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0x62, VAR_15, 4);
 if (VAR_22)
  return VAR_22;
 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x74, 0x75);
 if (VAR_22)
  return VAR_22;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0x7f, VAR_16, 40);
 if (VAR_22)
  return VAR_22;

 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x00, 0x16);
 if (VAR_22)
  return VAR_22;
 VAR_15[0] = 0x00;
 VAR_15[1] = 0x71;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0x10, VAR_15, 2);
 if (VAR_22)
  return VAR_22;
 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x23, 0x89);
 if (VAR_22)
  return VAR_22;

 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0x27, VAR_17, 5);
 if (VAR_22)
  return VAR_22;

 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0x3a, VAR_18, 80);
 if (VAR_22)
  return VAR_22;

 VAR_15[0] = 0x03;
 VAR_15[1] = 0xe0;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0xbc, VAR_15, 2);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_1(VAR_14->io,
       VAR_1,
       VAR_7,
       FUNC_0(VAR_7));
 if (VAR_22)
  return VAR_22;

 if (VAR_14->create_param.stationary_use) {
  VAR_15[0] = 0x06;
  VAR_15[1] = 0x07;
  VAR_15[2] = 0x1a;
 } else {
  VAR_15[0] = 0x00;
  VAR_15[1] = 0x08;
  VAR_15[2] = 0x19;
 }
 VAR_15[3] = 0x0e;
 VAR_15[4] = 0x09;
 VAR_15[5] = 0x0e;

 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x00, 0x12);
 if (VAR_22)
  return VAR_22;
 for (VAR_21 = 0x10; VAR_21 < 0x9f; VAR_21 += 6) {
  if (VAR_14->lna_thrs_tbl_air) {
   u8 VAR_23 = 0;

   VAR_23 = (VAR_21 - 0x10) / 6;
   VAR_15[0] =
       VAR_14->lna_thrs_tbl_air->thrs[VAR_23].off_on;
   VAR_15[1] =
       VAR_14->lna_thrs_tbl_air->thrs[VAR_23].on_off;
  }
  VAR_22 = VAR_14->io->write_regs(VAR_14->io,
           VAR_1,
           VAR_21, VAR_15, 6);
  if (VAR_22)
   return VAR_22;
 }

 VAR_15[0] = 0x00;
 VAR_15[1] = 0x08;
 if (VAR_14->create_param.stationary_use)
  VAR_15[2] = 0x1a;
 else
  VAR_15[2] = 0x19;
 VAR_15[3] = 0x0e;
 VAR_15[4] = 0x09;
 VAR_15[5] = 0x0e;

 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x00, 0x13);
 if (VAR_22)
  return VAR_22;
 for (VAR_21 = 0x10; VAR_21 < 0xcf; VAR_21 += 6) {
  if (VAR_14->lna_thrs_tbl_cable) {
   u8 VAR_24 = 0;

   VAR_24 = (VAR_21 - 0x10) / 6;
   VAR_15[0] =
       VAR_14->lna_thrs_tbl_cable->thrs[VAR_24].off_on;
   VAR_15[1] =
       VAR_14->lna_thrs_tbl_cable->thrs[VAR_24].on_off;
  }
  VAR_22 = VAR_14->io->write_regs(VAR_14->io,
           VAR_1,
           VAR_21, VAR_15, 6);
  if (VAR_22)
   return VAR_22;
 }

 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x00, 0x11);
 if (VAR_22)
  return VAR_22;
 VAR_15[0] = 0x08;
 VAR_15[1] = 0x09;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0xbd, VAR_15, 2);
 if (VAR_22)
  return VAR_22;
 VAR_15[0] = 0x08;
 VAR_15[1] = 0x09;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0xc4, VAR_15, 2);
 if (VAR_22)
  return VAR_22;

 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0xc9, VAR_19, 8);
 if (VAR_22)
  return VAR_22;

 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x00, 0x14);
 if (VAR_22)
  return VAR_22;
 VAR_15[0] = 0x15;
 VAR_15[1] = 0x18;
 VAR_15[2] = 0x00;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0x10, VAR_15, 3);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_1(VAR_14->io,
       VAR_1,
       VAR_8,
       FUNC_0(VAR_8));
 if (VAR_22)
  return VAR_22;

 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_1,
          0x12, VAR_20, 50);
 if (VAR_22)
  return VAR_22;

 FUNC_42(1000, 2000);

 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x00, 0x0a);
 if (VAR_22)
  return VAR_22;
 VAR_22 = VAR_14->io->read_regs(VAR_14->io,
         VAR_1,
         0x10, VAR_15, 1);
 if (VAR_22)
  return VAR_22;
 if ((VAR_15[0] & 0x01) == 0x00)
  return -VAR_4;

 VAR_22 = FUNC_1(VAR_14->io,
       VAR_1,
       VAR_9,
       FUNC_0(VAR_9));
 if (VAR_22)
  return VAR_22;

 FUNC_42(1000, 2000);

 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x00, 0x0a);
 if (VAR_22)
  return VAR_22;
 VAR_22 = VAR_14->io->read_regs(VAR_14->io,
         VAR_1,
         0x11, VAR_15, 1);
 if (VAR_22)
  return VAR_22;
 if ((VAR_15[0] & 0x01) == 0x00)
  return -VAR_4;

 VAR_22 = FUNC_1(VAR_14->io,
       VAR_0,
       VAR_10,
       FUNC_0(VAR_10));
 if (VAR_22)
  return VAR_22;

 VAR_15[0] = 0x00;
 VAR_15[1] = 0xfe;
 VAR_15[2] = 0xee;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_0,
          0x6e, VAR_15, 3);
 if (VAR_22)
  return VAR_22;
 VAR_15[0] = 0xa1;
 VAR_15[1] = 0x8b;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_0,
          0x8d, VAR_15, 2);
 if (VAR_22)
  return VAR_22;
 VAR_15[0] = 0x08;
 VAR_15[1] = 0x09;
 VAR_22 = VAR_14->io->write_regs(VAR_14->io,
          VAR_0,
          0x77, VAR_15, 2);
 if (VAR_22)
  return VAR_22;

 if (VAR_14->create_param.stationary_use) {
  VAR_22 = VAR_14->io->write_reg(VAR_14->io,
          VAR_0,
          0x80, 0xaa);
  if (VAR_22)
   return VAR_22;
 }

 VAR_22 = FUNC_1(VAR_14->io,
       VAR_0,
       VAR_11,
       FUNC_0(VAR_11));
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_1(VAR_14->io,
       VAR_1,
       VAR_12,
       FUNC_0(VAR_12));
 if (VAR_22)
  return VAR_22;

 FUNC_42(1000, 2000);

 VAR_22 = VAR_14->io->write_reg(VAR_14->io,
         VAR_1,
         0x00, 0x1a);
 if (VAR_22)
  return VAR_22;
 VAR_22 = VAR_14->io->read_regs(VAR_14->io,
         VAR_1,
         0x10, VAR_15, 1);
 if (VAR_22)
  return VAR_22;
 if ((VAR_15[0] & 0x01) == 0x00)
  return -VAR_4;

 return FUNC_1(VAR_14->io,
        VAR_1,
        VAR_13,
        FUNC_0(VAR_13));
}
