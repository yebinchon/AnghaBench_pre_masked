
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {int state; } ;
struct dpu_plane {int dummy; } ;


 int FUNC_0 (struct dpu_plane*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_plane*,int ) ;
 struct dpu_plane* FUNC_3 (struct drm_plane*) ;

void FUNC_4(struct drm_plane *VAR_0)
{
 struct dpu_plane *VAR_1;

 if (!VAR_0 || !VAR_0->state) {
  FUNC_1("invalid plane\n");
  return;
 }

 VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1, "\n");


 FUNC_2(VAR_0, VAR_0->state);
}
