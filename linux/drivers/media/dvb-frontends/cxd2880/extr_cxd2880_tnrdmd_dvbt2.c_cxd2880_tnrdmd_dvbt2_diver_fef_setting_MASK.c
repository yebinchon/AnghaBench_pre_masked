
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; TYPE_1__* io; } ;
struct cxd2880_dvbt2_ofdm {int mixed; } ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* write_regs ) (TYPE_1__*,int ,int,int const*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,struct cxd2880_dvbt2_ofdm*) ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int const*,int) ;

int FUNC_3(struct cxd2880_tnrdmd
        *VAR_5)
{
 struct cxd2880_dvbt2_ofdm VAR_6;
 static const u8 VAR_7[] = { 0, 8, 0, 16, 0, 32, 0, 64, 0, 128, 1, 0};
 int VAR_8;

 if (!VAR_5)
  return -VAR_4;

 if (VAR_5->diver_mode == VAR_2)
  return -VAR_4;

 if (VAR_5->state != VAR_3)
  return -VAR_4;

 if (VAR_5->diver_mode == VAR_1)
  return 0;

 VAR_8 = FUNC_0(VAR_5, &VAR_6);
 if (VAR_8)
  return VAR_8;

 if (!VAR_6.mixed)
  return 0;

 VAR_8 = VAR_5->io->write_reg(VAR_5->io,
         VAR_0,
         0x00, 0x1d);
 if (VAR_8)
  return VAR_8;

 return VAR_5->io->write_regs(VAR_5->io,
           VAR_0,
           0x47, VAR_7, 12);
}
