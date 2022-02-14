
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int bottom; int top; int right; int left; } ;
struct TYPE_4__ {TYPE_3__ margins; } ;
struct drm_connector_state {TYPE_1__ tv; } ;
struct TYPE_5__ {int bottom; int top; int right; int left; } ;
struct drm_cmdline_mode {TYPE_2__ tv_margins; } ;
struct drm_connector {struct drm_connector_state* state; struct drm_cmdline_mode cmdline_mode; } ;



void FUNC_0(struct drm_connector *VAR_0)
{
 struct drm_cmdline_mode *VAR_1 = &VAR_0->cmdline_mode;
 struct drm_connector_state *VAR_2 = VAR_0->state;

 VAR_2->tv.margins.left = VAR_1->tv_margins.left;
 VAR_2->tv.margins.right = VAR_1->tv_margins.right;
 VAR_2->tv.margins.top = VAR_1->tv_margins.top;
 VAR_2->tv.margins.bottom = VAR_1->tv_margins.bottom;
}
