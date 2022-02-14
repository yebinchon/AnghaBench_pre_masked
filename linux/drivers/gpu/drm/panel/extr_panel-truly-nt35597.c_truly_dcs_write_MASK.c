
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct truly_nt35597 {int dev; int * dsi; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 struct truly_nt35597* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0, u32 VAR_1)
{
 struct truly_nt35597 *VAR_2 = FUNC_3(VAR_0);
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->dsi); VAR_3++) {
  VAR_4 = FUNC_2(VAR_2->dsi[VAR_3], VAR_1, ((void*)0), 0);
  if (VAR_4 < 0) {
   FUNC_1(VAR_2->dev,
    "cmd 0x%x failed for dsi = %d\n",
    VAR_1, VAR_3);
  }
 }

 return VAR_4;
}
