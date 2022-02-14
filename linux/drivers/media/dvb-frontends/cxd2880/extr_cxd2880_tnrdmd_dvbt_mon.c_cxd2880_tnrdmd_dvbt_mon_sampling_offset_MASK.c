
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cxd2880_tnrdmd {scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
typedef int s8 ;
typedef int nominal_rate_reg ;
typedef int ctl_val_reg ;
struct TYPE_5__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxd2880_tnrdmd*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_7(struct cxd2880_tnrdmd
         *VAR_5, int *VAR_6)
{
 u8 VAR_7[5];
 u8 VAR_8[5];
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 s8 VAR_13 = 0;
 int VAR_14;

 if (!VAR_5 || !VAR_6)
  return -VAR_4;

 if (VAR_5->state != VAR_2)
  return -VAR_4;

 if (VAR_5->sys != VAR_0)
  return -VAR_4;

 VAR_14 = FUNC_1(VAR_5);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_0(VAR_5);
 if (VAR_14) {
  FUNC_2(VAR_5);
  return VAR_14;
 }

 VAR_14 = VAR_5->io->write_reg(VAR_5->io,
         VAR_1,
         0x00, 0x0d);
 if (VAR_14) {
  FUNC_2(VAR_5);
  return VAR_14;
 }

 VAR_14 = VAR_5->io->read_regs(VAR_5->io,
         VAR_1,
         0x21, VAR_7,
         sizeof(VAR_7));
 if (VAR_14) {
  FUNC_2(VAR_5);
  return VAR_14;
 }

 VAR_14 = VAR_5->io->write_reg(VAR_5->io,
         VAR_1,
         0x00, 0x04);
 if (VAR_14) {
  FUNC_2(VAR_5);
  return VAR_14;
 }

 VAR_14 = VAR_5->io->read_regs(VAR_5->io,
         VAR_1,
         0x60, VAR_8,
         sizeof(VAR_8));
 if (VAR_14) {
  FUNC_2(VAR_5);
  return VAR_14;
 }

 FUNC_2(VAR_5);

 VAR_13 =
     (VAR_7[0] & 0x7f) - (VAR_8[0] & 0x7f);

 if (VAR_13 < -1 || VAR_13 > 1)
  return -VAR_3;

 VAR_9 = VAR_7[1] << 24;
 VAR_9 |= VAR_7[2] << 16;
 VAR_9 |= VAR_7[3] << 8;
 VAR_9 |= VAR_7[4];

 VAR_10 = VAR_8[1] << 24;
 VAR_10 |= VAR_8[2] << 16;
 VAR_10 |= VAR_8[3] << 8;
 VAR_10 |= VAR_8[4];

 VAR_9 >>= 1;
 VAR_10 >>= 1;

 if (VAR_13 == 1)
  VAR_11 =
      (int)((VAR_9 + 0x80000000u) -
     VAR_10);
 else if (VAR_13 == -1)
  VAR_11 =
      -(int)((VAR_10 + 0x80000000u) -
      VAR_9);
 else
  VAR_11 = (int)(VAR_9 - VAR_10);

 VAR_12 = (VAR_8[0] & 0x7f) << 24;
 VAR_12 |= VAR_8[1] << 16;
 VAR_12 |= VAR_8[2] << 8;
 VAR_12 |= VAR_8[3];
 VAR_12 = (VAR_12 + (390625 / 2)) / 390625;

 VAR_12 >>= 1;

 if (VAR_11 >= 0)
  *VAR_6 = (VAR_11 + (VAR_12 / 2)) / VAR_12;
 else
  *VAR_6 = (VAR_11 - (VAR_12 / 2)) / VAR_12;

 return VAR_14;
}
