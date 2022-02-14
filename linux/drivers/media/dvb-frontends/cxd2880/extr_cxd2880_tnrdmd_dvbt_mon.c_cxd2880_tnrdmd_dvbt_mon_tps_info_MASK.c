
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ state; scalar_t__ sys; scalar_t__ diver_mode; TYPE_1__* io; struct cxd2880_tnrdmd* diver_sub; } ;
struct cxd2880_dvbt_tpsinfo {int constellation; int hierarchy; int rate_hp; int rate_lp; int guard; int mode; int fnum; int length_indicator; int cell_id; int reserved_even; int reserved_odd; int cell_id_ok; } ;
typedef enum cxd2880_dvbt_mode { ____Placeholder_cxd2880_dvbt_mode } cxd2880_dvbt_mode ;
typedef enum cxd2880_dvbt_hierarchy { ____Placeholder_cxd2880_dvbt_hierarchy } cxd2880_dvbt_hierarchy ;
typedef enum cxd2880_dvbt_guard { ____Placeholder_cxd2880_dvbt_guard } cxd2880_dvbt_guard ;
typedef enum cxd2880_dvbt_constellation { ____Placeholder_cxd2880_dvbt_constellation } cxd2880_dvbt_constellation ;
typedef enum cxd2880_dvbt_coderate { ____Placeholder_cxd2880_dvbt_coderate } cxd2880_dvbt_coderate ;
struct TYPE_5__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxd2880_tnrdmd*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_7(struct cxd2880_tnrdmd
         *VAR_5,
         struct cxd2880_dvbt_tpsinfo
         *VAR_6)
{
 u8 VAR_7[7];
 u8 VAR_8 = 0;
 int VAR_9;

 if (!VAR_5 || !VAR_6)
  return -VAR_4;

 if (VAR_5->state != VAR_3)
  return -VAR_4;

 if (VAR_5->sys != VAR_0)
  return -VAR_4;

 VAR_9 = FUNC_1(VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_5);
 if (VAR_9) {
  FUNC_2(VAR_5);

  if (VAR_5->diver_mode == VAR_2)
   VAR_9 =
       FUNC_7(VAR_5->diver_sub,
            VAR_6);

  return VAR_9;
 }

 VAR_9 = VAR_5->io->write_reg(VAR_5->io,
         VAR_1,
         0x00, 0x0d);
 if (VAR_9) {
  FUNC_2(VAR_5);
  return VAR_9;
 }

 VAR_9 = VAR_5->io->read_regs(VAR_5->io,
         VAR_1,
         0x29, VAR_7, 7);
 if (VAR_9) {
  FUNC_2(VAR_5);
  return VAR_9;
 }

 VAR_9 = VAR_5->io->write_reg(VAR_5->io,
         VAR_1,
         0x00, 0x11);
 if (VAR_9) {
  FUNC_2(VAR_5);
  return VAR_9;
 }

 VAR_9 = VAR_5->io->read_regs(VAR_5->io,
         VAR_1,
         0xd5, &VAR_8, 1);
 if (VAR_9) {
  FUNC_2(VAR_5);
  return VAR_9;
 }

 FUNC_2(VAR_5);

 VAR_6->constellation =
     (enum cxd2880_dvbt_constellation)((VAR_7[0] >> 6) & 0x03);
 VAR_6->hierarchy = (enum cxd2880_dvbt_hierarchy)((VAR_7[0] >> 3) & 0x07);
 VAR_6->rate_hp = (enum cxd2880_dvbt_coderate)(VAR_7[0] & 0x07);
 VAR_6->rate_lp = (enum cxd2880_dvbt_coderate)((VAR_7[1] >> 5) & 0x07);
 VAR_6->guard = (enum cxd2880_dvbt_guard)((VAR_7[1] >> 3) & 0x03);
 VAR_6->mode = (enum cxd2880_dvbt_mode)((VAR_7[1] >> 1) & 0x03);
 VAR_6->fnum = (VAR_7[2] >> 6) & 0x03;
 VAR_6->length_indicator = VAR_7[2] & 0x3f;
 VAR_6->cell_id = (VAR_7[3] << 8) | VAR_7[4];
 VAR_6->reserved_even = VAR_7[5] & 0x3f;
 VAR_6->reserved_odd = VAR_7[6] & 0x3f;

 VAR_6->cell_id_ok = VAR_8 & 0x01;

 return VAR_9;
}
