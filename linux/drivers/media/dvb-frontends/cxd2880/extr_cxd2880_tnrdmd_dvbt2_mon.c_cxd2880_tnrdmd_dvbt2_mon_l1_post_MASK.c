
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
struct cxd2880_dvbt2_l1post {int sub_slices_per_frame; int num_plps; int num_aux; int aux_cfg_rfu; int rf_idx; int freq; int fef_type; int fef_length; int fef_intvl; } ;
typedef int data ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_2(struct cxd2880_tnrdmd
         *VAR_6,
         struct cxd2880_dvbt2_l1post
         *VAR_7)
{
 u8 VAR_8[16];
 int VAR_9;

 if (!VAR_6 || !VAR_7)
  return -VAR_5;

 if (VAR_6->diver_mode == VAR_2)
  return -VAR_5;

 if (VAR_6->state != VAR_3)
  return -VAR_5;

 if (VAR_6->sys != VAR_0)
  return -VAR_5;

 VAR_9 = VAR_6->io->write_reg(VAR_6->io,
         VAR_1,
         0x00, 0x0b);
 if (VAR_9)
  return VAR_9;

 VAR_9 = VAR_6->io->read_regs(VAR_6->io,
         VAR_1,
         0x86, VAR_8, sizeof(VAR_8));
 if (VAR_9)
  return VAR_9;

 if (!(VAR_8[0] & 0x01))
  return -VAR_4;

 VAR_7->sub_slices_per_frame = (VAR_8[1] & 0x7f) << 8;
 VAR_7->sub_slices_per_frame |= VAR_8[2];
 VAR_7->num_plps = VAR_8[3];
 VAR_7->num_aux = VAR_8[4] & 0x0f;
 VAR_7->aux_cfg_rfu = VAR_8[5];
 VAR_7->rf_idx = VAR_8[6] & 0x07;
 VAR_7->freq = VAR_8[7] << 24;
 VAR_7->freq |= VAR_8[8] << 16;
 VAR_7->freq |= VAR_8[9] << 8;
 VAR_7->freq |= VAR_8[10];
 VAR_7->fef_type = VAR_8[11] & 0x0f;
 VAR_7->fef_length = VAR_8[12] << 16;
 VAR_7->fef_length |= VAR_8[13] << 8;
 VAR_7->fef_length |= VAR_8[14];
 VAR_7->fef_intvl = VAR_8[15];

 return 0;
}
