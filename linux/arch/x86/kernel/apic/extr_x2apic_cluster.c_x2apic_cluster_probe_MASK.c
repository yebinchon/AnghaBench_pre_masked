
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(void)
{
 if (!VAR_2)
  return 0;

 if (FUNC_0(VAR_0, "x86/x2apic:prepare",
         VAR_3, VAR_1) < 0) {
  FUNC_2("Failed to register X2APIC_PREPARE\n");
  return 0;
 }
 FUNC_1();
 return 1;
}
