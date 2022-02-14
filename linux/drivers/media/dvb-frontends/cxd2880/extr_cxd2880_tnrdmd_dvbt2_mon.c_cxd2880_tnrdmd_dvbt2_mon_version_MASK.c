
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
typedef enum cxd2880_dvbt2_version { ____Placeholder_cxd2880_dvbt2_version } cxd2880_dvbt2_version ;
typedef int data ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cxd2880_tnrdmd*,int*,int*,int*) ;
 int FUNC_1 (struct cxd2880_tnrdmd*,int*,int*) ;
 int FUNC_2 (struct cxd2880_tnrdmd*) ;
 int FUNC_3 (struct cxd2880_tnrdmd*) ;
 int FUNC_4 (TYPE_1__*,int ,int,int) ;
 int FUNC_5 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_6(struct cxd2880_tnrdmd
         *VAR_7,
         enum cxd2880_dvbt2_version
         *VAR_8)
{
 u8 VAR_9[2];
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 int VAR_14;

 if (!VAR_7 || !VAR_8)
  return -VAR_6;

 if (VAR_7->diver_mode == VAR_3)
  return -VAR_6;

 if (VAR_7->state != VAR_4)
  return -VAR_6;

 if (VAR_7->sys != VAR_0)
  return -VAR_6;

 VAR_14 = FUNC_2(VAR_7);
 if (VAR_14)
  return VAR_14;

 VAR_14 =
     FUNC_0(VAR_7, &VAR_10,
            &VAR_11,
            &VAR_12);
 if (VAR_14) {
  FUNC_3(VAR_7);
  return VAR_14;
 }

 if (VAR_10 < 5) {
  if (VAR_7->diver_mode ==
      VAR_2) {
   VAR_14 =
       FUNC_1
       (VAR_7, &VAR_10, &VAR_12);
   if (VAR_14) {
    FUNC_3(VAR_7);
    return VAR_14;
   }

   if (VAR_10 < 5) {
    FUNC_3(VAR_7);
    return -VAR_5;
   }
  } else {
   FUNC_3(VAR_7);
   return -VAR_5;
  }
 }

 VAR_14 = VAR_7->io->write_reg(VAR_7->io,
         VAR_1,
         0x00, 0x0b);
 if (VAR_14) {
  FUNC_3(VAR_7);
  return VAR_14;
 }

 VAR_14 = VAR_7->io->read_regs(VAR_7->io,
         VAR_1,
         0x80, VAR_9, sizeof(VAR_9));
 if (VAR_14) {
  FUNC_3(VAR_7);
  return VAR_14;
 }

 FUNC_3(VAR_7);

 VAR_13 = ((VAR_9[0] & 0x03) << 2);
 VAR_13 |= ((VAR_9[1] & 0xc0) >> 6);
 *VAR_8 = (enum cxd2880_dvbt2_version)VAR_13;

 return VAR_14;
}
