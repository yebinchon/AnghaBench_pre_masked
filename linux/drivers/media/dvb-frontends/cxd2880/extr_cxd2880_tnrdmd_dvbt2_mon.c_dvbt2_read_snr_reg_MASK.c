
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct cxd2880_tnrdmd {TYPE_1__* io; } ;
typedef int data ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int*,int*,int*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;

__attribute__((used)) static int FUNC_5(struct cxd2880_tnrdmd *VAR_3,
         u16 *VAR_4)
{
 u8 VAR_5 = 0;
 u8 VAR_6 = 0;
 u8 VAR_7 = 0;
 u8 VAR_8[2];
 int VAR_9;

 if (!VAR_3 || !VAR_4)
  return -VAR_2;

 VAR_9 = FUNC_1(VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 =
     FUNC_0(VAR_3, &VAR_5,
            &VAR_6,
            &VAR_7);
 if (VAR_9) {
  FUNC_2(VAR_3);
  return VAR_9;
 }

 if (VAR_5 != 6) {
  FUNC_2(VAR_3);
  return -VAR_1;
 }

 VAR_9 = VAR_3->io->write_reg(VAR_3->io,
         VAR_0,
         0x00, 0x0b);
 if (VAR_9) {
  FUNC_2(VAR_3);
  return VAR_9;
 }

 VAR_9 = VAR_3->io->read_regs(VAR_3->io,
         VAR_0,
         0x13, VAR_8, sizeof(VAR_8));
 if (VAR_9) {
  FUNC_2(VAR_3);
  return VAR_9;
 }

 FUNC_2(VAR_3);

 *VAR_4 = (VAR_8[0] << 8) | VAR_8[1];

 return VAR_9;
}
