
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_digital_port {int tc_legacy_port; int tc_port_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct intel_digital_port *VAR_3,
          u32 VAR_4)
{
 u32 VAR_5;

 if (VAR_3->tc_legacy_port)
  VAR_5 = FUNC_0(VAR_1);
 else
  VAR_5 = FUNC_0(VAR_0) |
     FUNC_0(VAR_2);

 if (!(VAR_4 & ~VAR_5))
  return;


 FUNC_1("Port %s: live status %08x mismatches the legacy port flag, fix flag\n",
    VAR_3->tc_port_name, VAR_4);

 VAR_3->tc_legacy_port = !VAR_3->tc_legacy_port;
}
