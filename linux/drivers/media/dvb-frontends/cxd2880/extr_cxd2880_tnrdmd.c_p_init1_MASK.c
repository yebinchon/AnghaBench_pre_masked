
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int ts_output_if; scalar_t__ en_internal_ldo; } ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; int chip_id; TYPE_2__* io; TYPE_1__ create_param; } ;
struct TYPE_13__ {int (* write_reg ) (TYPE_2__*,int ,int,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int ,int,int) ;
 int FUNC_3 (TYPE_2__*,int ,int,int) ;
 int FUNC_4 (TYPE_2__*,int ,int,int) ;
 int FUNC_5 (TYPE_2__*,int ,int,int) ;
 int FUNC_6 (TYPE_2__*,int ,int,int) ;
 int FUNC_7 (TYPE_2__*,int ,int,int) ;
 int FUNC_8 (TYPE_2__*,int ,int,int) ;
 int FUNC_9 (TYPE_2__*,int ,int,int) ;
 int FUNC_10 (TYPE_2__*,int ,int,int) ;

__attribute__((used)) static int FUNC_11(struct cxd2880_tnrdmd *VAR_6)
{
 u8 VAR_7 = 0;
 int VAR_8;

 if (!VAR_6)
  return -VAR_3;

 VAR_8 = VAR_6->io->write_reg(VAR_6->io,
         VAR_0,
         0x00, 0x00);
 if (VAR_8)
  return VAR_8;

 if (VAR_6->diver_mode == VAR_2 ||
     VAR_6->diver_mode == VAR_1) {
  switch (VAR_6->create_param.ts_output_if) {
  case 128:
   VAR_7 = 0x00;
   break;
  case 129:
   VAR_7 = 0x01;
   break;
  case 130:
   VAR_7 = 0x02;
   break;
  default:
   return -VAR_3;
  }
  VAR_8 = VAR_6->io->write_reg(VAR_6->io,
          VAR_0,
          0x10, VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_6->io,
       VAR_0,
       VAR_5,
       FUNC_0(VAR_5));
 if (VAR_8)
  return VAR_8;

 switch (VAR_6->chip_id) {
 case 132:
  VAR_7 = 0x1a;
  break;
 case 131:
  VAR_7 = 0x16;
  break;
 default:
  return -VAR_4;
 }

 VAR_8 = VAR_6->io->write_reg(VAR_6->io,
         VAR_0,
         0x10, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_6->create_param.en_internal_ldo)
  VAR_7 = 0x01;
 else
  VAR_7 = 0x00;

 VAR_8 = VAR_6->io->write_reg(VAR_6->io,
         VAR_0,
         0x11, VAR_7);
 if (VAR_8)
  return VAR_8;
 VAR_8 = VAR_6->io->write_reg(VAR_6->io,
         VAR_0,
         0x13, VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = VAR_6->io->write_reg(VAR_6->io,
         VAR_0,
         0x00, 0x00);
 if (VAR_8)
  return VAR_8;
 VAR_8 = VAR_6->io->write_reg(VAR_6->io,
         VAR_0,
         0x12, VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = VAR_6->io->write_reg(VAR_6->io,
         VAR_0,
         0x00, 0x10);
 if (VAR_8)
  return VAR_8;

 switch (VAR_6->chip_id) {
 case 132:
  VAR_7 = 0x01;
  break;
 case 131:
  VAR_7 = 0x00;
  break;
 default:
  return -VAR_4;
 }

 return VAR_6->io->write_reg(VAR_6->io,
          VAR_0,
          0x69, VAR_7);
}
