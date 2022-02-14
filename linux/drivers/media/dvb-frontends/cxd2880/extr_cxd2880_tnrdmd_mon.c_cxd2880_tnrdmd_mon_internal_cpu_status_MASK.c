
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct cxd2880_tnrdmd {TYPE_1__* io; } ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_2(struct cxd2880_tnrdmd
        *VAR_2, u16 *VAR_3)
{
 u8 VAR_4[2] = { 0 };
 int VAR_5;

 if (!VAR_2 || !VAR_3)
  return -VAR_1;

 VAR_5 = VAR_2->io->write_reg(VAR_2->io,
         VAR_0,
         0x00, 0x1a);
 if (VAR_5)
  return VAR_5;
 VAR_5 = VAR_2->io->read_regs(VAR_2->io,
         VAR_0,
         0x15, VAR_4, 2);
 if (VAR_5)
  return VAR_5;

 *VAR_3 = (VAR_4[0] << 8) | VAR_4[1];

 return 0;
}
