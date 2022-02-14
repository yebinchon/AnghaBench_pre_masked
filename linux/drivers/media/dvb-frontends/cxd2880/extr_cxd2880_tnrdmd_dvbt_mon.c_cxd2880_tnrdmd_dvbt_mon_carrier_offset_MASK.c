
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cxd2880_tnrdmd {scalar_t__ state; scalar_t__ sys; int bandwidth; TYPE_1__* io; } ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 (struct cxd2880_tnrdmd*) ;
 int FUNC_4 (TYPE_1__*,int ,int,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_6(struct cxd2880_tnrdmd
        *VAR_4, int *VAR_5)
{
 u8 VAR_6[4];
 u32 VAR_7 = 0;
 int VAR_8;

 if (!VAR_4 || !VAR_5)
  return -VAR_3;

 if (VAR_4->state != VAR_2)
  return -VAR_3;

 if (VAR_4->sys != VAR_0)
  return -VAR_3;

 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8) {
  FUNC_3(VAR_4);
  return VAR_8;
 }

 VAR_8 = VAR_4->io->write_reg(VAR_4->io,
         VAR_1,
         0x00, 0x0d);
 if (VAR_8) {
  FUNC_3(VAR_4);
  return VAR_8;
 }

 VAR_8 = VAR_4->io->read_regs(VAR_4->io,
         VAR_1,
         0x1d, VAR_6, 4);
 if (VAR_8) {
  FUNC_3(VAR_4);
  return VAR_8;
 }

 FUNC_3(VAR_4);

 VAR_7 =
     ((VAR_6[0] & 0x1f) << 24) | (VAR_6[1] << 16) | (VAR_6[2] << 8) |
     (VAR_6[3]);
 *VAR_5 = FUNC_0(VAR_7, 29);
 *VAR_5 = -1 * ((*VAR_5) * VAR_4->bandwidth / 235);

 return VAR_8;
}
