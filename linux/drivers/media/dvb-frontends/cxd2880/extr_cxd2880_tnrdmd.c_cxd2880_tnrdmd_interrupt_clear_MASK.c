
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct cxd2880_tnrdmd {scalar_t__ state; TYPE_1__* io; } ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* write_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_2(struct cxd2880_tnrdmd *VAR_4,
       u16 VAR_5)
{
 int VAR_6;
 u8 VAR_7[2] = { 0 };

 if (!VAR_4)
  return -VAR_3;

 if (VAR_4->state != VAR_2 &&
     VAR_4->state != VAR_1)
  return -VAR_3;

 VAR_6 = VAR_4->io->write_reg(VAR_4->io,
         VAR_0,
         0x00, 0x00);
 if (VAR_6)
  return VAR_6;

 VAR_7[0] = (VAR_5 >> 8) & 0xff;
 VAR_7[1] = VAR_5 & 0xff;

 return VAR_4->io->write_regs(VAR_4->io,
           VAR_0,
           0x3c, VAR_7, 2);
}
