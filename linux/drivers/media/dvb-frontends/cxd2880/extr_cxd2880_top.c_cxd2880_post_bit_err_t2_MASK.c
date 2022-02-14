
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
typedef enum cxd2880_dvbt2_plp_fec { ____Placeholder_cxd2880_dvbt2_plp_fec } cxd2880_dvbt2_plp_fec ;
typedef enum cxd2880_dvbt2_plp_code_rate { ____Placeholder_cxd2880_dvbt2_plp_code_rate } cxd2880_dvbt2_plp_code_rate ;
struct TYPE_7__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cxd2880_tnrdmd*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int) ;
 int FUNC_7 (TYPE_1__*,int ,int,int*,int) ;

__attribute__((used)) static int FUNC_8(struct cxd2880_tnrdmd *VAR_10,
       u32 *VAR_11,
       u32 *VAR_12)
{
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 u8 VAR_15[3];
 enum cxd2880_dvbt2_plp_fec VAR_16 =
  VAR_1;
 enum cxd2880_dvbt2_plp_code_rate VAR_17 =
  VAR_3;
 int VAR_18;
 static const u16 VAR_19[2][8] = {
  {7200, 9720, 10800, 11880, 12600, 13320, 5400, 6480},
  {32400, 38880, 43200, 48600, 51840, 54000, 21600, 25920}
 };

 if (!VAR_10 || !VAR_11 || !VAR_12)
  return -VAR_9;

 if (VAR_10->diver_mode == VAR_6)
  return -VAR_9;

 if (VAR_10->state != VAR_7)
  return -VAR_9;

 if (VAR_10->sys != VAR_0)
  return -VAR_9;

 VAR_18 = FUNC_0(VAR_10);
 if (VAR_18)
  return VAR_18;

 VAR_18 = VAR_10->io->write_reg(VAR_10->io,
        VAR_5,
        0x00, 0x0b);
 if (VAR_18) {
  FUNC_1(VAR_10);
  return VAR_18;
 }

 VAR_18 = VAR_10->io->read_regs(VAR_10->io,
        VAR_5,
        0x15, VAR_15, 3);
 if (VAR_18) {
  FUNC_1(VAR_10);
  return VAR_18;
 }

 if (!(VAR_15[0] & 0x40)) {
  FUNC_1(VAR_10);
  return -VAR_8;
 }

 *VAR_11 =
  ((VAR_15[0] & 0x3f) << 16) | (VAR_15[1] << 8) | VAR_15[2];

 VAR_18 = VAR_10->io->read_regs(VAR_10->io,
        VAR_5,
        0x9d, VAR_15, 1);
 if (VAR_18) {
  FUNC_1(VAR_10);
  return VAR_18;
 }

 VAR_17 =
 (enum cxd2880_dvbt2_plp_code_rate)(VAR_15[0] & 0x07);

 VAR_18 = VAR_10->io->read_regs(VAR_10->io,
        VAR_5,
        0xa0, VAR_15, 1);
 if (VAR_18) {
  FUNC_1(VAR_10);
  return VAR_18;
 }

 VAR_16 = (enum cxd2880_dvbt2_plp_fec)(VAR_15[0] & 0x03);

 FUNC_1(VAR_10);

 VAR_18 = VAR_10->io->write_reg(VAR_10->io,
        VAR_5,
        0x00, 0x20);
 if (VAR_18)
  return VAR_18;

 VAR_18 = VAR_10->io->read_regs(VAR_10->io,
        VAR_5,
        0x72, VAR_15, 1);
 if (VAR_18)
  return VAR_18;

 VAR_13 = VAR_15[0] & 0x0f;

 if (VAR_16 > VAR_2 ||
     VAR_17 > VAR_4)
  return -VAR_8;

 VAR_14 = VAR_19[VAR_16][VAR_17];

 if (*VAR_11 > ((1U << VAR_13) * VAR_14))
  return -VAR_8;

 *VAR_12 = (1U << VAR_13) * VAR_14;

 return 0;
}
