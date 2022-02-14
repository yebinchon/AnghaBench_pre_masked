
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ ts_output_if; } ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; TYPE_2__* io; TYPE_1__ create_param; } ;
struct TYPE_7__ {int (* write_reg ) (TYPE_2__*,int ,int,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*,int ,int,int) ;
 int FUNC_4 (TYPE_2__*,int ,int,int) ;
 int FUNC_5 (TYPE_2__*,int ,int,int) ;

int FUNC_6(struct cxd2880_tnrdmd
           *VAR_7, u8 VAR_8, u8 VAR_9)
{
 int VAR_10;

 if (!VAR_7)
  return -VAR_4;

 if (VAR_7->diver_mode == VAR_1)
  return -VAR_4;

 if (VAR_7->state != VAR_2)
  return -VAR_4;

 if (VAR_7->create_param.ts_output_if != VAR_3)
  return -VAR_5;

 VAR_10 = VAR_7->io->write_reg(VAR_7->io,
         VAR_0,
         0x00, 0x00);
 if (VAR_10)
  return VAR_10;

 if (VAR_8) {
  VAR_10 = VAR_7->io->write_reg(VAR_7->io,
          VAR_0,
          0x50, ((VAR_9 & 0x1f) | 0x80));
  if (VAR_10)
   return VAR_10;

  VAR_10 = VAR_7->io->write_reg(VAR_7->io,
          VAR_0,
          0x52, (VAR_9 & 0x1f));
 } else {
  VAR_10 = FUNC_1(VAR_7->io,
        VAR_0,
        VAR_6,
        FUNC_0(VAR_6));
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_2(VAR_7);
 }

 return VAR_10;
}
