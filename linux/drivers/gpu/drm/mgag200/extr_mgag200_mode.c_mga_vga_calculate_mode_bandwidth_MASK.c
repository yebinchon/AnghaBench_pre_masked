
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct drm_display_mode {int htotal; int vtotal; int clock; int hdisplay; int vdisplay; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static uint32_t FUNC_1(struct drm_display_mode *VAR_0,
       int VAR_1)
{
 uint32_t VAR_2, VAR_3;
 uint64_t VAR_4, VAR_5, VAR_6;
 uint64_t VAR_7 = (VAR_1 + 7) / 8;

 VAR_3 = 1024;

 if (!VAR_0->htotal || !VAR_0->vtotal || !VAR_0->clock)
  return 0;

 VAR_4 = VAR_0->hdisplay * VAR_0->vdisplay;
 VAR_2 = VAR_0->htotal * VAR_0->vtotal;

 VAR_5 = VAR_4 * VAR_0->clock * 1000;
 FUNC_0(VAR_5, VAR_2);

 VAR_6 = VAR_5 * VAR_7 * 100;
 FUNC_0(VAR_6, VAR_3);

 return (uint32_t)(VAR_6);
}
