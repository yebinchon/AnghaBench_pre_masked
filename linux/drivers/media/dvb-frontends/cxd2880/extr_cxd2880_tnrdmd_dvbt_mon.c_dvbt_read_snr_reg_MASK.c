
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct cxd2880_tnrdmd {TYPE_1__* io; } ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxd2880_tnrdmd*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;

__attribute__((used)) static int FUNC_5(struct cxd2880_tnrdmd *VAR_2,
        u16 *VAR_3)
{
 u8 VAR_4[2];
 int VAR_5;

 if (!VAR_2 || !VAR_3)
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5) {
  FUNC_2(VAR_2);
  return VAR_5;
 }

 VAR_5 = VAR_2->io->write_reg(VAR_2->io,
         VAR_0,
         0x00, 0x0d);
 if (VAR_5) {
  FUNC_2(VAR_2);
  return VAR_5;
 }

 VAR_5 = VAR_2->io->read_regs(VAR_2->io,
         VAR_0,
         0x13, VAR_4, 2);
 if (VAR_5) {
  FUNC_2(VAR_2);
  return VAR_5;
 }

 FUNC_2(VAR_2);

 *VAR_3 = (VAR_4[0] << 8) | VAR_4[1];

 return VAR_5;
}
