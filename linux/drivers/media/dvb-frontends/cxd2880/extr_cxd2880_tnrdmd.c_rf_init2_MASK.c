
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ chip_id; TYPE_1__* io; } ;
struct TYPE_5__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* write_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct cxd2880_tnrdmd *VAR_6)
{
 u8 VAR_7[5] = { 0 };
 int VAR_8;

 if (!VAR_6)
  return -VAR_3;

 VAR_8 = VAR_6->io->write_reg(VAR_6->io,
         VAR_1,
         0x00, 0x10);
 if (VAR_8)
  return VAR_8;
 VAR_7[0] = 0x40;
 VAR_7[1] = 0x40;
 VAR_8 = VAR_6->io->write_regs(VAR_6->io,
          VAR_1,
          0xea, VAR_7, 2);
 if (VAR_8)
  return VAR_8;

 FUNC_5(1000, 2000);

 VAR_7[0] = 0x00;
 if (VAR_6->chip_id == VAR_2)
  VAR_7[1] = 0x00;
 else
  VAR_7[1] = 0x01;
 VAR_7[2] = 0x01;
 VAR_7[3] = 0x03;
 VAR_8 = VAR_6->io->write_regs(VAR_6->io,
          VAR_1,
          0x30, VAR_7, 4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_6->io,
       VAR_1,
       VAR_4,
       FUNC_0(VAR_4));
 if (VAR_8)
  return VAR_8;

 return FUNC_1(VAR_6->io,
        VAR_0,
        VAR_5,
        FUNC_0(VAR_5));
}
