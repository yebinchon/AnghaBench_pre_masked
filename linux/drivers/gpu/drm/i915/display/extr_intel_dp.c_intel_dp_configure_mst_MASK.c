
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_encoder {int port; } ;
struct intel_dp {int can_mst; int is_mst; int mst_mgr; } ;
struct TYPE_4__ {struct intel_encoder base; } ;
struct TYPE_3__ {int enable_dp_mst; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 TYPE_2__* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (int *,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct intel_dp *VAR_1)
{
 struct intel_encoder *VAR_2 =
  &FUNC_1(VAR_1)->base;
 bool VAR_3 = FUNC_3(VAR_1);

 FUNC_0("MST support? port %c: %s, sink: %s, modparam: %s\n",
        FUNC_4(VAR_2->port), FUNC_5(VAR_1->can_mst),
        FUNC_5(VAR_3), FUNC_5(VAR_0.enable_dp_mst));

 if (!VAR_1->can_mst)
  return;

 VAR_1->is_mst = VAR_3 &&
  VAR_0.enable_dp_mst;

 FUNC_2(&VAR_1->mst_mgr,
     VAR_1->is_mst);
}
