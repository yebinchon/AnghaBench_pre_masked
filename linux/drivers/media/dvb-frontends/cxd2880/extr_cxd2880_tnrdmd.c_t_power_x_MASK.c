
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {TYPE_1__* io; } ;
typedef int data ;
struct TYPE_12__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;int (* write_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_7 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_8 (TYPE_1__*,int ,int,int) ;
 int FUNC_9 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_10 (TYPE_1__*,int ,int,int) ;
 int FUNC_11 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_12 (TYPE_1__*,int ,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(struct cxd2880_tnrdmd *VAR_10, u8 VAR_11)
{
 u8 VAR_12[3] = { 0 };
 int VAR_13;

 if (!VAR_10)
  return -VAR_2;

 VAR_13 = FUNC_1(VAR_10->io,
       VAR_1,
       VAR_3,
       FUNC_0(VAR_3));
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_10->io,
       VAR_0,
       VAR_4,
       FUNC_0(VAR_4));
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_10->io,
       VAR_1,
       VAR_5,
       FUNC_0(VAR_5));
 if (VAR_13)
  return VAR_13;

 if (VAR_11) {
  VAR_13 = VAR_10->io->write_reg(VAR_10->io,
          VAR_1,
          0x2b, 0x01);
  if (VAR_13)
   return VAR_13;

  FUNC_13(1000, 2000);

  VAR_13 = VAR_10->io->write_reg(VAR_10->io,
          VAR_1,
          0x00, 0x0a);
  if (VAR_13)
   return VAR_13;
  VAR_13 = VAR_10->io->read_regs(VAR_10->io,
          VAR_1,
          0x12, VAR_12, 1);
  if (VAR_13)
   return VAR_13;
  if ((VAR_12[0] & 0x01) == 0)
   return -VAR_2;

  VAR_13 = FUNC_1(VAR_10->io,
        VAR_1,
        VAR_6,
        FUNC_0(VAR_6));
  if (VAR_13)
   return VAR_13;
 } else {
  VAR_12[0] = 0x03;
  VAR_12[1] = 0x00;
  VAR_13 = VAR_10->io->write_regs(VAR_10->io,
           VAR_1,
           0x2a, VAR_12, 2);
  if (VAR_13)
   return VAR_13;

  FUNC_13(1000, 2000);

  VAR_13 = VAR_10->io->write_reg(VAR_10->io,
          VAR_1,
          0x00, 0x0a);
  if (VAR_13)
   return VAR_13;
  VAR_13 = VAR_10->io->read_regs(VAR_10->io,
          VAR_1,
          0x13, VAR_12, 1);
  if (VAR_13)
   return VAR_13;
  if ((VAR_12[0] & 0x01) == 0)
   return -VAR_2;
 }

 VAR_13 = FUNC_1(VAR_10->io,
       VAR_1,
       VAR_7,
       FUNC_0(VAR_7));
 if (VAR_13)
  return VAR_13;

 FUNC_13(1000, 2000);

 VAR_13 = VAR_10->io->write_reg(VAR_10->io,
         VAR_1,
         0x00, 0x0a);
 if (VAR_13)
  return VAR_13;
 VAR_13 = VAR_10->io->read_regs(VAR_10->io,
         VAR_1,
         0x11, VAR_12, 1);
 if (VAR_13)
  return VAR_13;
 if ((VAR_12[0] & 0x01) == 0)
  return -VAR_2;

 VAR_13 = FUNC_1(VAR_10->io,
       VAR_1,
       VAR_8,
       FUNC_0(VAR_8));
 if (VAR_13)
  return VAR_13;

 FUNC_13(1000, 2000);

 VAR_13 = FUNC_1(VAR_10->io,
       VAR_0,
       VAR_9,
       FUNC_0(VAR_9));
 if (VAR_13)
  return VAR_13;

 VAR_13 = VAR_10->io->write_reg(VAR_10->io,
         VAR_1,
         0x00, 0x10);
 if (VAR_13)
  return VAR_13;

 FUNC_2(VAR_12, 0x00, sizeof(VAR_12));

 return VAR_10->io->write_regs(VAR_10->io,
           VAR_1,
           0x27, VAR_12, 3);
}
