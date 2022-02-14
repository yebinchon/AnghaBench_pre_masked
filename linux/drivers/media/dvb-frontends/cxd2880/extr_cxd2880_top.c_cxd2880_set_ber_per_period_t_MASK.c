
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dvb_frontend {struct cxd2880_priv* demodulator_priv; } ;
struct cxd2880_tnrdmd {TYPE_2__* io; } ;
struct TYPE_4__ {int bandwidth; } ;
struct cxd2880_priv {unsigned int pre_ber_interval; unsigned int post_ber_interval; unsigned int ucblock_interval; struct cxd2880_tnrdmd tnrdmd; TYPE_1__ dvbt_tune_param; } ;
struct cxd2880_dvbt_tpsinfo {scalar_t__ hierarchy; int constellation; size_t guard; size_t rate_hp; size_t rate_lp; } ;
typedef enum cxd2880_dtv_bandwidth { ____Placeholder_cxd2880_dtv_bandwidth } cxd2880_dtv_bandwidth ;
struct TYPE_5__ {int (* write_reg ) (TYPE_2__*,int ,int,int) ;int (* read_regs ) (TYPE_2__*,int ,int,int*,int) ;} ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,struct cxd2880_dvbt_tpsinfo*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_2__*,int ,int,int) ;
 int FUNC_5 (TYPE_2__*,int ,int,int*,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend *VAR_10)
{
 int VAR_11;
 struct cxd2880_priv *VAR_12;
 struct cxd2880_dvbt_tpsinfo VAR_13;
 enum cxd2880_dtv_bandwidth VAR_14 = VAR_0;
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;
 u32 VAR_18 = 0;
 static const int VAR_19[5] = {31500, 42000, 47250, 52500, 55125};
 static const int VAR_20[4] = {125664, 129472, 137088, 152320};

 if (!VAR_10) {
  FUNC_3("invalid arg\n");
  return -VAR_9;
 }

 VAR_12 = VAR_10->demodulator_priv;
 VAR_14 = VAR_12->dvbt_tune_param.bandwidth;

 VAR_11 = FUNC_0(&VAR_12->tnrdmd,
            &VAR_13);
 if (VAR_11) {
  FUNC_3("tps monitor error ret = %d\n", VAR_11);
  VAR_13.hierarchy = VAR_4;
  VAR_13.constellation = VAR_2;
  VAR_13.guard = VAR_3;
  VAR_13.rate_hp = VAR_1;
  VAR_13.rate_lp = VAR_1;
 }

 if (VAR_13.hierarchy == VAR_4) {
  VAR_15 = 63000000 * VAR_14 * (VAR_13.constellation * 2 + 2) /
          VAR_20[VAR_13.guard];

  VAR_16 = 1000 * VAR_19[VAR_13.rate_hp] * VAR_14 *
    (VAR_13.constellation * 2 + 2) /
    VAR_20[VAR_13.guard];

  VAR_17 = 875 * VAR_19[VAR_13.rate_hp] * VAR_14 *
          (VAR_13.constellation * 2 + 2) /
          VAR_20[VAR_13.guard];
 } else {
  u8 VAR_21 = 0;
  struct cxd2880_tnrdmd *VAR_22 = &VAR_12->tnrdmd;

  VAR_11 = VAR_22->io->write_reg(VAR_22->io,
         VAR_5,
         0x00, 0x10);
  if (!VAR_11) {
   VAR_11 = VAR_22->io->read_regs(VAR_22->io,
          VAR_5,
          0x67, &VAR_21, 1);
   if (VAR_11)
    VAR_21 = 0x00;
  } else {
   VAR_21 = 0x00;
  }

  if (VAR_21 & 0x01) {
   VAR_15 =
    63000000 * VAR_14 * (VAR_13.constellation * 2 + 2) /
    VAR_20[VAR_13.guard];

   VAR_16 = 1000 * VAR_19[VAR_13.rate_lp] * VAR_14 *
     (VAR_13.constellation * 2 + 2) /
     VAR_20[VAR_13.guard];

   VAR_17 = (1000 * 7 / 8) * VAR_19[VAR_13.rate_lp] *
           VAR_14 * (VAR_13.constellation * 2 + 2) /
           VAR_20[VAR_13.guard];
  } else {
   VAR_15 =
    63000000 * VAR_14 * 2 / VAR_20[VAR_13.guard];

   VAR_16 = 1000 * VAR_19[VAR_13.rate_hp] * VAR_14 * 2 /
     VAR_20[VAR_13.guard];

   VAR_17 = (1000 * 7 / 8) * VAR_19[VAR_13.rate_hp] *
     VAR_14 * 2 / VAR_20[VAR_13.guard];
  }
 }

 VAR_18 = VAR_15 < 8192 ? 8 : FUNC_2(VAR_15) >> 24;
 VAR_12->pre_ber_interval =
  ((1U << VAR_18) * 1000 + (VAR_15 / 2)) /
  VAR_15;
 FUNC_1(&VAR_12->tnrdmd,
          VAR_8,
          VAR_18 == 8 ? 0 : VAR_18 - 12);

 VAR_18 = FUNC_2(VAR_16) >> 24;
 VAR_12->post_ber_interval =
  ((1U << VAR_18) * 1000 + (VAR_16 / 2)) /
  VAR_16;
 FUNC_1(&VAR_12->tnrdmd,
          VAR_6,
          VAR_18);

 VAR_18 = FUNC_2(VAR_17) >> 24;
 VAR_12->ucblock_interval =
  ((1U << VAR_18) * 1000 + (VAR_17 / 2)) /
  VAR_17;
 FUNC_1(&VAR_12->tnrdmd,
          VAR_7,
          VAR_18);

 return 0;
}
