
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {TYPE_1__* io; } ;
typedef enum cxd2880_dtv_sys { ____Placeholder_cxd2880_dtv_sys } cxd2880_dtv_sys ;
typedef int data ;
struct TYPE_6__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* write_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct cxd2880_tnrdmd *VAR_5,
     enum cxd2880_dtv_sys VAR_6,
     u8 VAR_7)
{
 u8 VAR_8[6] = { 0 };
 int VAR_9;

 if (!VAR_5)
  return -VAR_3;

 VAR_9 = FUNC_1(VAR_5->io,
       VAR_1,
       VAR_4,
       FUNC_0(VAR_4));
 if (VAR_9)
  return VAR_9;

 VAR_9 = VAR_5->io->write_reg(VAR_5->io,
         VAR_2,
         0x00, 0x10);
 if (VAR_9)
  return VAR_9;

 if (VAR_6 == VAR_0 && VAR_7)
  FUNC_2(VAR_8, 0x01, sizeof(VAR_8));
 else
  FUNC_2(VAR_8, 0x00, sizeof(VAR_8));

 VAR_9 = VAR_5->io->write_regs(VAR_5->io,
          VAR_2,
          0xef, VAR_8, 6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = VAR_5->io->write_reg(VAR_5->io,
         VAR_1,
         0x00, 0x2d);
 if (VAR_9)
  return VAR_9;
 if (VAR_6 == VAR_0 && VAR_7)
  VAR_8[0] = 0x00;
 else
  VAR_8[0] = 0x01;

 return VAR_5->io->write_reg(VAR_5->io,
          VAR_1,
          0xb1, VAR_8[0]);
}
