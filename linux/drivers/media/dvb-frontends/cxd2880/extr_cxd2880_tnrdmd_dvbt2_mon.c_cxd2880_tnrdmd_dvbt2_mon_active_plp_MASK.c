
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
struct cxd2880_dvbt2_plp {int id; int type; int payload; int ff; int first_rf_idx; int first_frm_idx; int group_id; int plp_cr; int constell; int rot; int fec; int num_blocks_max; int frm_int; int til_len; int til_type; int in_band_a_flag; int rsvd; int in_band_b_flag; int plp_mode; int static_flag; int static_padding_flag; } ;
typedef enum cxd2880_dvbt2_plp_type { ____Placeholder_cxd2880_dvbt2_plp_type } cxd2880_dvbt2_plp_type ;
typedef enum cxd2880_dvbt2_plp_payload { ____Placeholder_cxd2880_dvbt2_plp_payload } cxd2880_dvbt2_plp_payload ;
typedef enum cxd2880_dvbt2_plp_mode { ____Placeholder_cxd2880_dvbt2_plp_mode } cxd2880_dvbt2_plp_mode ;
typedef enum cxd2880_dvbt2_plp_fec { ____Placeholder_cxd2880_dvbt2_plp_fec } cxd2880_dvbt2_plp_fec ;
typedef enum cxd2880_dvbt2_plp_constell { ____Placeholder_cxd2880_dvbt2_plp_constell } cxd2880_dvbt2_plp_constell ;
typedef enum cxd2880_dvbt2_plp_code_rate { ____Placeholder_cxd2880_dvbt2_plp_code_rate } cxd2880_dvbt2_plp_code_rate ;
typedef enum cxd2880_dvbt2_plp_btype { ____Placeholder_cxd2880_dvbt2_plp_btype } cxd2880_dvbt2_plp_btype ;
typedef int data ;
struct TYPE_4__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


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

int FUNC_5(struct cxd2880_tnrdmd
     *VAR_7,
     enum
     cxd2880_dvbt2_plp_btype
     VAR_8,
     struct cxd2880_dvbt2_plp
     *VAR_9)
{
 u8 VAR_10[20];
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 int VAR_14;

 if (!VAR_7 || !VAR_9)
  return -VAR_6;

 if (VAR_7->diver_mode == VAR_3)
  return -VAR_6;

 if (VAR_7->state != VAR_4)
  return -VAR_6;

 if (VAR_7->sys != VAR_0)
  return -VAR_6;

 VAR_14 = FUNC_0(VAR_7);
 if (VAR_14)
  return VAR_14;

 VAR_14 = VAR_7->io->write_reg(VAR_7->io,
         VAR_2,
         0x00, 0x0b);
 if (VAR_14) {
  FUNC_1(VAR_7);
  return VAR_14;
 }

 VAR_14 = VAR_7->io->read_regs(VAR_7->io,
         VAR_2,
         0x86, &VAR_13, 1);
 if (VAR_14) {
  FUNC_1(VAR_7);
  return VAR_14;
 }

 if (!VAR_13) {
  FUNC_1(VAR_7);
  return -VAR_5;
 }

 if (VAR_8 == VAR_1)
  VAR_11 = 0xa9;
 else
  VAR_11 = 0x96;

 VAR_14 = VAR_7->io->read_regs(VAR_7->io,
         VAR_2,
         VAR_11, VAR_10, sizeof(VAR_10));
 if (VAR_14) {
  FUNC_1(VAR_7);
  return VAR_14;
 }

 FUNC_1(VAR_7);

 if (VAR_8 == VAR_1 && !VAR_10[13])
  return -VAR_5;

 VAR_9->id = VAR_10[VAR_12++];
 VAR_9->type =
     (enum cxd2880_dvbt2_plp_type)(VAR_10[VAR_12++] & 0x07);
 VAR_9->payload =
     (enum cxd2880_dvbt2_plp_payload)(VAR_10[VAR_12++] & 0x1f);
 VAR_9->ff = VAR_10[VAR_12++] & 0x01;
 VAR_9->first_rf_idx = VAR_10[VAR_12++] & 0x07;
 VAR_9->first_frm_idx = VAR_10[VAR_12++];
 VAR_9->group_id = VAR_10[VAR_12++];
 VAR_9->plp_cr =
     (enum cxd2880_dvbt2_plp_code_rate)(VAR_10[VAR_12++] & 0x07);
 VAR_9->constell =
     (enum cxd2880_dvbt2_plp_constell)(VAR_10[VAR_12++] & 0x07);
 VAR_9->rot = VAR_10[VAR_12++] & 0x01;
 VAR_9->fec =
     (enum cxd2880_dvbt2_plp_fec)(VAR_10[VAR_12++] & 0x03);
 VAR_9->num_blocks_max = (VAR_10[VAR_12++] & 0x03) << 8;
 VAR_9->num_blocks_max |= VAR_10[VAR_12++];
 VAR_9->frm_int = VAR_10[VAR_12++];
 VAR_9->til_len = VAR_10[VAR_12++];
 VAR_9->til_type = VAR_10[VAR_12++] & 0x01;

 VAR_9->in_band_a_flag = VAR_10[VAR_12++] & 0x01;
 VAR_9->rsvd = VAR_10[VAR_12++] << 8;
 VAR_9->rsvd |= VAR_10[VAR_12++];

 VAR_9->in_band_b_flag =
     (VAR_9->rsvd & 0x8000) >> 15;
 VAR_9->plp_mode =
     (enum cxd2880_dvbt2_plp_mode)((VAR_9->rsvd & 0x000c) >> 2);
 VAR_9->static_flag = (VAR_9->rsvd & 0x0002) >> 1;
 VAR_9->static_padding_flag = VAR_9->rsvd & 0x0001;
 VAR_9->rsvd = (VAR_9->rsvd & 0x7ff0) >> 4;

 return 0;
}
