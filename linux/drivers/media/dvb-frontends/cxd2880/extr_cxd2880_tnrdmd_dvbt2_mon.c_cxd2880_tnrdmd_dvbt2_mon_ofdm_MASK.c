
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ state; scalar_t__ sys; scalar_t__ diver_mode; TYPE_1__* io; struct cxd2880_tnrdmd* diver_sub; } ;
struct cxd2880_dvbt2_ofdm {int mixed; int is_miso; int mode; int gi; int pp; int bw_ext; int papr; int num_symbols; } ;
typedef enum cxd2880_dvbt2_pp { ____Placeholder_cxd2880_dvbt2_pp } cxd2880_dvbt2_pp ;
typedef enum cxd2880_dvbt2_papr { ____Placeholder_cxd2880_dvbt2_papr } cxd2880_dvbt2_papr ;
typedef enum cxd2880_dvbt2_mode { ____Placeholder_cxd2880_dvbt2_mode } cxd2880_dvbt2_mode ;
typedef enum cxd2880_dvbt2_guard { ____Placeholder_cxd2880_dvbt2_guard } cxd2880_dvbt2_guard ;
typedef int data ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int*,int*,int*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_5(struct cxd2880_tnrdmd *VAR_6,
      struct cxd2880_dvbt2_ofdm *VAR_7)
{
 u8 VAR_8[5];
 u8 VAR_9 = 0;
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;
 int VAR_12;

 if (!VAR_6 || !VAR_7)
  return -VAR_5;

 if (VAR_6->state != VAR_3)
  return -VAR_5;

 if (VAR_6->sys != VAR_0)
  return -VAR_5;

 VAR_12 = FUNC_1(VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_12 =
     FUNC_0(VAR_6, &VAR_9,
            &VAR_10,
            &VAR_11);
 if (VAR_12) {
  FUNC_2(VAR_6);
  return VAR_12;
 }

 if (VAR_9 != 6) {
  FUNC_2(VAR_6);

  VAR_12 = -VAR_4;

  if (VAR_6->diver_mode ==
      VAR_2)
   VAR_12 =
       FUNC_5(VAR_6->diver_sub,
         VAR_7);

  return VAR_12;
 }

 VAR_12 = VAR_6->io->write_reg(VAR_6->io,
         VAR_1,
         0x00, 0x0b);
 if (VAR_12) {
  FUNC_2(VAR_6);
  return VAR_12;
 }

 VAR_12 = VAR_6->io->read_regs(VAR_6->io,
         VAR_1,
         0x1d, VAR_8, sizeof(VAR_8));
 if (VAR_12) {
  FUNC_2(VAR_6);
  return VAR_12;
 }

 FUNC_2(VAR_6);

 VAR_7->mixed = ((VAR_8[0] & 0x20) ? 1 : 0);
 VAR_7->is_miso = ((VAR_8[0] & 0x10) >> 4);
 VAR_7->mode = (enum cxd2880_dvbt2_mode)(VAR_8[0] & 0x07);
 VAR_7->gi = (enum cxd2880_dvbt2_guard)((VAR_8[1] & 0x70) >> 4);
 VAR_7->pp = (enum cxd2880_dvbt2_pp)(VAR_8[1] & 0x07);
 VAR_7->bw_ext = (VAR_8[2] & 0x10) >> 4;
 VAR_7->papr = (enum cxd2880_dvbt2_papr)(VAR_8[2] & 0x0f);
 VAR_7->num_symbols = (VAR_8[3] << 8) | VAR_8[4];

 return 0;
}
