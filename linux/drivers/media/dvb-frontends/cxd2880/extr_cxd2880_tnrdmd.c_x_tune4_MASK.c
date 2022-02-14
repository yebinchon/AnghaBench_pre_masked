
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; TYPE_1__* diver_sub; TYPE_2__* io; } ;
struct TYPE_13__ {int (* write_reg ) (TYPE_2__*,int ,int,int) ;int (* write_regs ) (TYPE_2__*,int ,int,int*,int) ;} ;
struct TYPE_12__ {TYPE_2__* io; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int,int) ;
 int FUNC_3 (TYPE_2__*,int ,int,int*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int,int) ;
 int FUNC_5 (TYPE_2__*,int ,int,int*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int,int) ;
 int FUNC_7 (TYPE_2__*,int ,int,int*,int) ;
 int FUNC_8 (TYPE_2__*,int ,int,int) ;
 int FUNC_9 (TYPE_2__*,int ,int,int*,int) ;
 int FUNC_10 (TYPE_2__*,int ,int,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct cxd2880_tnrdmd *VAR_5)
{
 u8 VAR_6[2] = { 0 };
 int VAR_7;

 if (!VAR_5)
  return -VAR_3;

 if (VAR_5->diver_mode != VAR_2)
  return -VAR_3;

 VAR_7 = VAR_5->diver_sub->io->write_reg(VAR_5->diver_sub->io,
      VAR_1,
      0x00, 0x00);
 if (VAR_7)
  return VAR_7;
 VAR_6[0] = 0x14;
 VAR_6[1] = 0x00;
 VAR_7 = VAR_5->diver_sub->io->write_regs(VAR_5->diver_sub->io,
      VAR_1,
      0x55, VAR_6, 2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = VAR_5->io->write_reg(VAR_5->io,
         VAR_1,
         0x00, 0x00);
 if (VAR_7)
  return VAR_7;
 VAR_6[0] = 0x0b;
 VAR_6[1] = 0xff;
 VAR_7 = VAR_5->io->write_regs(VAR_5->io,
          VAR_1,
          0x53, VAR_6, 2);
 if (VAR_7)
  return VAR_7;
 VAR_7 = VAR_5->io->write_reg(VAR_5->io,
         VAR_1,
         0x57, 0x01);
 if (VAR_7)
  return VAR_7;
 VAR_6[0] = 0x0b;
 VAR_6[1] = 0xff;
 VAR_7 = VAR_5->io->write_regs(VAR_5->io,
          VAR_1,
          0x55, VAR_6, 2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = VAR_5->diver_sub->io->write_reg(VAR_5->diver_sub->io,
      VAR_1,
      0x00, 0x00);
 if (VAR_7)
  return VAR_7;
 VAR_6[0] = 0x14;
 VAR_6[1] = 0x00;
 VAR_7 = VAR_5->diver_sub->io->write_regs(VAR_5->diver_sub->io,
       VAR_1,
       0x53, VAR_6, 2);
 if (VAR_7)
  return VAR_7;
 VAR_7 = VAR_5->diver_sub->io->write_reg(VAR_5->diver_sub->io,
      VAR_1,
      0x57, 0x02);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5->io,
       VAR_0,
       VAR_4,
       FUNC_0(VAR_4));
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_5->diver_sub->io,
        VAR_0,
        VAR_4,
        FUNC_0(VAR_4));
}
