
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_digital_port {scalar_t__ aux_ch; } ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_digital_port*) ;

__attribute__((used)) static inline enum intel_display_power_domain
FUNC_1(struct intel_digital_port *VAR_2)
{
 return VAR_2->aux_ch == VAR_0 ? VAR_1 :
           FUNC_0(VAR_2);
}
