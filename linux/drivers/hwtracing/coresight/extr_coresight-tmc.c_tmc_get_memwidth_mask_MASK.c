
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmc_drvdata {int memwidth; } ;


 int FUNC_0 (int,int) ;





u32 FUNC_1(struct tmc_drvdata *VAR_0)
{
 u32 VAR_1 = 0;
 switch (VAR_0->memwidth) {
 case 129:

 case 128:

 case 131:
  VAR_1 = FUNC_0(31, 4);
  break;
 case 130:
  VAR_1 = FUNC_0(31, 5);
  break;
 }

 return VAR_1;
}
