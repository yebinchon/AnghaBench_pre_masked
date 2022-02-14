
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cxd2880_tnrdmd {scalar_t__ state; scalar_t__ sys; int bandwidth; TYPE_1__* io; } ;
typedef int data ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;







 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,int*,int*,int*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 (struct cxd2880_tnrdmd*) ;
 int FUNC_4 (TYPE_1__*,int ,int,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_6(struct cxd2880_tnrdmd
         *VAR_5, int *VAR_6)
{
 u8 VAR_7[4];
 u32 VAR_8 = 0;
 u8 VAR_9 = 0;
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;
 int VAR_12;

 if (!VAR_5 || !VAR_6)
  return -VAR_4;

 if (VAR_5->state != VAR_2)
  return -VAR_4;

 if (VAR_5->sys != VAR_0)
  return -VAR_4;

 VAR_12 = FUNC_2(VAR_5);
 if (VAR_12)
  return VAR_12;

 VAR_12 =
     FUNC_1(VAR_5, &VAR_9,
            &VAR_10,
            &VAR_11);
 if (VAR_12) {
  FUNC_3(VAR_5);
  return VAR_12;
 }

 if (VAR_9 != 6) {
  FUNC_3(VAR_5);
  return -VAR_3;
 }

 VAR_12 = VAR_5->io->write_reg(VAR_5->io,
         VAR_1,
         0x00, 0x0b);
 if (VAR_12) {
  FUNC_3(VAR_5);
  return VAR_12;
 }

 VAR_12 = VAR_5->io->read_regs(VAR_5->io,
         VAR_1,
         0x30, VAR_7, sizeof(VAR_7));
 if (VAR_12) {
  FUNC_3(VAR_5);
  return VAR_12;
 }

 FUNC_3(VAR_5);

 VAR_8 =
     ((VAR_7[0] & 0x0f) << 24) | (VAR_7[1] << 16) | (VAR_7[2] << 8)
     | (VAR_7[3]);
 *VAR_6 = FUNC_0(VAR_8, 28);

 switch (VAR_5->bandwidth) {
 case 132:
  *VAR_6 = -1 * ((*VAR_6) / 582);
  break;
 case 131:
 case 130:
 case 129:
 case 128:
  *VAR_6 = -1 * ((*VAR_6) * VAR_5->bandwidth / 940);
  break;
 default:
  return -VAR_4;
 }

 return 0;
}
