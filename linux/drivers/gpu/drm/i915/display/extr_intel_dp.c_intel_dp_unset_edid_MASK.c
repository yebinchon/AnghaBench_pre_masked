
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int has_audio; int aux; struct intel_connector* attached_connector; } ;
struct intel_connector {int * detect_edid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct intel_dp *VAR_0)
{
 struct intel_connector *VAR_1 = VAR_0->attached_connector;

 FUNC_0(&VAR_0->aux);
 FUNC_1(VAR_1->detect_edid);
 VAR_1->detect_edid = ((void*)0);

 VAR_0->has_audio = 0;
}
