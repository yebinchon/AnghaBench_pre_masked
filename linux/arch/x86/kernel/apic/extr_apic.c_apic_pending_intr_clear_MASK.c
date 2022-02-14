
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union apic_ir {int map; } ;


 int FUNC_0 (union apic_ir*,union apic_ir*) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 union apic_ir VAR_0, VAR_1;
 unsigned int VAR_2;


 for (VAR_2 = 0; VAR_2 < 512; VAR_2++) {
  if (!FUNC_0(&VAR_0, &VAR_1))
   return;
 }

 FUNC_1("APIC: Stale IRR: %256pb ISR: %256pb\n", VAR_0.map, VAR_1.map);
}
