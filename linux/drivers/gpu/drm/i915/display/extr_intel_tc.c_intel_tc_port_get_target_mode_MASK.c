
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_digital_port {scalar_t__ tc_legacy_port; } ;
typedef enum tc_port_mode { ____Placeholder_tc_port_mode } tc_port_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct intel_digital_port*) ;
 scalar_t__ FUNC_2 (struct intel_digital_port*) ;

__attribute__((used)) static enum tc_port_mode
FUNC_3(struct intel_digital_port *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_2);

 if (VAR_3)
  return FUNC_0(VAR_3) - 1;

 return FUNC_1(VAR_2) &&
        VAR_2->tc_legacy_port ? VAR_0 :
       VAR_1;
}
