
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct cxd2880_tnrdmd {TYPE_1__* io; } ;
struct TYPE_3__ {int (* read_regs ) (TYPE_1__*,int ,int,int*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int,int*,int) ;
 int FUNC_3 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct cxd2880_tnrdmd *VAR_5)
{
 u8 VAR_6 = 0;
 int VAR_7;

 if (!VAR_5)
  return -VAR_2;

 VAR_7 = FUNC_1(VAR_5->io,
       VAR_0,
       VAR_3,
       FUNC_0(VAR_3));
 if (VAR_7)
  return VAR_7;

 FUNC_3(1000, 2000);

 VAR_7 = VAR_5->io->read_regs(VAR_5->io,
         VAR_0,
         0xb2, &VAR_6, 1);
 if (VAR_7)
  return VAR_7;

 if ((VAR_6 & 0x01) == 0x00)
  return -VAR_2;

 return FUNC_1(VAR_5->io,
        VAR_1,
        VAR_4,
        FUNC_0(VAR_4));
}
