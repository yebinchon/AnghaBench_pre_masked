
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_tvout {int dummy; } ;
struct drm_display_mode {scalar_t__ vdisplay; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (struct sti_tvout*,int const,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sti_tvout *VAR_5,
       struct drm_display_mode *VAR_6)
{
 unsigned int VAR_7;
 const u32 *VAR_8;

 if (VAR_6->vdisplay >= VAR_2)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_3;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  FUNC_0(VAR_5, *(VAR_8 + VAR_7),
       VAR_1 + (VAR_7 * 4));
  FUNC_0(VAR_5, *(VAR_8 + VAR_7),
       VAR_0 + (VAR_7 * 4));
 }
}
