
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; TYPE_1__* io; } ;
struct TYPE_4__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;

int FUNC_3(struct cxd2880_tnrdmd
         *VAR_5, u8 VAR_6,
         u8 VAR_7)
{
 int VAR_8;

 if (!VAR_5)
  return -VAR_4;

 if (VAR_5->diver_mode == VAR_1)
  return -VAR_4;

 if (VAR_5->state != VAR_3 &&
     VAR_5->state != VAR_2)
  return -VAR_4;

 VAR_8 = VAR_5->io->write_reg(VAR_5->io,
         VAR_0,
         0x00, 0x23);
 if (VAR_8)
  return VAR_8;

 if (!VAR_6) {
  VAR_8 = VAR_5->io->write_reg(VAR_5->io,
          VAR_0,
          0xaf, VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 return VAR_5->io->write_reg(VAR_5->io,
          VAR_0,
          0xad, VAR_6 ? 0x00 : 0x01);
}
