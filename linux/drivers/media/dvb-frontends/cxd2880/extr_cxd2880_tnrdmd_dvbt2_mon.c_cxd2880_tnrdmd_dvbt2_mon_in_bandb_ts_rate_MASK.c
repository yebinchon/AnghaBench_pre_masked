
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
typedef enum cxd2880_dvbt2_plp_btype { ____Placeholder_cxd2880_dvbt2_plp_btype } cxd2880_dvbt2_plp_btype ;
struct TYPE_6__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int*,int*,int*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int) ;
 int FUNC_7 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_8(struct cxd2880_tnrdmd
           *VAR_7,
           enum
           cxd2880_dvbt2_plp_btype
           VAR_8,
           u32 *VAR_9)
{
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 u8 VAR_14[4];
 u8 VAR_15 = 0;

 int VAR_16;

 if (!VAR_7 || !VAR_9)
  return -VAR_6;

 if (VAR_7->diver_mode == VAR_3)
  return -VAR_6;

 if (VAR_7->state != VAR_4)
  return -VAR_6;

 if (VAR_7->sys != VAR_0)
  return -VAR_6;

 VAR_16 = FUNC_1(VAR_7);
 if (VAR_16)
  return VAR_16;

 VAR_16 =
     FUNC_0(VAR_7, &VAR_10,
            &VAR_11,
            &VAR_12);
 if (VAR_16) {
  FUNC_2(VAR_7);
  return VAR_16;
 }

 if (!VAR_11) {
  FUNC_2(VAR_7);
  return -VAR_5;
 }

 VAR_16 = VAR_7->io->write_reg(VAR_7->io,
         VAR_2,
         0x00, 0x0b);
 if (VAR_16) {
  FUNC_2(VAR_7);
  return VAR_16;
 }

 VAR_16 = VAR_7->io->read_regs(VAR_7->io,
         VAR_2,
         0x86, &VAR_13, 1);
 if (VAR_16) {
  FUNC_2(VAR_7);
  return VAR_16;
 }

 if (!(VAR_13 & 0x01)) {
  FUNC_2(VAR_7);
  return -VAR_5;
 }

 if (VAR_8 == VAR_1)
  VAR_15 = 0xba;
 else
  VAR_15 = 0xa7;

 VAR_16 = VAR_7->io->read_regs(VAR_7->io,
         VAR_2,
         VAR_15, &VAR_14[0], 1);
 if (VAR_16) {
  FUNC_2(VAR_7);
  return VAR_16;
 }

 if ((VAR_14[0] & 0x80) == 0x00) {
  FUNC_2(VAR_7);
  return -VAR_5;
 }

 VAR_16 = VAR_7->io->write_reg(VAR_7->io,
         VAR_2,
         0x00, 0x25);
 if (VAR_16) {
  FUNC_2(VAR_7);
  return VAR_16;
 }

 if (VAR_8 == VAR_1)
  VAR_15 = 0xa6;
 else
  VAR_15 = 0xaa;

 VAR_16 = VAR_7->io->read_regs(VAR_7->io,
         VAR_2,
         VAR_15, &VAR_14[0], 4);
 if (VAR_16) {
  FUNC_2(VAR_7);
  return VAR_16;
 }

 *VAR_9 = ((VAR_14[0] & 0x07) << 24) | (VAR_14[1] << 16) |
         (VAR_14[2] << 8) | VAR_14[3];

 return 0;
}
