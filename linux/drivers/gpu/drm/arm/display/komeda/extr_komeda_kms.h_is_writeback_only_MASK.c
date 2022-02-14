
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_connector {int dummy; } ;
struct TYPE_3__ {struct drm_connector base; } ;
struct komeda_wb_connector {TYPE_1__ base; } ;
struct drm_crtc_state {scalar_t__ connector_mask; int crtc; } ;
struct TYPE_4__ {struct komeda_wb_connector* wb_conn; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct drm_connector*) ;
 TYPE_2__* FUNC_2 (int ) ;

__attribute__((used)) static inline bool FUNC_3(struct drm_crtc_state *VAR_0)
{
 struct komeda_wb_connector *VAR_1 = FUNC_2(VAR_0->crtc)->wb_conn;
 struct drm_connector *VAR_2 = VAR_1 ? &VAR_1->base.base : ((void*)0);

 return VAR_2 && (VAR_0->connector_mask == FUNC_0(FUNC_1(VAR_2)));
}
