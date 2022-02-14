
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_encoder {int crtc_mask; int get_config; int get_hw_state; int enable; int pre_enable; int post_pll_disable; int pre_pll_enable; int post_disable; int disable; int compute_config; scalar_t__ cloneable; int port; int power_domain; int type; int base; } ;
struct intel_dp_mst_encoder {int pipe; struct intel_digital_port* primary; struct intel_encoder base; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct TYPE_4__ {int port; int power_domain; TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct drm_device {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int *,int *,int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct intel_dp_mst_encoder* FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static struct intel_dp_mst_encoder *
FUNC_3(struct intel_digital_port *VAR_13, enum pipe VAR_14)
{
 struct intel_dp_mst_encoder *VAR_15;
 struct intel_encoder *VAR_16;
 struct drm_device *VAR_17 = VAR_13->base.base.dev;

 VAR_15 = FUNC_1(sizeof(*VAR_15), VAR_1);

 if (!VAR_15)
  return ((void*)0);

 VAR_15->pipe = VAR_14;
 VAR_16 = &VAR_15->base;
 VAR_15->primary = VAR_13;

 FUNC_0(VAR_17, &VAR_16->base, &VAR_4,
    VAR_0, "DP-MST %c", FUNC_2(VAR_14));

 VAR_16->type = VAR_2;
 VAR_16->power_domain = VAR_13->base.power_domain;
 VAR_16->port = VAR_13->base.port;
 VAR_16->crtc_mask = 0x7;
 VAR_16->cloneable = 0;

 VAR_16->compute_config = VAR_3;
 VAR_16->disable = VAR_7;
 VAR_16->post_disable = VAR_9;
 VAR_16->pre_pll_enable = VAR_12;
 VAR_16->post_pll_disable = VAR_10;
 VAR_16->pre_enable = VAR_11;
 VAR_16->enable = VAR_8;
 VAR_16->get_hw_state = VAR_6;
 VAR_16->get_config = VAR_5;

 return VAR_15;

}
