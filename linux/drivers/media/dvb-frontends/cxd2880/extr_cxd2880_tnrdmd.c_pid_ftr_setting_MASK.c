
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd_pid_ftr_cfg {TYPE_1__* pid_cfg; scalar_t__ is_negative; } ;
struct cxd2880_tnrdmd {TYPE_2__* io; } ;
struct TYPE_6__ {int (* write_reg ) (TYPE_2__*,int ,int,int) ;int (* write_regs ) (TYPE_2__*,int ,int,int*,int) ;} ;
struct TYPE_5__ {int pid; scalar_t__ is_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int,int) ;
 int FUNC_1 (TYPE_2__*,int ,int,int) ;
 int FUNC_2 (TYPE_2__*,int ,int,int*,int) ;

__attribute__((used)) static int FUNC_3(struct cxd2880_tnrdmd *VAR_2,
      struct cxd2880_tnrdmd_pid_ftr_cfg
      *VAR_3)
{
 int VAR_4;
 int VAR_5;
 u8 VAR_6[65];

 if (!VAR_2)
  return -VAR_1;

 VAR_5 = VAR_2->io->write_reg(VAR_2->io,
         VAR_0,
         0x00, 0x00);
 if (VAR_5)
  return VAR_5;

 if (!VAR_3)
  return VAR_2->io->write_reg(VAR_2->io,
           VAR_0,
           0x50, 0x02);

 VAR_6[0] = VAR_3->is_negative ? 0x01 : 0x00;

 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  if (VAR_3->pid_cfg[VAR_4].is_en) {
   VAR_6[1 + (VAR_4 * 2)] = (VAR_3->pid_cfg[VAR_4].pid >> 8) | 0x20;
   VAR_6[2 + (VAR_4 * 2)] = VAR_3->pid_cfg[VAR_4].pid & 0xff;
  } else {
   VAR_6[1 + (VAR_4 * 2)] = 0x00;
   VAR_6[2 + (VAR_4 * 2)] = 0x00;
  }
 }

 return VAR_2->io->write_regs(VAR_2->io,
           VAR_0,
           0x50, VAR_6, 65);
}
