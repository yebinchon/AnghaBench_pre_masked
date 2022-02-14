
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int dummy; } ;
struct intel_connector {int dummy; } ;
typedef enum intel_hotplug_state { ____Placeholder_intel_hotplug_state } intel_hotplug_state ;


 int FUNC_0 (struct intel_encoder*,struct intel_connector*,int) ;
 int FUNC_1 (struct intel_encoder*) ;

__attribute__((used)) static enum intel_hotplug_state
FUNC_2(struct intel_encoder *VAR_0,
     struct intel_connector *VAR_1,
     bool VAR_2)
{
 FUNC_1(VAR_0);

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
