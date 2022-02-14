
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int helper_private; } ;
struct TYPE_2__ {int (* destroy ) (struct drm_encoder*) ;} ;


 int FUNC_0 (struct drm_encoder*) ;
 TYPE_1__* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_0)
{
 FUNC_1(VAR_0)->destroy(VAR_0);
 FUNC_0(VAR_0);

 FUNC_2(VAR_0->helper_private);
 FUNC_2(FUNC_3(VAR_0));
}
