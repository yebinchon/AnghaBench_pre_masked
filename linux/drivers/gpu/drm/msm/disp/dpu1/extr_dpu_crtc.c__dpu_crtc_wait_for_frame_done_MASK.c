
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int dummy; } ;
struct dpu_crtc {int frame_done_comp; int frame_pending; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct dpu_crtc* FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct drm_crtc *VAR_2)
{
 struct dpu_crtc *VAR_3 = FUNC_6(VAR_2);
 int VAR_4, VAR_5 = 0;

 if (!FUNC_4(&VAR_3->frame_pending)) {
  FUNC_2("no frames pending\n");
  return 0;
 }

 FUNC_0("frame done completion wait");
 VAR_4 = FUNC_7(&VAR_3->frame_done_comp,
   FUNC_5(VAR_0));
 if (!VAR_4) {
  FUNC_3("frame done wait timed out, ret:%d\n", VAR_4);
  VAR_5 = -VAR_1;
 }
 FUNC_1("frame done completion wait");

 return VAR_5;
}
