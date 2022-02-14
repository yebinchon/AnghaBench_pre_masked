
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_crtc_state {int connectors_changed; } ;
struct TYPE_3__ {scalar_t__ left; scalar_t__ right; scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_4__ {scalar_t__ mode; TYPE_1__ margins; } ;
struct drm_connector_state {TYPE_2__ tv; int crtc; } ;
struct drm_connector {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 struct drm_connector_state* FUNC_0 (struct drm_atomic_state*,struct drm_connector*) ;
 struct drm_crtc_state* FUNC_1 (struct drm_atomic_state*,int ) ;
 struct drm_connector_state* FUNC_2 (struct drm_atomic_state*,struct drm_connector*) ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_0,
     struct drm_atomic_state *VAR_1)
{
 struct drm_connector_state *VAR_2;
 struct drm_crtc_state *VAR_3;
 struct drm_connector_state *VAR_4;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_2->crtc)
  return 0;

 VAR_4 = FUNC_2(VAR_1, VAR_0);
 VAR_3 = FUNC_1(VAR_1, VAR_2->crtc);

 if (VAR_4->tv.mode != VAR_2->tv.mode ||
     VAR_4->tv.margins.left != VAR_2->tv.margins.left ||
     VAR_4->tv.margins.right != VAR_2->tv.margins.right ||
     VAR_4->tv.margins.top != VAR_2->tv.margins.top ||
     VAR_4->tv.margins.bottom != VAR_2->tv.margins.bottom) {


  VAR_3->connectors_changed = 1;
 }

 return 0;
}
