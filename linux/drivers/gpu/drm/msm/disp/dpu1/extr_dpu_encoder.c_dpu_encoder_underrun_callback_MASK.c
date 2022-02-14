
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct dpu_encoder_phys {int underrun_cnt; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_0,
  struct dpu_encoder_phys *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0("encoder_underrun_callback");
 FUNC_3(&VAR_1->underrun_cnt);
 FUNC_5(FUNC_2(VAR_0),
      FUNC_4(&VAR_1->underrun_cnt));
 FUNC_1("encoder_underrun_callback");
}
