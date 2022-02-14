
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u32 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
typedef enum cxd2880_dvbt2_plp_fec { ____Placeholder_cxd2880_dvbt2_plp_fec } cxd2880_dvbt2_plp_fec ;
typedef int data ;
struct TYPE_6__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cxd2880_tnrdmd*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int*,int) ;

__attribute__((used)) static int FUNC_7(struct cxd2880_tnrdmd *VAR_7,
      u32 *VAR_8,
      u32 *VAR_9)
{
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 u8 VAR_12[5];
 int VAR_13;

 if (!VAR_7 || !VAR_8 || !VAR_9)
  return -VAR_6;

 if (VAR_7->diver_mode == VAR_3)
  return -VAR_6;

 if (VAR_7->state != VAR_4)
  return -VAR_6;

 if (VAR_7->sys != VAR_0)
  return -VAR_6;

 VAR_13 = FUNC_0(VAR_7);
 if (VAR_13)
  return VAR_13;

 VAR_13 = VAR_7->io->write_reg(VAR_7->io,
        VAR_2,
        0x00, 0x0b);
 if (VAR_13) {
  FUNC_1(VAR_7);
  return VAR_13;
 }

 VAR_13 = VAR_7->io->read_regs(VAR_7->io,
        VAR_2,
        0x3c, VAR_12, sizeof(VAR_12));
 if (VAR_13) {
  FUNC_1(VAR_7);
  return VAR_13;
 }

 if (!(VAR_12[0] & 0x01)) {
  FUNC_1(VAR_7);
  return -VAR_5;
 }
 *VAR_8 =
 ((VAR_12[1] & 0x0f) << 24) | (VAR_12[2] << 16) | (VAR_12[3] << 8) | VAR_12[4];

 VAR_13 = VAR_7->io->read_regs(VAR_7->io,
        VAR_2,
        0xa0, VAR_12, 1);
 if (VAR_13) {
  FUNC_1(VAR_7);
  return VAR_13;
 }

 if (((enum cxd2880_dvbt2_plp_fec)(VAR_12[0] & 0x03)) ==
     VAR_1)
  VAR_11 = 16200;
 else
  VAR_11 = 64800;
 FUNC_1(VAR_7);

 VAR_13 = VAR_7->io->write_reg(VAR_7->io,
        VAR_2,
        0x00, 0x20);
 if (VAR_13)
  return VAR_13;

 VAR_13 = VAR_7->io->read_regs(VAR_7->io,
        VAR_2,
        0x6f, VAR_12, 1);
 if (VAR_13)
  return VAR_13;

 VAR_10 = VAR_12[0] & 0x0f;

 *VAR_9 = (1U << VAR_10) * VAR_11;

 return 0;
}
