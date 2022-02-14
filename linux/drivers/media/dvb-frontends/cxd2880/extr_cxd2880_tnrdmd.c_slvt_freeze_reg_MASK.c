
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int ts_output_if; } ;
struct cxd2880_tnrdmd {TYPE_2__* io; TYPE_1__ create_param; } ;
struct TYPE_5__ {int (* read_regs ) (TYPE_2__*,int ,int,int *,int) ;int (* write_reg ) (TYPE_2__*,int ,int,int) ;} ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int,int *,int) ;
 int FUNC_1 (TYPE_2__*,int ,int,int) ;

int FUNC_2(struct cxd2880_tnrdmd *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 if (!VAR_2)
  return -VAR_1;

 switch (VAR_2->create_param.ts_output_if) {
 case 129:
 case 130:

  VAR_4 = VAR_2->io->read_regs(VAR_2->io,
          VAR_0,
          0x00, &VAR_3, 1);
  if (VAR_4)
   return VAR_4;

  break;
 case 128:
 default:
  break;
 }

 return VAR_2->io->write_reg(VAR_2->io,
          VAR_0,
          0x01, 0x01);
}
