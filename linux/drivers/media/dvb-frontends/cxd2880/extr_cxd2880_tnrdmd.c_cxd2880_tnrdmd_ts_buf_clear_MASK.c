
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; TYPE_1__* io; } ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* write_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_2(struct cxd2880_tnrdmd *VAR_5,
    u8 VAR_6,
    u8 VAR_7,
    u8 VAR_8)
{
 int VAR_9;
 u8 VAR_10[2] = { 0 };

 if (!VAR_5)
  return -VAR_4;

 if (VAR_5->diver_mode == VAR_1)
  return -VAR_4;

 if (VAR_5->state != VAR_3 &&
     VAR_5->state != VAR_2)
  return -VAR_4;

 VAR_9 = VAR_5->io->write_reg(VAR_5->io,
         VAR_0,
         0x00, 0x00);
 if (VAR_9)
  return VAR_9;

 VAR_10[0] = VAR_6 ? 0x02 : 0x00;
 VAR_10[0] |= VAR_7 ? 0x01 : 0x00;
 VAR_10[1] = VAR_8 ? 0x01 : 0x00;

 return VAR_5->io->write_regs(VAR_5->io,
           VAR_0,
           0x9f, VAR_10, 2);
}
