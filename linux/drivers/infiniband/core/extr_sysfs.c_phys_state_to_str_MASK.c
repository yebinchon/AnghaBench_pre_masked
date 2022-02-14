
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ib_port_phys_state { ____Placeholder_ib_port_phys_state } ib_port_phys_state ;


 int FUNC_0 (char const**) ;

__attribute__((used)) static const char *FUNC_1(enum ib_port_phys_state VAR_0)
{
 static const char * VAR_1[] = {
  "<unknown>",
  "Sleep",
  "Polling",
  "Disabled",
  "PortConfigurationTraining",
  "LinkUp",
  "LinkErrorRecovery",
  "Phy Test",
 };

 if (VAR_0 < FUNC_0(VAR_1))
  return VAR_1[VAR_0];
 return "<unknown>";
}
