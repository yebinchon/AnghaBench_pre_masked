
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
struct TYPE_5__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int*,int) ;

__attribute__((used)) static int FUNC_4(struct cxd2880_tnrdmd *VAR_6,
      u32 *VAR_7,
      u32 *VAR_8)
{
 u8 VAR_9[3];
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 int VAR_12;

 if (!VAR_6 || !VAR_7 || !VAR_8)
  return -VAR_5;

 if (VAR_6->diver_mode == VAR_2)
  return -VAR_5;

 if (VAR_6->state != VAR_3)
  return -VAR_5;

 if (VAR_6->sys != VAR_0)
  return -VAR_5;

 VAR_12 = VAR_6->io->write_reg(VAR_6->io,
        VAR_1,
        0x00, 0x0d);
 if (VAR_12)
  return VAR_12;

 VAR_12 = VAR_6->io->read_regs(VAR_6->io,
        VAR_1,
        0x15, VAR_9, 3);
 if (VAR_12)
  return VAR_12;

 if ((VAR_9[0] & 0x40) == 0)
  return -VAR_4;

 *VAR_7 = ((VAR_9[0] & 0x3f) << 16) | (VAR_9[1] << 8) | VAR_9[2];

 VAR_12 = VAR_6->io->write_reg(VAR_6->io,
        VAR_1,
        0x00, 0x10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = VAR_6->io->read_regs(VAR_6->io,
        VAR_1,
        0x60, VAR_9, 1);
 if (VAR_12)
  return VAR_12;

 VAR_11 = (VAR_9[0] & 0x1f);

 if (VAR_11 <= 11 && (VAR_10 > (1U << VAR_11) * 204 * 8))
  return -VAR_4;

 *VAR_8 = (1U << VAR_11) * 204 * 8;

 return 0;
}
