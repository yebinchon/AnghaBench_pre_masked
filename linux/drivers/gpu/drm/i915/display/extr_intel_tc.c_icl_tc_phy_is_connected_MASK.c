
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_digital_port {scalar_t__ tc_mode; int tc_port_name; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct intel_digital_port*) ;
 int FUNC_2 (struct intel_digital_port*) ;

__attribute__((used)) static bool FUNC_3(struct intel_digital_port *VAR_3)
{
 if (!FUNC_2(VAR_3)) {
  FUNC_0("Port %s: PHY status not complete\n",
         VAR_3->tc_port_name);
  return VAR_3->tc_mode == VAR_2;
 }

 if (FUNC_1(VAR_3)) {
  FUNC_0("Port %s: PHY still in safe mode\n",
         VAR_3->tc_port_name);

  return 0;
 }

 return VAR_3->tc_mode == VAR_0 ||
        VAR_3->tc_mode == VAR_1;
}
