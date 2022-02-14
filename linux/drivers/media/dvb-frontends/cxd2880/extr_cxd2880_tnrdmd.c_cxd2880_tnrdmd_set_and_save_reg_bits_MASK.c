
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ state; TYPE_1__* io; } ;
typedef enum cxd2880_io_tgt { ____Placeholder_cxd2880_io_tgt } cxd2880_io_tgt ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int,int,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int ,int ,int ) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,int,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int,int,int ) ;

int FUNC_3(struct cxd2880_tnrdmd
      *VAR_3,
      enum cxd2880_io_tgt VAR_4,
      u8 VAR_5, u8 VAR_6,
      u8 VAR_7, u8 VAR_8)
{
 int VAR_9;

 if (!VAR_3)
  return -VAR_2;

 if (VAR_3->state != VAR_1 &&
     VAR_3->state != VAR_0)
  return -VAR_2;

 VAR_9 = VAR_3->io->write_reg(VAR_3->io, VAR_4, 0x00, VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_3->io,
          VAR_4, VAR_6, VAR_7, VAR_8);
 if (VAR_9)
  return VAR_9;

 return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
