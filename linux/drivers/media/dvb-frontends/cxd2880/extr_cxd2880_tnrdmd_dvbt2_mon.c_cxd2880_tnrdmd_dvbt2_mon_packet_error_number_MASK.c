
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
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

int FUNC_2(struct
       cxd2880_tnrdmd
       *VAR_6,
       u32 *VAR_7)
{
 int VAR_8;
 u8 VAR_9[3];

 if (!VAR_6 || !VAR_7)
  return -VAR_5;

 if (VAR_6->diver_mode == VAR_2)
  return -VAR_5;

 if (VAR_6->state != VAR_3)
  return -VAR_5;

 if (VAR_6->sys != VAR_0)
  return -VAR_5;

 VAR_8 = VAR_6->io->write_reg(VAR_6->io,
         VAR_1,
         0x00, 0x0b);
 if (VAR_8)
  return VAR_8;

 VAR_8 = VAR_6->io->read_regs(VAR_6->io,
         VAR_1,
         0x39, VAR_9, sizeof(VAR_9));
 if (VAR_8)
  return VAR_8;

 if (!(VAR_9[0] & 0x01))
  return -VAR_4;

 *VAR_7 = ((VAR_9[1] << 8) | VAR_9[2]);

 return VAR_8;
}
