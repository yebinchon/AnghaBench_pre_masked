
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ diver_mode; scalar_t__ state; scalar_t__ sys; TYPE_1__* io; } ;
typedef int data ;
struct TYPE_5__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


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
 int FUNC_6 (TYPE_1__*,int ,int,int) ;
 int FUNC_7 (TYPE_1__*,int ,int,int) ;

int FUNC_8(struct cxd2880_tnrdmd
           *VAR_7, u8 *VAR_8)
{
 u8 VAR_9;
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;
 u8 VAR_12 = 0;
 int VAR_13;

 if (!VAR_7 || !VAR_8)
  return -VAR_6;

 if (VAR_7->diver_mode == VAR_3)
  return -VAR_6;

 if (VAR_7->state != VAR_4)
  return -VAR_6;

 if (VAR_7->sys != VAR_0)
  return -VAR_6;

 VAR_13 = FUNC_2(VAR_7);
 if (VAR_13)
  return VAR_13;

 VAR_13 =
     FUNC_0(VAR_7, &VAR_10,
            &VAR_11,
            &VAR_12);
 if (VAR_13) {
  FUNC_3(VAR_7);
  return VAR_13;
 }

 if (VAR_10 < 5) {
  if (VAR_7->diver_mode ==
      VAR_2) {
   VAR_13 =
       FUNC_1
       (VAR_7, &VAR_10, &VAR_12);
   if (VAR_13) {
    FUNC_3(VAR_7);
    return VAR_13;
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

 VAR_13 = VAR_7->io->write_reg(VAR_7->io,
         VAR_1,
         0x00, 0x0b);
 if (VAR_13) {
  FUNC_3(VAR_7);
  return VAR_13;
 }

 VAR_13 = VAR_7->io->read_regs(VAR_7->io,
         VAR_1,
         0x5f, &VAR_9, sizeof(VAR_9));
 if (VAR_13) {
  FUNC_3(VAR_7);
  return VAR_13;
 }

 *VAR_8 = VAR_9 & 0x01;
 if (*VAR_8) {
  VAR_13 = VAR_7->io->write_reg(VAR_7->io,
          VAR_1,
          0x00, 0x22);
  if (VAR_13) {
   FUNC_3(VAR_7);
   return VAR_13;
  }

  VAR_13 = VAR_7->io->write_reg(VAR_7->io,
          VAR_1,
          0x16, 0x01);
  if (VAR_13) {
   FUNC_3(VAR_7);
   return VAR_13;
  }
 }
 FUNC_3(VAR_7);

 return 0;
}
