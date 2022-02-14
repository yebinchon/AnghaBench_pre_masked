
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dvb_frontend {struct cxd2880_priv* demodulator_priv; } ;
struct TYPE_2__ {int bandwidth; } ;
struct cxd2880_priv {unsigned int pre_ber_interval; unsigned int post_ber_interval; unsigned int ucblock_interval; int tnrdmd; TYPE_1__ dvbt2_tune_param; } ;
struct cxd2880_dvbt2_plp {int til_len; int num_blocks_max; size_t fec; size_t plp_cr; scalar_t__ til_type; } ;
struct cxd2880_dvbt2_l1pre {size_t fft_mode; size_t gi; int const num_symbols; scalar_t__ mixed; } ;
struct cxd2880_dvbt2_l1post {int fef_intvl; int fef_length; } ;
struct cxd2880_dvbt2_bbheader {scalar_t__ plp_mode; int issy_indicator; } ;
typedef enum cxd2880_dtv_bandwidth { ____Placeholder_cxd2880_dtv_bandwidth } cxd2880_dtv_bandwidth ;







 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,struct cxd2880_dvbt2_plp*) ;
 int FUNC_1 (int *,int ,struct cxd2880_dvbt2_bbheader*) ;
 int FUNC_2 (int *,struct cxd2880_dvbt2_l1post*) ;
 int FUNC_3 (int *,struct cxd2880_dvbt2_l1pre*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_7)
{
 int VAR_8;
 struct cxd2880_priv *VAR_9;
 struct cxd2880_dvbt2_l1pre VAR_10;
 struct cxd2880_dvbt2_l1post VAR_11;
 struct cxd2880_dvbt2_plp VAR_12;
 struct cxd2880_dvbt2_bbheader VAR_13;
 enum cxd2880_dtv_bandwidth VAR_14 = 132;
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;
 u32 VAR_18 = 0;
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;
 static const u32 VAR_22[7] = {32, 64, 128, 256, 8, 152, 76};
 static const u8 VAR_23[6] = {8, 2, 4, 16, 1, 1};
 static const u8 VAR_24[6] = {2, 8, 4, 1, 16, 32};
 static const u32 VAR_25[2][8] = {
  {6952, 9472, 10552, 11632, 12352, 13072, 5152, 6232},
  {32128, 38608, 42960, 48328, 51568, 53760, 0, 0}
 };

 if (!VAR_7) {
  FUNC_6("invalid arg\n");
  return -VAR_6;
 }

 VAR_9 = VAR_7->demodulator_priv;
 VAR_14 = VAR_9->dvbt2_tune_param.bandwidth;

 VAR_8 = FUNC_3(&VAR_9->tnrdmd, &VAR_10);
 if (VAR_8) {
  FUNC_7("l1 pre error\n");
  goto error_ber_setting;
 }

 VAR_8 = FUNC_0(&VAR_9->tnrdmd,
        VAR_0, &VAR_12);
 if (VAR_8) {
  FUNC_7("plp info error\n");
  goto error_ber_setting;
 }

 VAR_8 = FUNC_2(&VAR_9->tnrdmd, &VAR_11);
 if (VAR_8) {
  FUNC_7("l1 post error\n");
  goto error_ber_setting;
 }

 VAR_19 =
  (VAR_24[VAR_10.fft_mode] * (1024 + VAR_22[VAR_10.gi])) *
  (VAR_10.num_symbols + VAR_23[VAR_10.fft_mode]) + 2048;

 if (VAR_10.mixed && VAR_11.fef_intvl) {
  VAR_20 = (VAR_11.fef_length + (VAR_11.fef_intvl / 2)) /
    VAR_11.fef_intvl;
 } else {
  VAR_20 = 0;
 }

 switch (VAR_14) {
 case 132:
  VAR_21 = ((VAR_19 + VAR_20) * 71 + (131 / 2)) / 131;
  break;
 case 131:
  VAR_21 = ((VAR_19 + VAR_20) * 7 + 20) / 40;
  break;
 case 130:
  VAR_21 = ((VAR_19 + VAR_20) * 7 + 24) / 48;
  break;
 case 129:
  VAR_21 = ((VAR_19 + VAR_20) + 4) / 8;
  break;
 case 128:
 default:
  VAR_21 = ((VAR_19 + VAR_20) * 7 + 32) / 64;
  break;
 }

 if (VAR_12.til_type && VAR_12.til_len) {
  VAR_15 =
   (VAR_12.num_blocks_max * 1000000 + (VAR_21 / 2)) /
   VAR_21;
  VAR_15 = (VAR_15 + (VAR_12.til_len / 2)) /
          VAR_12.til_len;
 } else {
  VAR_15 =
   (VAR_12.num_blocks_max * 1000000 + (VAR_21 / 2)) /
   VAR_21;
 }

 VAR_16 = VAR_15;

 VAR_18 = FUNC_5(VAR_15) >> 24;
 VAR_9->pre_ber_interval =
  ((1U << VAR_18) * 1000 + (VAR_15 / 2)) /
  VAR_15;
 FUNC_4(&VAR_9->tnrdmd,
          VAR_4,
          VAR_18);

 VAR_18 = FUNC_5(VAR_16) >> 24;
 VAR_9->post_ber_interval =
  ((1U << VAR_18) * 1000 + (VAR_16 / 2)) /
  VAR_16;
 FUNC_4(&VAR_9->tnrdmd,
          VAR_3,
          VAR_18);

 VAR_8 = FUNC_1(&VAR_9->tnrdmd,
      VAR_0,
      &VAR_13);
 if (VAR_8) {
  FUNC_7("bb header error\n");
  goto error_ucblock_setting;
 }

 if (VAR_13.plp_mode == VAR_2) {
  if (!VAR_13.issy_indicator) {
   VAR_17 =
    (VAR_15 * VAR_25[VAR_12.fec][VAR_12.plp_cr] +
    752) / 1504;
  } else {
   VAR_17 =
    (VAR_15 * VAR_25[VAR_12.fec][VAR_12.plp_cr] +
    764) / 1528;
  }
 } else if (VAR_13.plp_mode == VAR_1) {
  VAR_17 =
   (VAR_15 * VAR_25[VAR_12.fec][VAR_12.plp_cr] + 748) /
   1496;
 } else {
  FUNC_7("plp mode is not Normal or HEM\n");
  goto error_ucblock_setting;
 }

 VAR_18 = FUNC_5(VAR_17) >> 24;
 VAR_9->ucblock_interval =
  ((1U << VAR_18) * 1000 + (VAR_17 / 2)) /
  VAR_17;
 FUNC_4(&VAR_9->tnrdmd,
          VAR_5,
          VAR_18);

 return 0;

error_ber_setting:
 VAR_9->pre_ber_interval = 1000;
 FUNC_4(&VAR_9->tnrdmd,
         VAR_4, 0);

 VAR_9->post_ber_interval = 1000;
 FUNC_4(&VAR_9->tnrdmd,
          VAR_3, 0);

error_ucblock_setting:
 VAR_9->ucblock_interval = 1000;
 FUNC_4(&VAR_9->tnrdmd,
          VAR_5, 8);

 return 0;
}
