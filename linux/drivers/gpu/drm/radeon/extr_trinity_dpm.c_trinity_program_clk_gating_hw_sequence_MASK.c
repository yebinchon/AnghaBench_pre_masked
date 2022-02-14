
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int const,int const,int const) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_0,
         const u32 *VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4 = VAR_2 * 3;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3 += 3)
  FUNC_0(VAR_1[VAR_3], VAR_1[VAR_3+1], ~VAR_1[VAR_3+2]);
}
