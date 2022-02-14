
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ state; scalar_t__ sys; scalar_t__ diver_mode; TYPE_1__* io; struct cxd2880_tnrdmd* diver_sub; } ;
typedef enum cxd2880_dvbt_mode { ____Placeholder_cxd2880_dvbt_mode } cxd2880_dvbt_mode ;
typedef enum cxd2880_dvbt_guard { ____Placeholder_cxd2880_dvbt_guard } cxd2880_dvbt_guard ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


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

int FUNC_5(struct cxd2880_tnrdmd
           *VAR_5,
           enum cxd2880_dvbt_mode
           *VAR_6,
           enum cxd2880_dvbt_guard
           *VAR_7)
{
 u8 VAR_8 = 0x00;
 int VAR_9;

 if (!VAR_5 || !VAR_6 || !VAR_7)
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
       FUNC_5(VAR_5->diver_sub,
              VAR_6, VAR_7);

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
         0x1b, &VAR_8, 1);
 if (VAR_9) {
  FUNC_2(VAR_5);
  return VAR_9;
 }

 FUNC_2(VAR_5);

 *VAR_6 = (enum cxd2880_dvbt_mode)((VAR_8 >> 2) & 0x03);
 *VAR_7 = (enum cxd2880_dvbt_guard)(VAR_8 & 0x03);

 return VAR_9;
}
