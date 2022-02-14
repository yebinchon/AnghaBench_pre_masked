
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct intel_sdvo_enhancements_reply {int dummy; } ;
struct drm_connector {TYPE_4__* state; } ;
struct TYPE_7__ {struct drm_connector base; } ;
struct intel_sdvo_connector {TYPE_3__ base; } ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct intel_sdvo {TYPE_2__ base; } ;
struct drm_device {int dummy; } ;
struct TYPE_8__ {int tv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_1(struct intel_sdvo *VAR_2,
     struct intel_sdvo_connector *VAR_3,
     struct intel_sdvo_enhancements_reply VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->base.base.dev;
 struct drm_connector *VAR_6 = &VAR_3->base.base;
 u16 VAR_7, VAR_8[2];

 FUNC_0(&VAR_6->state->tv, VAR_1, VAR_0);

 return 1;
}
