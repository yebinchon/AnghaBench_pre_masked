
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_tvout {int dummy; } ;
struct drm_encoder {TYPE_1__* crtc; } ;
struct TYPE_2__ {int mode; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct sti_tvout* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct sti_tvout*,int ) ;
 int FUNC_3 (struct sti_tvout*,int *) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_0)
{
 struct sti_tvout *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1, &VAR_0->crtc->mode);

 FUNC_2(VAR_1, FUNC_0(VAR_0->crtc));
}
