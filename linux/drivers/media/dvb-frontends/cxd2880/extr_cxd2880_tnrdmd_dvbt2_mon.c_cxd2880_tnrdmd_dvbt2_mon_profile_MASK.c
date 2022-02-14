
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {scalar_t__ state; scalar_t__ sys; scalar_t__ diver_mode; struct cxd2880_tnrdmd* diver_sub; TYPE_1__* io; } ;
typedef enum cxd2880_dvbt2_profile { ____Placeholder_cxd2880_dvbt2_profile } cxd2880_dvbt2_profile ;
typedef int data ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int*,int) ;

int FUNC_2(struct cxd2880_tnrdmd
         *VAR_8,
         enum cxd2880_dvbt2_profile
         *VAR_9)
{
 u8 VAR_10;
 int VAR_11;

 if (!VAR_8 || !VAR_9)
  return -VAR_7;

 if (VAR_8->state != VAR_5)
  return -VAR_7;

 if (VAR_8->sys != VAR_0)
  return -VAR_7;

 VAR_11 = VAR_8->io->write_reg(VAR_8->io,
         VAR_3,
         0x00, 0x0b);
 if (VAR_11)
  return VAR_11;

 VAR_11 = VAR_8->io->read_regs(VAR_8->io,
         VAR_3,
         0x22, &VAR_10, sizeof(VAR_10));
 if (VAR_11)
  return VAR_11;

 if (VAR_10 & 0x02) {
  if (VAR_10 & 0x01)
   *VAR_9 = VAR_2;
  else
   *VAR_9 = VAR_1;
 } else {
  VAR_11 = -VAR_6;
  if (VAR_8->diver_mode ==
      VAR_4)
   VAR_11 =
       FUNC_2(VAR_8->diver_sub,
            VAR_9);

  return VAR_11;
 }

 return 0;
}
