
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct ci_pt_config_reg {int offset; int type; int value; int shift; int mask; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_2,
       const struct ci_pt_config_reg *VAR_3)
{
 const struct ci_pt_config_reg *VAR_4 = VAR_3;
 u32 VAR_5;
 u32 VAR_6 = 0;

 if (VAR_4 == ((void*)0))
  return -VAR_1;

 while (VAR_4->offset != 0xFFFFFFFF) {
  if (VAR_4->type == VAR_0) {
   VAR_6 |= ((VAR_4->value << VAR_4->shift) & VAR_4->mask);
  } else {
   switch (VAR_4->type) {
   case 128:
    VAR_5 = FUNC_2(VAR_4->offset);
    break;
   case 129:
    VAR_5 = FUNC_1(VAR_4->offset);
    break;
   default:
    VAR_5 = FUNC_0(VAR_4->offset << 2);
    break;
   }

   VAR_5 &= ~VAR_4->mask;
   VAR_5 |= ((VAR_4->value << VAR_4->shift) & VAR_4->mask);
   VAR_5 |= VAR_6;

   switch (VAR_4->type) {
   case 128:
    FUNC_5(VAR_4->offset, VAR_5);
    break;
   case 129:
    FUNC_4(VAR_4->offset, VAR_5);
    break;
   default:
    FUNC_3(VAR_4->offset << 2, VAR_5);
    break;
   }
   VAR_6 = 0;
  }
  VAR_4++;
 }
 return 0;
}
