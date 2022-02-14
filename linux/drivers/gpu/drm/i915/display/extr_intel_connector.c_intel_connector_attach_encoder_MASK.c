
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int base; } ;
struct intel_connector {int base; struct intel_encoder* encoder; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct intel_connector *VAR_0,
        struct intel_encoder *VAR_1)
{
 VAR_0->encoder = VAR_1;
 FUNC_0(&VAR_0->base, &VAR_1->base);
}
