
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
typedef enum cxd2880_dvbt2_plp_constell { ____Placeholder_cxd2880_dvbt2_plp_constell } cxd2880_dvbt2_plp_constell ;
typedef enum cxd2880_dvbt2_plp_btype { ____Placeholder_cxd2880_dvbt2_plp_btype } cxd2880_dvbt2_plp_btype ;
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
 int FUNC_5 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_7(struct cxd2880_tnrdmd *VAR_7,
     enum cxd2880_dvbt2_plp_btype VAR_8,
     enum cxd2880_dvbt2_plp_constell *VAR_9)
{
 u8 VAR_10;
 u8 VAR_11 = 0;
 int VAR_12;

 if (!VAR_7 || !VAR_9)
  return -VAR_6;

 if (VAR_7->diver_mode == VAR_3)
  return -VAR_6;

 if (VAR_7->state != VAR_4)
  return -VAR_6;

 if (VAR_7->sys != VAR_0)
  return -VAR_6;

 VAR_12 = FUNC_0(VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_12 = VAR_7->io->write_reg(VAR_7->io,
         VAR_2,
         0x00, 0x0b);
 if (VAR_12) {
  FUNC_1(VAR_7);
  return VAR_12;
 }

 VAR_12 = VAR_7->io->read_regs(VAR_7->io,
         VAR_2,
         0x86, &VAR_11, 1);
 if (VAR_12) {
  FUNC_1(VAR_7);
  return VAR_12;
 }

 if (!(VAR_11 & 0x01)) {
  FUNC_1(VAR_7);
  return -VAR_5;
 }

 if (VAR_8 == VAR_1) {
  VAR_12 = VAR_7->io->read_regs(VAR_7->io,
          VAR_2,
          0xb6, &VAR_10, 1);
  if (VAR_12) {
   FUNC_1(VAR_7);
   return VAR_12;
  }

  if (VAR_10 == 0) {
   FUNC_1(VAR_7);
   return -VAR_5;
  }

  VAR_12 = VAR_7->io->read_regs(VAR_7->io,
          VAR_2,
          0xb1, &VAR_10, 1);
  if (VAR_12) {
   FUNC_1(VAR_7);
   return VAR_12;
  }
 } else {
  VAR_12 = VAR_7->io->read_regs(VAR_7->io,
          VAR_2,
          0x9e, &VAR_10, 1);
  if (VAR_12) {
   FUNC_1(VAR_7);
   return VAR_12;
  }
 }

 FUNC_1(VAR_7);

 *VAR_9 = (enum cxd2880_dvbt2_plp_constell)(VAR_10 & 0x07);

 return VAR_12;
}
