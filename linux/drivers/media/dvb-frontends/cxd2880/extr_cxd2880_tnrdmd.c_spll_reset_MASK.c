
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {TYPE_1__* io; } ;
typedef enum cxd2880_tnrdmd_clockmode { ____Placeholder_cxd2880_tnrdmd_clockmode } cxd2880_tnrdmd_clockmode ;
typedef int data ;
struct TYPE_8__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;int (* write_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (int*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_7 (TYPE_1__*,int ,int,int) ;
 int FUNC_8 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct cxd2880_tnrdmd *VAR_8,
        enum cxd2880_tnrdmd_clockmode VAR_9)
{
 u8 VAR_10[4] = { 0 };
 int VAR_11;

 if (!VAR_8)
  return -VAR_2;

 VAR_11 = FUNC_1(VAR_8->io,
       VAR_1,
       VAR_3,
       FUNC_0(VAR_3));
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_8->io,
       VAR_0,
       VAR_4,
       FUNC_0(VAR_4));
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_8->io,
       VAR_1,
       VAR_5,
       FUNC_0(VAR_5));
 if (VAR_11)
  return VAR_11;

 switch (VAR_9) {
 case 130:
  VAR_10[0] = 0x00;
  break;

 case 129:
  VAR_10[0] = 0x01;
  break;

 case 128:
  VAR_10[0] = 0x02;
  break;

 default:
  return -VAR_2;
 }
 VAR_11 = VAR_8->io->write_reg(VAR_8->io,
         VAR_1,
         0x30, VAR_10[0]);
 if (VAR_11)
  return VAR_11;
 VAR_11 = VAR_8->io->write_reg(VAR_8->io,
         VAR_1,
         0x22, 0x00);
 if (VAR_11)
  return VAR_11;

 FUNC_9(2000, 3000);

 VAR_11 = VAR_8->io->write_reg(VAR_8->io,
         VAR_1,
         0x00, 0x0a);
 if (VAR_11)
  return VAR_11;
 VAR_11 = VAR_8->io->read_regs(VAR_8->io,
         VAR_1,
         0x10, VAR_10, 1);
 if (VAR_11)
  return VAR_11;
 if ((VAR_10[0] & 0x01) == 0x00)
  return -VAR_2;

 VAR_11 = FUNC_1(VAR_8->io,
       VAR_1,
       VAR_6,
       FUNC_0(VAR_6));
 if (VAR_11)
  return VAR_11;

 FUNC_9(1000, 2000);

 VAR_11 = FUNC_1(VAR_8->io,
       VAR_0,
       VAR_7,
       FUNC_0(VAR_7));
 if (VAR_11)
  return VAR_11;

 VAR_11 = VAR_8->io->write_reg(VAR_8->io,
         VAR_1,
         0x00, 0x10);
 if (VAR_11)
  return VAR_11;

 FUNC_2(VAR_10, 0x00, sizeof(VAR_10));

 return VAR_8->io->write_regs(VAR_8->io,
           VAR_1,
           0x26, VAR_10, 4);
}
