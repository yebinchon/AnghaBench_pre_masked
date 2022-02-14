
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int aux; int has_audio; struct intel_connector* attached_connector; } ;
struct intel_connector {struct edid* detect_edid; } ;
struct edid {int dummy; } ;


 int FUNC_0 (struct edid*) ;
 int FUNC_1 (int *,struct edid*) ;
 struct edid* FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (struct intel_dp*) ;

__attribute__((used)) static void
FUNC_4(struct intel_dp *VAR_0)
{
 struct intel_connector *VAR_1 = VAR_0->attached_connector;
 struct edid *VAR_2;

 FUNC_3(VAR_0);
 VAR_2 = FUNC_2(VAR_0);
 VAR_1->detect_edid = VAR_2;

 VAR_0->has_audio = FUNC_0(VAR_2);
 FUNC_1(&VAR_0->aux, VAR_2);
}
