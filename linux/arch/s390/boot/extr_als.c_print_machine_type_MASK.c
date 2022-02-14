
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuid {int machine; } ;


 int FUNC_0 (struct cpuid*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 static char VAR_0[80] = "Detected machine-type number: ";
 char VAR_1[5];
 struct cpuid VAR_2;

 FUNC_0(&VAR_2);
 FUNC_3(VAR_1, VAR_2.machine);
 FUNC_2(VAR_0, VAR_1);
 FUNC_2(VAR_0, "\n");
 FUNC_1(VAR_0);
}
