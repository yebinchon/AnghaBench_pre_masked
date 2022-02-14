
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* mst_state; } ;
struct intel_dp {int reset_link_params; int is_mst; TYPE_2__ mst_mgr; } ;
struct TYPE_3__ {scalar_t__ type; int port; } ;
struct intel_digital_port {TYPE_1__ base; struct intel_dp dp; } ;
typedef enum irqreturn { ____Placeholder_irqreturn } irqreturn ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (int ) ;

enum irqreturn
FUNC_5(struct intel_digital_port *VAR_4, bool VAR_5)
{
 struct intel_dp *VAR_6 = &VAR_4->dp;

 if (VAR_5 && VAR_4->base.type == VAR_1) {






  FUNC_0("ignoring long hpd on eDP port %c\n",
         FUNC_4(VAR_4->base.port));
  return VAR_2;
 }

 FUNC_0("got hpd irq on port %c - %s\n",
        FUNC_4(VAR_4->base.port),
        VAR_5 ? "long" : "short");

 if (VAR_5) {
  VAR_6->reset_link_params = 1;
  return VAR_3;
 }

 if (VAR_6->is_mst) {
  if (FUNC_2(VAR_6) == -VAR_0) {




   FUNC_0("MST device may have disappeared %d vs %d\n",
          VAR_6->is_mst, VAR_6->mst_mgr.mst_state);
   VAR_6->is_mst = 0;
   FUNC_1(&VAR_6->mst_mgr,
       VAR_6->is_mst);

   return VAR_3;
  }
 }

 if (!VAR_6->is_mst) {
  bool VAR_7;

  VAR_7 = FUNC_3(VAR_6);

  if (!VAR_7)
   return VAR_3;
 }

 return VAR_2;
}
