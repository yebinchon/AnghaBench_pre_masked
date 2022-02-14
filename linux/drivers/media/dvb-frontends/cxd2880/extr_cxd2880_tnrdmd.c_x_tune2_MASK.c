
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_13__ {scalar_t__ stationary_use; } ;
struct cxd2880_tnrdmd {TYPE_2__* io; TYPE_1__ create_param; } ;
typedef enum cxd2880_tnrdmd_clockmode { ____Placeholder_cxd2880_tnrdmd_clockmode } cxd2880_tnrdmd_clockmode ;
typedef enum cxd2880_dtv_bandwidth { ____Placeholder_cxd2880_dtv_bandwidth } cxd2880_dtv_bandwidth ;
struct TYPE_14__ {int (* write_reg ) (TYPE_2__*,int ,int,int) ;int (* write_regs ) (TYPE_2__*,int ,int,int*,int) ;int (* read_regs ) (TYPE_2__*,int ,int,int*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int,int) ;
 int FUNC_4 (TYPE_2__*,int ,int,int) ;
 int FUNC_5 (TYPE_2__*,int ,int,int*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int,int*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int,int) ;
 int FUNC_8 (TYPE_2__*,int ,int,int) ;
 int FUNC_9 (TYPE_2__*,int ,int,int) ;
 int FUNC_10 (TYPE_2__*,int ,int,int*,int) ;
 int FUNC_11 (TYPE_2__*,int ,int,int*,int) ;
 int FUNC_12 (TYPE_2__*,int ,int,int*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_13(struct cxd2880_tnrdmd *VAR_9,
     enum cxd2880_dtv_bandwidth VAR_10,
     enum cxd2880_tnrdmd_clockmode VAR_11,
     int VAR_12)
{
 u8 VAR_13[3] = { 0 };
 int VAR_14;

 if (!VAR_9)
  return -VAR_3;

 VAR_14 = VAR_9->io->write_reg(VAR_9->io,
         VAR_2,
         0x00, 0x11);
 if (VAR_14)
  return VAR_14;

 VAR_13[0] = 0x01;
 VAR_13[1] = 0x0e;
 VAR_13[2] = 0x01;
 VAR_14 = VAR_9->io->write_regs(VAR_9->io,
          VAR_2,
          0x2d, VAR_13, 3);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_9->io,
       VAR_2,
       VAR_4,
       FUNC_0(VAR_4));
 if (VAR_14)
  return VAR_14;

 VAR_14 = VAR_9->io->read_regs(VAR_9->io,
         VAR_2,
         0x2c, VAR_13, 1);
 if (VAR_14)
  return VAR_14;

 VAR_14 = VAR_9->io->write_reg(VAR_9->io,
         VAR_2,
         0x00, 0x10);
 if (VAR_14)
  return VAR_14;

 VAR_14 = VAR_9->io->write_reg(VAR_9->io,
         VAR_2,
         0x60, VAR_13[0]);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_9->io,
       VAR_2,
       VAR_5,
       FUNC_0(VAR_5));
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_9->io,
       VAR_1,
       VAR_6,
       FUNC_0(VAR_6));
 if (VAR_14)
  return VAR_14;

 if (VAR_12 != 0) {
  int VAR_15 = 0;

  VAR_14 = VAR_9->io->write_reg(VAR_9->io,
          VAR_1,
          0x00, 0xe1);
  if (VAR_14)
   return VAR_14;

  VAR_14 = VAR_9->io->read_regs(VAR_9->io,
          VAR_1,
          0x60, VAR_13, 2);
  if (VAR_14)
   return VAR_14;

  VAR_15 = VAR_12 * 1000;

  switch (VAR_11) {
  case 130:
  case 128:
  default:
   if (VAR_15 >= 0)
    VAR_15 = (VAR_15 + 183 / 2) / 183;
   else
    VAR_15 = (VAR_15 - 183 / 2) / 183;
   break;
  case 129:
   if (VAR_15 >= 0)
    VAR_15 = (VAR_15 + 178 / 2) / 178;
   else
    VAR_15 = (VAR_15 - 178 / 2) / 178;
   break;
  }

  VAR_15 +=
      FUNC_1((VAR_13[0] << 8) | VAR_13[1], 16);

  if (VAR_15 > 32767)
   VAR_15 = 32767;
  else if (VAR_15 < -32768)
   VAR_15 = -32768;

  VAR_13[0] = (VAR_15 >> 8) & 0xff;
  VAR_13[1] = VAR_15 & 0xff;

  VAR_14 = VAR_9->io->write_regs(VAR_9->io,
           VAR_1,
           0x60, VAR_13, 2);
  if (VAR_14)
   return VAR_14;

  VAR_14 = VAR_9->io->read_regs(VAR_9->io,
          VAR_1,
          0x69, VAR_13, 1);
  if (VAR_14)
   return VAR_14;

  VAR_15 = -VAR_12;

  if (VAR_10 == VAR_0) {
   switch (VAR_11) {
   case 130:
   case 128:
   default:
    if (VAR_15 >= 0)
     VAR_15 =
         (VAR_15 * 1000 +
          17578 / 2) / 17578;
    else
     VAR_15 =
         (VAR_15 * 1000 -
          17578 / 2) / 17578;
    break;
   case 129:
    if (VAR_15 >= 0)
     VAR_15 =
         (VAR_15 * 1000 +
          17090 / 2) / 17090;
    else
     VAR_15 =
         (VAR_15 * 1000 -
          17090 / 2) / 17090;
    break;
   }
  } else {
   switch (VAR_11) {
   case 130:
   case 128:
   default:
    if (VAR_15 >= 0)
     VAR_15 =
         (VAR_15 * 1000 +
          35156 / 2) / 35156;
    else
     VAR_15 =
         (VAR_15 * 1000 -
          35156 / 2) / 35156;
    break;
   case 129:
    if (VAR_15 >= 0)
     VAR_15 =
         (VAR_15 * 1000 +
          34180 / 2) / 34180;
    else
     VAR_15 =
         (VAR_15 * 1000 -
          34180 / 2) / 34180;
    break;
   }
  }

  VAR_15 += FUNC_1(VAR_13[0], 8);

  if (VAR_15 > 127)
   VAR_15 = 127;
  else if (VAR_15 < -128)
   VAR_15 = -128;

  VAR_13[0] = VAR_15 & 0xff;

  VAR_14 = VAR_9->io->write_reg(VAR_9->io,
          VAR_1,
          0x69, VAR_13[0]);
  if (VAR_14)
   return VAR_14;
 }

 if (VAR_9->create_param.stationary_use) {
  VAR_14 = FUNC_2(VAR_9->io,
        VAR_1,
        VAR_7,
        FUNC_0(VAR_7));
  if (VAR_14)
   return VAR_14;
 }

 return FUNC_2(VAR_9->io,
        VAR_1,
        VAR_8,
        FUNC_0(VAR_8));
}
