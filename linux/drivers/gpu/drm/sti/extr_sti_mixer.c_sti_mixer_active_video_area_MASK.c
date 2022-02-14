
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_mixer {int dummy; } ;
struct drm_display_mode {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;


 int FUNC_0 (char*,int ,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sti_mixer*,int ,int) ;
 int FUNC_2 (struct sti_mixer*,struct drm_display_mode*) ;
 int FUNC_3 (struct sti_mixer*,int ) ;
 int FUNC_4 (struct sti_mixer*,int) ;
 int FUNC_5 (struct sti_mixer*) ;
 int FUNC_6 (struct drm_display_mode,scalar_t__) ;
 int FUNC_7 (struct drm_display_mode,scalar_t__) ;

int FUNC_8(struct sti_mixer *VAR_3,
    struct drm_display_mode *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_6(*VAR_4, 0);
 VAR_7 = FUNC_6(*VAR_4, VAR_4->vdisplay - 1);
 VAR_6 = FUNC_7(*VAR_4, 0);
 VAR_8 = FUNC_7(*VAR_4, VAR_4->hdisplay - 1);

 FUNC_0("%s active video area xdo:%d ydo:%d xds:%d yds:%d\n",
    FUNC_5(VAR_3), VAR_6, VAR_5, VAR_8, VAR_7);
 FUNC_1(VAR_3, VAR_0, VAR_5 << 16 | VAR_6);
 FUNC_1(VAR_3, VAR_1, VAR_7 << 16 | VAR_8);

 FUNC_3(VAR_3, VAR_2);

 FUNC_2(VAR_3, VAR_4);
 FUNC_4(VAR_3, 1);
 return 0;
}
