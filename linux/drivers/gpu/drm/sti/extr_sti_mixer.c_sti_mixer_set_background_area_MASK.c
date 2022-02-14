
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_mixer {int dummy; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sti_mixer*,int ,int) ;
 int FUNC_1 (struct drm_display_mode,scalar_t__) ;
 int FUNC_2 (struct drm_display_mode,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sti_mixer *VAR_2,
       struct drm_display_mode *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_1(*VAR_3, 0);
 VAR_6 = FUNC_1(*VAR_3, VAR_3->vdisplay - 1);
 VAR_5 = FUNC_2(*VAR_3, 0);
 VAR_7 = FUNC_2(*VAR_3, VAR_3->hdisplay - 1);

 FUNC_0(VAR_2, VAR_0, VAR_4 << 16 | VAR_5);
 FUNC_0(VAR_2, VAR_1, VAR_6 << 16 | VAR_7);
}
