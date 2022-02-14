
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sdvo {int ddc; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*) ;
 struct intel_sdvo* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_0)
{
 struct intel_sdvo *VAR_1 = FUNC_3(FUNC_2(VAR_0));

 FUNC_0(&VAR_1->ddc);
 FUNC_1(VAR_0);
}
