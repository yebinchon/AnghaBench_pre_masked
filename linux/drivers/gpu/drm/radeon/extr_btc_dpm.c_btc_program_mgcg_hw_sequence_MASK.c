
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const,int) ;

void FUNC_2(struct radeon_device *VAR_0,
      const u32 *VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4 = VAR_2 * 3;
 u32 VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3+=3) {
  VAR_5 = FUNC_0(VAR_1[VAR_3]);
  VAR_5 &= ~VAR_1[VAR_3+2];
  VAR_5 |= VAR_1[VAR_3+1] & VAR_1[VAR_3+2];
  FUNC_1(VAR_1[VAR_3], VAR_5);
 }
}
