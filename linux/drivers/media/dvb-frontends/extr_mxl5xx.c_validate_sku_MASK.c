
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mxl {TYPE_1__* base; int i2cdev; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (struct mxl*,int,int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct mxl *VAR_6)
{
 u32 VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 int VAR_10;
 u32 VAR_11 = VAR_6->base->type;

 VAR_10 = FUNC_1(VAR_6, 0x90000190, 0, 3, &VAR_7);
 VAR_10 |= FUNC_1(VAR_6, 0x80030000, 0, 12, &VAR_8);
 VAR_10 |= FUNC_1(VAR_6, 0x80030004, 24, 8, &VAR_9);
 if (VAR_10)
  return -1;

 FUNC_0(VAR_6->i2cdev, "padMuxBond=%08x, prcmChipId=%08x, prcmSoCId=%08x\n",
  VAR_7, VAR_8, VAR_9);

 if (VAR_8 != 0x560) {
  switch (VAR_7) {
  case 130:
   if (VAR_11 == VAR_2)
    return 0;
   if (VAR_11 == VAR_3) {
    VAR_6->base->type = VAR_2;
    return 0;
   }
   break;
  case 128:
   if (VAR_11 == VAR_5)
    return 0;
   break;
  case 131:
   if (VAR_11 == VAR_1)
    return 0;
   if (VAR_11 == VAR_0)
    return 0;
   break;
  case 129:
   if (VAR_11 == VAR_4)
    return 0;
   break;
  default:
   return -1;
  }
 } else {

 }
 return -1;
}
