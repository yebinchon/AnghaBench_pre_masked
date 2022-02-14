
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct malidp_hw_device {int dummy; } ;



 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct malidp_hw_device *VAR_1, u16 VAR_2,
         u16 VAR_3, u32 VAR_4, bool VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_4) {

 case 128:
  VAR_6 = 32;
  break;
 default:
  VAR_6 = FUNC_0(VAR_4);
 }

 if (VAR_6 == -VAR_0)
  return VAR_6;

 return VAR_2 * VAR_6;
}
