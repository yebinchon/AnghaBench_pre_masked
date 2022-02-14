
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; TYPE_2__* io; TYPE_1__* diver_sub; } ;
struct TYPE_11__ {int (* write_reg ) (TYPE_4__*,int ,int,int) ;int (* write_regs ) (TYPE_4__*,int ,int,int*,int) ;} ;
struct TYPE_10__ {int (* write_regs ) (TYPE_2__*,int ,int,int*,int) ;int (* write_reg ) (TYPE_2__*,int ,int,int) ;} ;
struct TYPE_9__ {TYPE_4__* io; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int,int*,int) ;
 int FUNC_3 (TYPE_4__*,int ,int,int) ;
 int FUNC_4 (TYPE_4__*,int ,int,int*,int) ;
 int FUNC_5 (TYPE_4__*,int ,int,int*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int,int) ;
 int FUNC_7 (TYPE_2__*,int ,int,int*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct cxd2880_tnrdmd *VAR_4)
{
 u8 VAR_5[3] = { 0 };
 int VAR_6;

 if (!VAR_4)
  return -VAR_2;

 if (VAR_4->diver_mode != VAR_1)
  return -VAR_2;

 VAR_6 = FUNC_1(VAR_4->io,
       VAR_0,
       VAR_3,
       FUNC_0(VAR_3));
 if (VAR_6)
  return VAR_6;

 VAR_5[0] = 0x00;
 VAR_5[1] = 0x00;
 VAR_6 = VAR_4->io->write_regs(VAR_4->io,
          VAR_0,
          0x53, VAR_5, 2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = VAR_4->diver_sub->io->write_reg(VAR_4->diver_sub->io,
      VAR_0,
      0x00, 0x00);
 if (VAR_6)
  return VAR_6;
 VAR_5[0] = 0x1f;
 VAR_5[1] = 0xff;
 VAR_5[2] = 0x03;
 VAR_6 = VAR_4->diver_sub->io->write_regs(VAR_4->diver_sub->io,
       VAR_0,
       0x55, VAR_5, 3);
 if (VAR_6)
  return VAR_6;
 VAR_5[0] = 0x00;
 VAR_5[1] = 0x00;
 VAR_6 = VAR_4->diver_sub->io->write_regs(VAR_4->diver_sub->io,
       VAR_0,
       0x53, VAR_5, 2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = VAR_4->io->write_reg(VAR_4->io,
         VAR_0,
         0x00, 0x00);
 if (VAR_6)
  return VAR_6;
 VAR_5[0] = 0x1f;
 VAR_5[1] = 0xff;

 return VAR_4->io->write_regs(VAR_4->io,
           VAR_0,
           0x55, VAR_5, 2);
}
