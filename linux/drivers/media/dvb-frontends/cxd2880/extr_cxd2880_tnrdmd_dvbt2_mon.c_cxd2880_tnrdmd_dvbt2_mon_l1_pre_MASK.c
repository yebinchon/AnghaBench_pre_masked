
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
struct cxd2880_dvbt2_l1pre {int type; int bw_ext; int s1; int s2; int l1_rep; int gi; int papr; int mod; int cr; int fec; int l1_post_size; int l1_post_info_size; int pp; int tx_id_availability; int cell_id; int network_id; int sys_id; int num_frames; int num_symbols; int regen; int post_ext; int num_rf_freqs; int rf_idx; int t2_version; int l1_post_scrambled; int t2_base_lite; int crc32; int mixed; void* fft_mode; } ;
typedef enum cxd2880_dvbt2_version { ____Placeholder_cxd2880_dvbt2_version } cxd2880_dvbt2_version ;
typedef enum cxd2880_dvbt2_s1 { ____Placeholder_cxd2880_dvbt2_s1 } cxd2880_dvbt2_s1 ;
typedef enum cxd2880_dvbt2_profile { ____Placeholder_cxd2880_dvbt2_profile } cxd2880_dvbt2_profile ;
typedef enum cxd2880_dvbt2_pp { ____Placeholder_cxd2880_dvbt2_pp } cxd2880_dvbt2_pp ;
typedef enum cxd2880_dvbt2_papr { ____Placeholder_cxd2880_dvbt2_papr } cxd2880_dvbt2_papr ;
typedef enum cxd2880_dvbt2_l1pre_type { ____Placeholder_cxd2880_dvbt2_l1pre_type } cxd2880_dvbt2_l1pre_type ;
typedef enum cxd2880_dvbt2_l1post_fec_type { ____Placeholder_cxd2880_dvbt2_l1post_fec_type } cxd2880_dvbt2_l1post_fec_type ;
typedef enum cxd2880_dvbt2_l1post_cr { ____Placeholder_cxd2880_dvbt2_l1post_cr } cxd2880_dvbt2_l1post_cr ;
typedef enum cxd2880_dvbt2_l1post_constell { ____Placeholder_cxd2880_dvbt2_l1post_constell } cxd2880_dvbt2_l1post_constell ;
typedef enum cxd2880_dvbt2_guard { ____Placeholder_cxd2880_dvbt2_guard } cxd2880_dvbt2_guard ;
typedef int data ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,int*,int*,int*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*,int*,int*) ;
 int FUNC_3 (struct cxd2880_tnrdmd*) ;
 int FUNC_4 (struct cxd2880_tnrdmd*) ;
 int FUNC_5 (TYPE_1__*,int ,int,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_7(struct cxd2880_tnrdmd *VAR_15,
        struct cxd2880_dvbt2_l1pre
        *VAR_16)
{
 u8 VAR_17[37];
 u8 VAR_18 = 0;
 u8 VAR_19 = 0;
 u8 VAR_20 = 0;
 u8 VAR_21 = 0;
 enum cxd2880_dvbt2_profile VAR_22;
 int VAR_23;

 if (!VAR_15 || !VAR_16)
  return -VAR_14;

 if (VAR_15->diver_mode == VAR_11)
  return -VAR_14;

 if (VAR_15->state != VAR_12)
  return -VAR_14;

 if (VAR_15->sys != VAR_0)
  return -VAR_14;

 VAR_23 = FUNC_3(VAR_15);
 if (VAR_23)
  return VAR_23;

 VAR_23 =
     FUNC_1(VAR_15, &VAR_18,
            &VAR_19,
            &VAR_20);
 if (VAR_23) {
  FUNC_4(VAR_15);
  return VAR_23;
 }

 if (VAR_18 < 5) {
  if (VAR_15->diver_mode ==
      VAR_10) {
   VAR_23 =
       FUNC_2
       (VAR_15, &VAR_18, &VAR_20);
   if (VAR_23) {
    FUNC_4(VAR_15);
    return VAR_23;
   }

   if (VAR_18 < 5) {
    FUNC_4(VAR_15);
    return -VAR_13;
   }
  } else {
   FUNC_4(VAR_15);
   return -VAR_13;
  }
 }

 VAR_23 = FUNC_0(VAR_15, &VAR_22);
 if (VAR_23) {
  FUNC_4(VAR_15);
  return VAR_23;
 }

 VAR_23 = VAR_15->io->write_reg(VAR_15->io,
         VAR_9,
         0x00, 0x0b);
 if (VAR_23) {
  FUNC_4(VAR_15);
  return VAR_23;
 }

 VAR_23 = VAR_15->io->read_regs(VAR_15->io,
         VAR_9,
         0x61, VAR_17, sizeof(VAR_17));
 if (VAR_23) {
  FUNC_4(VAR_15);
  return VAR_23;
 }
 FUNC_4(VAR_15);

 VAR_16->type = (enum cxd2880_dvbt2_l1pre_type)VAR_17[0];
 VAR_16->bw_ext = VAR_17[1] & 0x01;
 VAR_16->s1 = (enum cxd2880_dvbt2_s1)(VAR_17[2] & 0x07);
 VAR_16->s2 = VAR_17[3] & 0x0f;
 VAR_16->l1_rep = VAR_17[4] & 0x01;
 VAR_16->gi = (enum cxd2880_dvbt2_guard)(VAR_17[5] & 0x07);
 VAR_16->papr = (enum cxd2880_dvbt2_papr)(VAR_17[6] & 0x0f);
 VAR_16->mod =
     (enum cxd2880_dvbt2_l1post_constell)(VAR_17[7] & 0x0f);
 VAR_16->cr = (enum cxd2880_dvbt2_l1post_cr)(VAR_17[8] & 0x03);
 VAR_16->fec =
     (enum cxd2880_dvbt2_l1post_fec_type)(VAR_17[9] & 0x03);
 VAR_16->l1_post_size = (VAR_17[10] & 0x03) << 16;
 VAR_16->l1_post_size |= (VAR_17[11]) << 8;
 VAR_16->l1_post_size |= (VAR_17[12]);
 VAR_16->l1_post_info_size = (VAR_17[13] & 0x03) << 16;
 VAR_16->l1_post_info_size |= (VAR_17[14]) << 8;
 VAR_16->l1_post_info_size |= (VAR_17[15]);
 VAR_16->pp = (enum cxd2880_dvbt2_pp)(VAR_17[16] & 0x0f);
 VAR_16->tx_id_availability = VAR_17[17];
 VAR_16->cell_id = (VAR_17[18] << 8);
 VAR_16->cell_id |= (VAR_17[19]);
 VAR_16->network_id = (VAR_17[20] << 8);
 VAR_16->network_id |= (VAR_17[21]);
 VAR_16->sys_id = (VAR_17[22] << 8);
 VAR_16->sys_id |= (VAR_17[23]);
 VAR_16->num_frames = VAR_17[24];
 VAR_16->num_symbols = (VAR_17[25] & 0x0f) << 8;
 VAR_16->num_symbols |= VAR_17[26];
 VAR_16->regen = VAR_17[27] & 0x07;
 VAR_16->post_ext = VAR_17[28] & 0x01;
 VAR_16->num_rf_freqs = VAR_17[29] & 0x07;
 VAR_16->rf_idx = VAR_17[30] & 0x07;
 VAR_21 = (VAR_17[31] & 0x03) << 2;
 VAR_21 |= (VAR_17[32] & 0xc0) >> 6;
 VAR_16->t2_version = (enum cxd2880_dvbt2_version)VAR_21;
 VAR_16->l1_post_scrambled = (VAR_17[32] & 0x20) >> 5;
 VAR_16->t2_base_lite = (VAR_17[32] & 0x10) >> 4;
 VAR_16->crc32 = (VAR_17[33] << 24);
 VAR_16->crc32 |= (VAR_17[34] << 16);
 VAR_16->crc32 |= (VAR_17[35] << 8);
 VAR_16->crc32 |= VAR_17[36];

 if (VAR_22 == VAR_7) {
  switch ((VAR_16->s2 >> 1)) {
  case 140:
   VAR_16->fft_mode = VAR_2;
   break;
  case 139:
   VAR_16->fft_mode = VAR_3;
   break;
  case 136:
   VAR_16->fft_mode = VAR_5;
   break;
  case 135:
  case 134:
   VAR_16->fft_mode = VAR_6;
   break;
  case 141:
   VAR_16->fft_mode = VAR_1;
   break;
  case 138:
  case 137:
   VAR_16->fft_mode = VAR_4;
   break;
  default:
   return -VAR_13;
  }
 } else if (VAR_22 == VAR_8) {
  switch ((VAR_16->s2 >> 1)) {
  case 131:
   VAR_16->fft_mode = VAR_3;
   break;
  case 130:
   VAR_16->fft_mode = VAR_5;
   break;
  case 129:
  case 128:
   VAR_16->fft_mode = VAR_6;
   break;
  case 133:
  case 132:
   VAR_16->fft_mode = VAR_1;
   break;
  default:
   return -VAR_13;
  }
 } else {
  return -VAR_13;
 }

 VAR_16->mixed = VAR_16->s2 & 0x01;

 return VAR_23;
}
