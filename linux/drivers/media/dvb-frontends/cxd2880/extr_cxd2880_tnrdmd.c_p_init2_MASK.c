
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int xosc_cap; int xosc_i; int xtal_share_type; } ;
struct cxd2880_tnrdmd {TYPE_2__* io; TYPE_1__ create_param; } ;
struct TYPE_5__ {int (* write_reg ) (TYPE_2__*,int ,int,int) ;int (* write_regs ) (TYPE_2__*,int ,int,int*,int) ;} ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int,int) ;
 int FUNC_1 (TYPE_2__*,int ,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct cxd2880_tnrdmd *VAR_2)
{
 u8 VAR_3[6] = { 0 };
 int VAR_4;

 if (!VAR_2)
  return -VAR_1;

 VAR_4 = VAR_2->io->write_reg(VAR_2->io,
         VAR_0,
         0x00, 0x00);
 if (VAR_4)
  return VAR_4;
 VAR_3[0] = VAR_2->create_param.xosc_cap;
 VAR_3[1] = VAR_2->create_param.xosc_i;
 switch (VAR_2->create_param.xtal_share_type) {
 case 129:
  VAR_3[2] = 0x01;
  VAR_3[3] = 0x00;
  break;
 case 131:
  VAR_3[2] = 0x00;
  VAR_3[3] = 0x00;
  break;
 case 130:
  VAR_3[2] = 0x01;
  VAR_3[3] = 0x01;
  break;
 case 128:
  VAR_3[2] = 0x00;
  VAR_3[3] = 0x01;
  break;
 default:
  return -VAR_1;
 }
 VAR_3[4] = 0x06;
 VAR_3[5] = 0x00;

 return VAR_2->io->write_regs(VAR_2->io,
           VAR_0,
           0x13, VAR_3, 6);
}
