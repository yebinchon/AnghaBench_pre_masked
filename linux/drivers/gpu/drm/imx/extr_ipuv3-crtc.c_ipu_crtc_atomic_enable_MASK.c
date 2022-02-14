
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_soc {int dummy; } ;
struct ipu_crtc {int di; int dc; TYPE_1__* dev; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int parent; } ;


 struct ipu_soc* FUNC_0 (int ) ;
 int FUNC_1 (struct ipu_soc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ipu_soc*) ;
 struct ipu_crtc* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_0,
       struct drm_crtc_state *VAR_1)
{
 struct ipu_crtc *VAR_2 = FUNC_5(VAR_0);
 struct ipu_soc *VAR_3 = FUNC_0(VAR_2->dev->parent);

 FUNC_4(VAR_3);
 FUNC_1(VAR_3);
 FUNC_2(VAR_2->dc);
 FUNC_3(VAR_2->di);
}
