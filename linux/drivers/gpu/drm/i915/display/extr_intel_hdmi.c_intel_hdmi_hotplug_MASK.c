
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int dummy; } ;
struct intel_connector {int dummy; } ;
typedef enum intel_hotplug_state { ____Placeholder_intel_hotplug_state } intel_hotplug_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_encoder*,struct intel_connector*,int) ;

__attribute__((used)) static enum intel_hotplug_state
FUNC_1(struct intel_encoder *VAR_2,
     struct intel_connector *VAR_3, bool VAR_4)
{
 enum intel_hotplug_state VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_5 == VAR_1 && VAR_4)
  VAR_5 = VAR_0;

 return VAR_5;
}
