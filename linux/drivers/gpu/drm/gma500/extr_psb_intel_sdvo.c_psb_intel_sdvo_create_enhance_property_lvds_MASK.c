
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct psb_intel_sdvo_enhancements_reply {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_6__ {struct drm_connector base; } ;
struct psb_intel_sdvo_connector {TYPE_3__ base; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct psb_intel_sdvo {TYPE_2__ base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_1(struct psb_intel_sdvo *VAR_2,
     struct psb_intel_sdvo_connector *VAR_3,
     struct psb_intel_sdvo_enhancements_reply VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->base.base.dev;
 struct drm_connector *VAR_6 = &VAR_3->base.base;
 uint16_t VAR_7, VAR_8[2];

 FUNC_0(VAR_1, VAR_0);

 return 1;
}
