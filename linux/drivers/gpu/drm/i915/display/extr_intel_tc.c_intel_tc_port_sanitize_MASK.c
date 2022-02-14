
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ crtc; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct TYPE_4__ {scalar_t__ is_mst; } ;
struct intel_digital_port {int tc_lock; int tc_mode; int tc_port_name; scalar_t__ tc_legacy_port; TYPE_1__ dp; struct intel_encoder base; } ;
struct TYPE_6__ {int active; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct intel_digital_port*,int) ;
 int FUNC_2 (struct intel_digital_port*) ;
 int FUNC_3 (struct intel_digital_port*) ;
 int FUNC_4 (struct intel_digital_port*) ;
 int FUNC_5 (struct intel_digital_port*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (scalar_t__) ;

void FUNC_10(struct intel_digital_port *VAR_0)
{
 struct intel_encoder *VAR_1 = &VAR_0->base;
 int VAR_2 = 0;

 FUNC_6(&VAR_0->tc_lock);

 VAR_0->tc_mode = FUNC_4(VAR_0);
 if (VAR_0->dp.is_mst)
  VAR_2 = FUNC_3(VAR_0);
 else if (VAR_1->base.crtc)
  VAR_2 = FUNC_9(VAR_1->base.crtc)->active;

 if (VAR_2) {
  if (!FUNC_2(VAR_0))
   FUNC_0("Port %s: PHY disconnected with %d active link(s)\n",
          VAR_0->tc_port_name, VAR_2);
  FUNC_5(VAR_0, VAR_2);

  goto out;
 }

 if (VAR_0->tc_legacy_port)
  FUNC_1(VAR_0, 1);

out:
 FUNC_0("Port %s: sanitize mode (%s)\n",
        VAR_0->tc_port_name,
        FUNC_8(VAR_0->tc_mode));

 FUNC_7(&VAR_0->tc_lock);
}
