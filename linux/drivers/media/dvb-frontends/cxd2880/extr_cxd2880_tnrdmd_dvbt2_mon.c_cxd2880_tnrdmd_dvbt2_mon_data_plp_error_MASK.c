
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
struct TYPE_4__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cxd2880_tnrdmd*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (TYPE_1__*,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_5(struct cxd2880_tnrdmd
         *VAR_6,
         u8 *VAR_7)
{
 u8 VAR_8;
 int VAR_9;

 if (!VAR_6 || !VAR_7)
  return -VAR_5;

 if (VAR_6->diver_mode == VAR_2)
  return -VAR_5;

 if (VAR_6->state != VAR_3)
  return -VAR_5;

 if (VAR_6->sys != VAR_0)
  return -VAR_5;

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = VAR_6->io->write_reg(VAR_6->io,
         VAR_1,
         0x00, 0x0b);
 if (VAR_9) {
  FUNC_1(VAR_6);
  return VAR_9;
 }

 VAR_9 = VAR_6->io->read_regs(VAR_6->io,
         VAR_1,
         0x86, &VAR_8, 1);
 if (VAR_9) {
  FUNC_1(VAR_6);
  return VAR_9;
 }

 if ((VAR_8 & 0x01) == 0x00) {
  FUNC_1(VAR_6);
  return -VAR_4;
 }

 VAR_9 = VAR_6->io->read_regs(VAR_6->io,
         VAR_1,
         0xc0, &VAR_8, 1);
 if (VAR_9) {
  FUNC_1(VAR_6);
  return VAR_9;
 }

 FUNC_1(VAR_6);

 *VAR_7 = VAR_8 & 0x01;

 return 0;
}
