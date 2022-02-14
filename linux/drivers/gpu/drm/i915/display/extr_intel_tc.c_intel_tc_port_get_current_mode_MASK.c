
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_digital_port {scalar_t__ tc_legacy_port; } ;
typedef enum tc_port_mode { ____Placeholder_tc_port_mode } tc_port_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct intel_digital_port*) ;
 int FUNC_3 (struct intel_digital_port*) ;
 scalar_t__ FUNC_4 (struct intel_digital_port*) ;

__attribute__((used)) static enum tc_port_mode
FUNC_5(struct intel_digital_port *VAR_3)
{
 u32 VAR_4 = FUNC_4(VAR_3);
 bool VAR_5 = FUNC_2(VAR_3);
 enum tc_port_mode VAR_6;

 if (VAR_5 || FUNC_0(!FUNC_3(VAR_3)))
  return VAR_2;

 VAR_6 = VAR_3->tc_legacy_port ? VAR_1 : VAR_0;
 if (VAR_4) {
  enum tc_port_mode VAR_7 = FUNC_1(VAR_4) - 1;

  if (!FUNC_0(VAR_7 == VAR_2))
   VAR_6 = VAR_7;
 }

 return VAR_6;
}
