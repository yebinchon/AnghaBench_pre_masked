
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {int diver_mode; TYPE_1__* io; } ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* write_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct cxd2880_tnrdmd *VAR_2)
{
 u8 VAR_3[2] = { 0 };
 int VAR_4;

 if (!VAR_2)
  return -VAR_1;

 VAR_4 = VAR_2->io->write_reg(VAR_2->io,
         VAR_0,
         0x00, 0x00);
 if (VAR_4)
  return VAR_4;

 switch (VAR_2->diver_mode) {
 case 129:
  VAR_3[0] = 0x00;
  break;
 case 130:
  VAR_3[0] = 0x03;
  break;
 case 128:
  VAR_3[0] = 0x02;
  break;
 default:
  return -VAR_1;
 }

 VAR_3[1] = 0x01;

 return VAR_2->io->write_regs(VAR_2->io,
           VAR_0,
           0x1f, VAR_3, 2);
}
