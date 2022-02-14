
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ state; scalar_t__ sys; scalar_t__ diver_mode; TYPE_1__* io; struct cxd2880_tnrdmd* diver_sub; } ;
typedef enum cxd2880_tnrdmd_spectrum_sense { ____Placeholder_cxd2880_tnrdmd_spectrum_sense } cxd2880_tnrdmd_spectrum_sense ;
typedef int data ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int*,int*,int*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 (TYPE_1__*,int ,int,int) ;
 int FUNC_4 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_5(struct cxd2880_tnrdmd
         *VAR_8,
         enum
         cxd2880_tnrdmd_spectrum_sense
         *VAR_9)
{
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 int VAR_14;

 if (!VAR_8 || !VAR_9)
  return -VAR_7;

 if (VAR_8->state != VAR_5)
  return -VAR_7;

 if (VAR_8->sys != VAR_0)
  return -VAR_7;

 VAR_14 = FUNC_1(VAR_8);
 if (VAR_14)
  return VAR_14;

 VAR_14 =
     FUNC_0(VAR_8, &VAR_10, &VAR_11,
            &VAR_12);
 if (VAR_14) {
  FUNC_2(VAR_8);
  return VAR_14;
 }

 if (VAR_10 != 6) {
  FUNC_2(VAR_8);

  VAR_14 = -VAR_6;

  if (VAR_8->diver_mode == VAR_2)
   VAR_14 =
       FUNC_5(VAR_8->diver_sub,
            VAR_9);

  return VAR_14;
 }

 VAR_14 = VAR_8->io->write_reg(VAR_8->io,
         VAR_1,
         0x00, 0x0b);
 if (VAR_14) {
  FUNC_2(VAR_8);
  return VAR_14;
 }

 VAR_14 = VAR_8->io->read_regs(VAR_8->io,
         VAR_1,
         0x2f, &VAR_13, sizeof(VAR_13));
 if (VAR_14) {
  FUNC_2(VAR_8);
  return VAR_14;
 }

 FUNC_2(VAR_8);

 *VAR_9 =
     (VAR_13 & 0x01) ? VAR_3 :
     VAR_4;

 return 0;
}
