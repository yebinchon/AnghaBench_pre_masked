
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; TYPE_1__* io; } ;
typedef enum cxd2880_tnrdmd_clockmode { ____Placeholder_cxd2880_tnrdmd_clockmode } cxd2880_tnrdmd_clockmode ;
typedef enum cxd2880_dtv_bandwidth { ____Placeholder_cxd2880_dtv_bandwidth } cxd2880_dtv_bandwidth ;
struct TYPE_43__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* write_regs ) (TYPE_1__*,int ,int,int const*,int) ;} ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int) ;
 int FUNC_7 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_8 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_9 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_10 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_11 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_12 (TYPE_1__*,int ,int,int) ;
 int FUNC_13 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_14 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_15 (TYPE_1__*,int ,int,int) ;
 int FUNC_16 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_17 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_18 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_19 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_20 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_21 (TYPE_1__*,int ,int,int) ;
 int FUNC_22 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_23 (TYPE_1__*,int ,int,int) ;
 int FUNC_24 (TYPE_1__*,int ,int,int) ;
 int FUNC_25 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_26 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_27 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_28 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_29 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_30 (TYPE_1__*,int ,int,int) ;
 int FUNC_31 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_32 (TYPE_1__*,int ,int,int) ;
 int FUNC_33 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_34 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_35 (TYPE_1__*,int ,int,int) ;
 int FUNC_36 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_37 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_38 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_39 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_40 (TYPE_1__*,int ,int,int) ;
 int FUNC_41 (TYPE_1__*,int ,int,int const*,int) ;
 int FUNC_42 (TYPE_1__*,int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_43(struct cxd2880_tnrdmd
         *VAR_10,
         enum cxd2880_dtv_bandwidth
         VAR_11,
         enum cxd2880_tnrdmd_clockmode
         VAR_12)
{
 static const u8 VAR_13[2] = { 0x52, 0x49 };
 static const u8 VAR_14[2] = { 0x5d, 0x55 };
 static const u8 VAR_15[2] = { 0x60, 0x00 };
 static const u8 VAR_16[2] = { 0x01, 0xf0 };
 static const u8 VAR_17[3] = { 0x73, 0xca, 0x49 };
 static const u8 VAR_18[3] = { 0xc8, 0x13, 0xaa };
 static const u8 VAR_19[3] = { 0xdc, 0x6c, 0x00 };

 static const u8 VAR_20[5] = { 0x15, 0x00, 0x00, 0x00, 0x00};
 static const u8 VAR_21[5] = { 0x14, 0x6a, 0xaa, 0xaa, 0xaa};
 static const u8 VAR_22[2] = { 0x01, 0x28 };
 static const u8 VAR_23[2] = { 0x11, 0x44 };
 static const u8 VAR_24[2] = { 0x15, 0x28 };
 static const u8 VAR_25[5] = { 0x30, 0x00, 0x00, 0x90, 0x00 };
 static const u8 VAR_26[5] = { 0x36, 0x71, 0x00, 0xa3, 0x55 };
 static const u8 VAR_27[5] = { 0x38, 0x00, 0x00, 0xa8, 0x00 };
 static const u8 VAR_28[4] = { 0xb3, 0x00, 0x01, 0x02 };

 static const u8 VAR_29[5] = { 0x18, 0x00, 0x00, 0x00, 0x00};
 static const u8 VAR_30[5] = { 0x17, 0x55, 0x55, 0x55, 0x55};
 static const u8 VAR_31[2] = { 0x12, 0x4c };
 static const u8 VAR_32[2] = { 0x1f, 0x15 };
 static const u8 VAR_33[2] = { 0x1f, 0xf8 };
 static const u8 VAR_34[5] = { 0x36, 0xdb, 0x00, 0xa4, 0x92 };
 static const u8 VAR_35[5] = { 0x3e, 0x38, 0x00, 0xba, 0xaa };
 static const u8 VAR_36[5] = { 0x40, 0x00, 0x00, 0xc0, 0x00 };
 static const u8 VAR_37[4] = { 0xb8, 0x00, 0x00, 0x03 };

 static const u8 VAR_38[5] = { 0x1c, 0x00, 0x00, 0x00, 0x00};
 static const u8 VAR_39[5] = { 0x1b, 0x38, 0xe3, 0x8e, 0x38};
 static const u8 VAR_40[2] = { 0x1f, 0xf8 };
 static const u8 VAR_41[2] = { 0x24, 0x43 };
 static const u8 VAR_42[2] = { 0x25, 0x4c };
 static const u8 VAR_43[5] = { 0x40, 0x00, 0x00, 0xc0, 0x00 };
 static const u8 VAR_44[5] = { 0x48, 0x97, 0x00, 0xd9, 0xc7 };
 static const u8 VAR_45[5] = { 0x4a, 0xaa, 0x00, 0xdf, 0xff };
 static const u8 VAR_46[4] = { 0xbe, 0xab, 0x00, 0x03 };

 static const u8 VAR_47[5] = { 0x21, 0x99, 0x99, 0x99, 0x99};
 static const u8 VAR_48[5] = { 0x20, 0xaa, 0xaa, 0xaa, 0xaa};
 static const u8 VAR_49[2] = { 0x26, 0x5d };
 static const u8 VAR_50[2] = { 0x2b, 0x84 };
 static const u8 VAR_51[2] = { 0x2c, 0xc2 };
 static const u8 VAR_52[5] = { 0x4c, 0xcc, 0x00, 0xe6, 0x66 };
 static const u8 VAR_53[5] = { 0x57, 0x1c, 0x01, 0x05, 0x55 };
 static const u8 VAR_54[5] = { 0x59, 0x99, 0x01, 0x0c, 0xcc };
 static const u8 VAR_55[4] = { 0xc8, 0x01, 0x00, 0x03 };
 const u8 *VAR_56 = ((void*)0);
 u8 VAR_57;
 int VAR_58;

 if (!VAR_10)
  return -VAR_4;

 VAR_58 = FUNC_1(VAR_10->io,
       VAR_1,
       VAR_5,
       FUNC_0(VAR_5));
 if (VAR_58)
  return VAR_58;

 VAR_58 = VAR_10->io->write_reg(VAR_10->io,
         VAR_0,
         0x00, 0x04);
 if (VAR_58)
  return VAR_58;

 switch (VAR_12) {
 case 130:
  VAR_56 = VAR_13;
  break;
 case 129:
  VAR_56 = VAR_14;
  break;
 case 128:
  VAR_56 = VAR_15;
  break;
 default:
  return -VAR_4;
 }

 VAR_58 = VAR_10->io->write_regs(VAR_10->io,
          VAR_0,
          0x65, VAR_56, 2);
 if (VAR_58)
  return VAR_58;

 VAR_58 = VAR_10->io->write_reg(VAR_10->io,
         VAR_0,
         0x5d, 0x07);
 if (VAR_58)
  return VAR_58;

 if (VAR_10->diver_mode != VAR_3) {
  u8 VAR_59[2] = { 0x01, 0x01 };

  VAR_58 = VAR_10->io->write_reg(VAR_10->io,
          VAR_0,
          0x00, 0x00);
  if (VAR_58)
   return VAR_58;

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0xce, VAR_59, 2);
  if (VAR_58)
   return VAR_58;
 }

 VAR_58 = FUNC_1(VAR_10->io,
       VAR_0,
       VAR_6,
       FUNC_0(VAR_6));
 if (VAR_58)
  return VAR_58;

 VAR_58 = VAR_10->io->write_regs(VAR_10->io,
          VAR_0,
          0xf0, VAR_16, 2);
 if (VAR_58)
  return VAR_58;

 if (VAR_10->diver_mode == VAR_2 ||
     VAR_10->diver_mode == VAR_3) {
  VAR_58 = FUNC_1(VAR_10->io,
        VAR_0,
        VAR_7,
        FUNC_0(VAR_7));
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_10->diver_mode == VAR_3) {
  VAR_58 = FUNC_1(VAR_10->io,
        VAR_0,
        VAR_8,
        FUNC_0(VAR_8));
  if (VAR_58)
   return VAR_58;
 }

 if (VAR_10->diver_mode != VAR_3) {
  VAR_58 = VAR_10->io->write_reg(VAR_10->io,
          VAR_0,
          0x00, 0x04);
  if (VAR_58)
   return VAR_58;

  switch (VAR_12) {
  case 130:
   VAR_56 = VAR_17;
   break;
  case 129:
   VAR_56 = VAR_18;
   break;
  case 128:
   VAR_56 = VAR_19;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x68, VAR_56, 3);
  if (VAR_58)
   return VAR_58;
 }

 VAR_58 = VAR_10->io->write_reg(VAR_10->io,
         VAR_0,
         0x00, 0x04);
 if (VAR_58)
  return VAR_58;

 switch (VAR_11) {
 case 131:
  switch (VAR_12) {
  case 130:
  case 128:
   VAR_56 = VAR_20;
   break;
  case 129:
   VAR_56 = VAR_21;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x60, VAR_56, 5);
  if (VAR_58)
   return VAR_58;

  VAR_58 = VAR_10->io->write_reg(VAR_10->io,
          VAR_0,
          0x4a, 0x00);
  if (VAR_58)
   return VAR_58;

  switch (VAR_12) {
  case 130:
   VAR_56 = VAR_22;
   break;
  case 129:
   VAR_56 = VAR_23;
   break;
  case 128:
   VAR_56 = VAR_24;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x7d, VAR_56, 2);
  if (VAR_58)
   return VAR_58;

  switch (VAR_12) {
  case 130:
  case 129:
   VAR_57 = 0x35;
   break;
  case 128:
   VAR_57 = 0x34;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_reg(VAR_10->io,
          VAR_0,
          0x71, VAR_57);
  if (VAR_58)
   return VAR_58;

  if (VAR_10->diver_mode == VAR_2) {
   switch (VAR_12) {
   case 130:
    VAR_56 = VAR_25;
    break;
   case 129:
    VAR_56 = VAR_26;
    break;
   case 128:
    VAR_56 = VAR_27;
    break;
   default:
    return -VAR_4;
   }

   VAR_58 = VAR_10->io->write_regs(VAR_10->io,
            VAR_0,
            0x4b, &VAR_56[0], 2);
   if (VAR_58)
    return VAR_58;

   VAR_58 = VAR_10->io->write_regs(VAR_10->io,
            VAR_0,
            0x51, &VAR_56[2], 3);
   if (VAR_58)
    return VAR_58;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x72, &VAR_28[0], 2);
  if (VAR_58)
   return VAR_58;

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x6b, &VAR_28[2], 2);
  if (VAR_58)
   return VAR_58;
  break;

 case 132:
  switch (VAR_12) {
  case 130:
  case 128:
   VAR_56 = VAR_29;
   break;
  case 129:
   VAR_56 = VAR_30;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x60, VAR_56, 5);
  if (VAR_58)
   return VAR_58;

  VAR_58 = VAR_10->io->write_reg(VAR_10->io,
          VAR_0,
          0x4a, 0x02);
  if (VAR_58)
   return VAR_58;

  switch (VAR_12) {
  case 130:
   VAR_56 = VAR_31;
   break;
  case 129:
   VAR_56 = VAR_32;
   break;
  case 128:
   VAR_56 = VAR_33;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x7d, VAR_56, 2);
  if (VAR_58)
   return VAR_58;

  switch (VAR_12) {
  case 130:
  case 129:
   VAR_57 = 0x2f;
   break;
  case 128:
   VAR_57 = 0x2e;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_reg(VAR_10->io,
          VAR_0,
          0x71, VAR_57);
  if (VAR_58)
   return VAR_58;

  if (VAR_10->diver_mode == VAR_2) {
   switch (VAR_12) {
   case 130:
    VAR_56 = VAR_34;
    break;
   case 129:
    VAR_56 = VAR_35;
    break;
   case 128:
    VAR_56 = VAR_36;
    break;
   default:
    return -VAR_4;
   }

   VAR_58 = VAR_10->io->write_regs(VAR_10->io,
            VAR_0,
            0x4b, &VAR_56[0], 2);
   if (VAR_58)
    return VAR_58;

   VAR_58 = VAR_10->io->write_regs(VAR_10->io,
            VAR_0,
            0x51, &VAR_56[2], 3);
   if (VAR_58)
    return VAR_58;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x72, &VAR_37[0], 2);
  if (VAR_58)
   return VAR_58;

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x6b, &VAR_37[2], 2);
  if (VAR_58)
   return VAR_58;
  break;

 case 133:
  switch (VAR_12) {
  case 130:
  case 128:
   VAR_56 = VAR_38;
   break;
  case 129:
   VAR_56 = VAR_39;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x60, VAR_56, 5);
  if (VAR_58)
   return VAR_58;

  VAR_58 = VAR_10->io->write_reg(VAR_10->io,
          VAR_0,
          0x4a, 0x04);
  if (VAR_58)
   return VAR_58;

  switch (VAR_12) {
  case 130:
   VAR_56 = VAR_40;
   break;
  case 129:
   VAR_56 = VAR_41;
   break;
  case 128:
   VAR_56 = VAR_42;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x7d, VAR_56, 2);
  if (VAR_58)
   return VAR_58;

  switch (VAR_12) {
  case 130:
  case 128:
   VAR_57 = 0x29;
   break;
  case 129:
   VAR_57 = 0x2a;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_reg(VAR_10->io,
          VAR_0,
          0x71, VAR_57);
  if (VAR_58)
   return VAR_58;

  if (VAR_10->diver_mode == VAR_2) {
   switch (VAR_12) {
   case 130:
    VAR_56 = VAR_43;
    break;
   case 129:
    VAR_56 = VAR_44;
    break;
   case 128:
    VAR_56 = VAR_45;
    break;
   default:
    return -VAR_4;
   }

   VAR_58 = VAR_10->io->write_regs(VAR_10->io,
            VAR_0,
            0x4b, &VAR_56[0], 2);
   if (VAR_58)
    return VAR_58;

   VAR_58 = VAR_10->io->write_regs(VAR_10->io,
            VAR_0,
            0x51, &VAR_56[2], 3);
   if (VAR_58)
    return VAR_58;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x72, &VAR_46[0], 2);
  if (VAR_58)
   return VAR_58;

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x6b, &VAR_46[2], 2);
  if (VAR_58)
   return VAR_58;
  break;

 case 134:
  switch (VAR_12) {
  case 130:
  case 128:
   VAR_56 = VAR_47;
   break;
  case 129:
   VAR_56 = VAR_48;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x60, VAR_56, 5);
  if (VAR_58)
   return VAR_58;

  VAR_58 = VAR_10->io->write_reg(VAR_10->io,
          VAR_0,
          0x4a, 0x06);
  if (VAR_58)
   return VAR_58;

  switch (VAR_12) {
  case 130:
   VAR_56 = VAR_49;
   break;
  case 129:
   VAR_56 = VAR_50;
   break;
  case 128:
   VAR_56 = VAR_51;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x7d, VAR_56, 2);
  if (VAR_58)
   return VAR_58;

  switch (VAR_12) {
  case 130:
  case 129:
   VAR_57 = 0x24;
   break;
  case 128:
   VAR_57 = 0x23;
   break;
  default:
   return -VAR_4;
  }

  VAR_58 = VAR_10->io->write_reg(VAR_10->io,
          VAR_0,
          0x71, VAR_57);
  if (VAR_58)
   return VAR_58;

  if (VAR_10->diver_mode == VAR_2) {
   switch (VAR_12) {
   case 130:
    VAR_56 = VAR_52;
    break;
   case 129:
    VAR_56 = VAR_53;
    break;
   case 128:
    VAR_56 = VAR_54;
    break;
   default:
    return -VAR_4;
   }

   VAR_58 = VAR_10->io->write_regs(VAR_10->io,
            VAR_0,
            0x4b, &VAR_56[0], 2);
   if (VAR_58)
    return VAR_58;

   VAR_58 = VAR_10->io->write_regs(VAR_10->io,
            VAR_0,
            0x51, &VAR_56[2], 3);
   if (VAR_58)
    return VAR_58;
  }

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x72, &VAR_55[0], 2);
  if (VAR_58)
   return VAR_58;

  VAR_58 = VAR_10->io->write_regs(VAR_10->io,
           VAR_0,
           0x6b, &VAR_55[2], 2);
  if (VAR_58)
   return VAR_58;
  break;

 default:
  return -VAR_4;
 }

 return FUNC_1(VAR_10->io,
        VAR_0,
        VAR_9,
        FUNC_0(VAR_9));
}
