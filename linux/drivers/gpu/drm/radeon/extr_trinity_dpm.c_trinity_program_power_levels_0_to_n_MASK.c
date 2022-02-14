
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct trinity_ps {int num_levels; int * levels; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;


 struct trinity_ps* FUNC_0 (struct radeon_ps*) ;
 int FUNC_1 (struct radeon_device*,size_t,int) ;
 int FUNC_2 (struct radeon_device*,int *,size_t) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0,
      struct radeon_ps *VAR_1,
      struct radeon_ps *VAR_2)
{
 struct trinity_ps *VAR_3 = FUNC_0(VAR_1);
 struct trinity_ps *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5;
 u32 VAR_6 = (VAR_4 == ((void*)0)) ? 1 : VAR_4->num_levels;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_levels; VAR_5++) {
  FUNC_2(VAR_0, &VAR_3->levels[VAR_5], VAR_5);
  FUNC_1(VAR_0, VAR_5, 1);
 }

 for (VAR_5 = VAR_3->num_levels; VAR_5 < VAR_6; VAR_5++)
  FUNC_1(VAR_0, VAR_5, 0);
}
