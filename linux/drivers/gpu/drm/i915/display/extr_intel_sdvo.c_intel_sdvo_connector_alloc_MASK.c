
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int base; } ;
struct intel_sdvo_connector_state {TYPE_2__ base; } ;
struct TYPE_3__ {int base; } ;
struct intel_sdvo_connector {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct intel_sdvo_connector*) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static struct intel_sdvo_connector *FUNC_3(void)
{
 struct intel_sdvo_connector *VAR_1;
 struct intel_sdvo_connector_state *VAR_2;

 VAR_1 = FUNC_2(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 FUNC_0(&VAR_1->base.base,
         &VAR_2->base.base);

 return VAR_1;
}
