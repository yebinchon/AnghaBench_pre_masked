
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_digital_port {int tc_legacy_port; int tc_mode; int tc_port_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct intel_digital_port*,int) ;
 int FUNC_4 (struct intel_digital_port*) ;
 int FUNC_5 (struct intel_digital_port*) ;
 int FUNC_6 (struct intel_digital_port*) ;

__attribute__((used)) static void FUNC_7(struct intel_digital_port *VAR_3,
          int VAR_4)
{
 int VAR_5;

 if (!FUNC_4(VAR_3)) {
  FUNC_1("Port %s: PHY not ready\n",
         VAR_3->tc_port_name);
  goto out_set_tbt_alt_mode;
 }

 if (!FUNC_3(VAR_3, 0) &&
     !FUNC_2(VAR_3->tc_legacy_port))
  goto out_set_tbt_alt_mode;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_3->tc_legacy_port) {
  FUNC_2(VAR_5 != 4);
  VAR_3->tc_mode = VAR_1;

  return;
 }





 if (!(FUNC_6(VAR_3) & FUNC_0(VAR_0))) {
  FUNC_1("Port %s: PHY sudden disconnect\n",
         VAR_3->tc_port_name);
  goto out_set_safe_mode;
 }

 if (VAR_5 < VAR_4) {
  FUNC_1("Port %s: PHY max lanes %d < required lanes %d\n",
         VAR_3->tc_port_name,
         VAR_5, VAR_4);
  goto out_set_safe_mode;
 }

 VAR_3->tc_mode = VAR_0;

 return;

out_set_safe_mode:
 FUNC_3(VAR_3, 1);
out_set_tbt_alt_mode:
 VAR_3->tc_mode = VAR_2;
}
