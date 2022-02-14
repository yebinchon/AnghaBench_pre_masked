
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct truly_nt35597 {int dev; int * dsi; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,int const*,int ) ;
 struct truly_nt35597* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0,
 u32 VAR_1, const u8 *VAR_2)
{
 struct truly_nt35597 *VAR_3 = FUNC_3(VAR_0);
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->dsi); VAR_5++) {
  VAR_4 = FUNC_2(VAR_3->dsi[VAR_5], VAR_2, VAR_1);
  if (VAR_4 < 0) {
   FUNC_1(VAR_3->dev,
    "failed to tx cmd [%d], err: %d\n", VAR_5, VAR_4);
   return VAR_4;
  }
 }

 return VAR_4;
}
