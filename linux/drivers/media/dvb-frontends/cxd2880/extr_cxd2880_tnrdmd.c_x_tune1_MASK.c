
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cxd2880_tnrdmd {TYPE_1__* io; } ;
typedef enum cxd2880_dtv_sys { ____Placeholder_cxd2880_dtv_sys } cxd2880_dtv_sys ;
typedef enum cxd2880_dtv_bandwidth { ____Placeholder_cxd2880_dtv_bandwidth } cxd2880_dtv_bandwidth ;
struct TYPE_9__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* write_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 int FUNC_0 (int ) ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_7 (TYPE_1__*,int ,int,int) ;
 int FUNC_8 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_9 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(struct cxd2880_tnrdmd *VAR_5,
     enum cxd2880_dtv_sys VAR_6, u32 VAR_7,
     enum cxd2880_dtv_bandwidth VAR_8,
     u8 VAR_9, int VAR_10)
{
 u8 VAR_11[11] = { 0 };
 int VAR_12;

 if (!VAR_5)
  return -VAR_2;

 VAR_12 = FUNC_1(VAR_5->io,
       VAR_0,
       VAR_3,
       FUNC_0(VAR_3));
 if (VAR_12)
  return VAR_12;

 VAR_12 = VAR_5->io->write_reg(VAR_5->io,
         VAR_1,
         0x00, 0x10);
 if (VAR_12)
  return VAR_12;

 VAR_11[2] = 0x0e;
 VAR_11[4] = 0x03;
 VAR_12 = VAR_5->io->write_regs(VAR_5->io,
          VAR_1,
          0xe7, VAR_11, 5);
 if (VAR_12)
  return VAR_12;

 VAR_11[0] = 0x1f;
 VAR_11[1] = 0x80;
 VAR_11[2] = 0x18;
 VAR_11[3] = 0x00;
 VAR_11[4] = 0x07;
 VAR_12 = VAR_5->io->write_regs(VAR_5->io,
          VAR_1,
          0xe7, VAR_11, 5);
 if (VAR_12)
  return VAR_12;

 FUNC_9(1000, 2000);

 VAR_11[0] = 0x72;
 VAR_11[1] = 0x81;
 VAR_11[3] = 0x1d;
 VAR_11[4] = 0x6f;
 VAR_11[5] = 0x7e;
 VAR_11[7] = 0x1c;
 switch (VAR_6) {
 case 129:
  VAR_11[2] = 0x94;
  VAR_11[6] = 0x91;
  break;
 case 128:
  VAR_11[2] = 0x96;
  VAR_11[6] = 0x93;
  break;
 default:
  return -VAR_2;
 }
 VAR_12 = VAR_5->io->write_regs(VAR_5->io,
          VAR_1,
          0x44, VAR_11, 8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_5->io,
       VAR_1,
       VAR_4,
       FUNC_0(VAR_4));
 if (VAR_12)
  return VAR_12;

 VAR_11[0] = 0x03;
 VAR_11[1] = 0xe2;
 VAR_12 = VAR_5->io->write_regs(VAR_5->io,
          VAR_1,
          0x1e, VAR_11, 2);
 if (VAR_12)
  return VAR_12;

 VAR_12 = VAR_5->io->write_reg(VAR_5->io,
         VAR_1,
         0x00, 0x10);
 if (VAR_12)
  return VAR_12;

 VAR_11[0] = VAR_9 ? 0x01 : 0x00;
 VAR_11[1] = 0x00;
 VAR_11[2] = 0x6b;
 VAR_11[3] = 0x4d;

 switch (VAR_8) {
 case 134:
  VAR_11[4] = 0x03;
  break;
 case 133:
 case 132:
  VAR_11[4] = 0x00;
  break;
 case 131:
  VAR_11[4] = 0x01;
  break;
 case 130:
  VAR_11[4] = 0x02;
  break;
 default:
  return -VAR_2;
 }

 VAR_11[5] = 0x00;

 VAR_7 += VAR_10;

 VAR_11[6] = (VAR_7 >> 16) & 0x0f;
 VAR_11[7] = (VAR_7 >> 8) & 0xff;
 VAR_11[8] = VAR_7 & 0xff;
 VAR_11[9] = 0xff;
 VAR_11[10] = 0xfe;

 return VAR_5->io->write_regs(VAR_5->io,
           VAR_1,
           0x52, VAR_11, 11);
}
