
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {int clk_mode; TYPE_1__* io; } ;
typedef enum cxd2880_dvbt2_profile { ____Placeholder_cxd2880_dvbt2_profile } cxd2880_dvbt2_profile ;
struct TYPE_5__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;} ;





 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct cxd2880_tnrdmd *VAR_2,
        enum cxd2880_dvbt2_profile VAR_3)
{
 u8 VAR_4 = 0;
 u8 VAR_5 = 0;
 u8 VAR_6 = 0;
 u8 VAR_7 = 0;
 int VAR_8;

 if (!VAR_2)
  return -VAR_1;

 switch (VAR_2->clk_mode) {
 case 130:
  VAR_6 = 0x27;
  VAR_7 = 0x0c;
  break;
 case 129:
  VAR_6 = 0x2c;
  VAR_7 = 0x0d;
  break;
 case 128:
  VAR_6 = 0x2e;
  VAR_7 = 0x0e;
  break;
 default:
  return -VAR_1;
 }

 switch (VAR_3) {
 case 132:
  VAR_4 = 0x01;
  VAR_5 = VAR_7;
  break;

 case 131:
  VAR_4 = 0x05;
  VAR_5 = VAR_6;
  break;

 case 133:
  VAR_4 = 0x00;
  VAR_5 = VAR_6;
  break;

 default:
  return -VAR_1;
 }

 VAR_8 = VAR_2->io->write_reg(VAR_2->io,
         VAR_0,
         0x00, 0x2e);
 if (VAR_8)
  return VAR_8;

 VAR_8 = VAR_2->io->write_reg(VAR_2->io,
         VAR_0,
         0x10, VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = VAR_2->io->write_reg(VAR_2->io,
         VAR_0,
         0x00, 0x04);
 if (VAR_8)
  return VAR_8;

 return VAR_2->io->write_reg(VAR_2->io,
          VAR_0,
          0x2c, VAR_5);
}
