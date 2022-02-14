
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cxd2880_tnrdmd {TYPE_1__* io; } ;
typedef enum cxd2880_dvbt_profile { ____Placeholder_cxd2880_dvbt_profile } cxd2880_dvbt_profile ;
struct TYPE_3__ {int (* write_reg ) (TYPE_1__*,int ,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct cxd2880_tnrdmd *VAR_3,
       enum cxd2880_dvbt_profile VAR_4)
{
 int VAR_5;

 if (!VAR_3)
  return -VAR_2;

 VAR_5 = VAR_3->io->write_reg(VAR_3->io,
         VAR_1,
         0x00, 0x10);
 if (VAR_5)
  return VAR_5;

 return VAR_3->io->write_reg(VAR_3->io,
          VAR_1,
          0x67,
          (VAR_4 == VAR_0)
          ? 0x00 : 0x01);
}
