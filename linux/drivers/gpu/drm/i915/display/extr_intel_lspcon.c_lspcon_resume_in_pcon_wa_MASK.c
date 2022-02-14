
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_lspcon {int dummy; } ;
struct intel_dp {int dummy; } ;
struct intel_digital_port {int base; } ;


 int FUNC_0 (char*,...) ;
 struct intel_digital_port* FUNC_1 (struct intel_dp*) ;
 scalar_t__ FUNC_2 (int *) ;
 unsigned long VAR_0 ;
 int FUNC_3 (unsigned long) ;
 struct intel_dp* FUNC_4 (struct intel_lspcon*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (unsigned long,scalar_t__) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct intel_lspcon *VAR_1)
{
 struct intel_dp *VAR_2 = FUNC_4(VAR_1);
 struct intel_digital_port *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4 = VAR_0;

 while (1) {
  if (FUNC_2(&VAR_3->base)) {
   FUNC_0("LSPCON recovering in PCON mode after %u ms\n",
          FUNC_3(VAR_0 - VAR_4));
   return;
  }

  if (FUNC_6(VAR_0, VAR_4 + FUNC_5(1000)))
   break;

  FUNC_7(10000, 15000);
 }

 FUNC_0("LSPCON DP descriptor mismatch after resume\n");
}
