
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_2(struct cxd2880_tnrdmd
          *VAR_5, u8 *VAR_6,
          u8 *VAR_7,
          u8 *VAR_8)
{
 u8 VAR_9 = 0x00;
 int VAR_10;

 if (!VAR_5 || !VAR_6 || !VAR_7 || !VAR_8)
  return -VAR_4;

 if (VAR_5->state != VAR_2)
  return -VAR_4;
 if (VAR_5->sys != VAR_0)
  return -VAR_4;

 VAR_10 = VAR_5->io->write_reg(VAR_5->io,
         VAR_1,
         0x00, 0x0d);
 if (VAR_10)
  return VAR_10;

 VAR_10 = VAR_5->io->read_regs(VAR_5->io,
         VAR_1,
         0x10, &VAR_9, 1);
 if (VAR_10)
  return VAR_10;

 *VAR_8 = (VAR_9 & 0x10) ? 1 : 0;
 *VAR_6 = VAR_9 & 0x07;
 *VAR_7 = (VAR_9 & 0x20) ? 1 : 0;

 if (*VAR_6 == 0x07)
  return -VAR_3;

 return VAR_10;
}
