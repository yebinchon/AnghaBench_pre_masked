
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; TYPE_1__* io; } ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* write_regs ) (TYPE_1__*,int ,int,int const*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int const*,int) ;

__attribute__((used)) static int FUNC_2(struct cxd2880_tnrdmd
           *VAR_3)
{
 static const u8 VAR_4[] = {
  0, 1, 0, 2, 0, 4, 0, 8, 0, 16, 0, 32
 };
 int VAR_5 = 0;

 if (!VAR_3)
  return -VAR_2;

 if (VAR_3->diver_mode == VAR_1) {
  VAR_5 = VAR_3->io->write_reg(VAR_3->io,
          VAR_0,
          0x00, 0x1d);
  if (VAR_5)
   return VAR_5;

  VAR_5 = VAR_3->io->write_regs(VAR_3->io,
           VAR_0,
           0x47, VAR_4, 12);
 }

 return VAR_5;
}
