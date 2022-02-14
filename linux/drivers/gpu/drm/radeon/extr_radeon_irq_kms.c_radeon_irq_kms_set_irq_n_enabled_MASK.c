
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*,char const*,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

void FUNC_3(struct radeon_device *VAR_0,
          u32 VAR_1, u32 VAR_2,
          bool VAR_3, const char *VAR_4, unsigned VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_1);


 if (!!(VAR_6 & VAR_2) == VAR_3)
  return;

 if (VAR_3) {
  FUNC_0("%s%d interrupts enabled\n", VAR_4, VAR_5);
  FUNC_2(VAR_1, VAR_6 |= VAR_2);
 } else {
  FUNC_0("%s%d interrupts disabled\n", VAR_4, VAR_5);
  FUNC_2(VAR_1, VAR_6 & ~VAR_2);
 }
}
