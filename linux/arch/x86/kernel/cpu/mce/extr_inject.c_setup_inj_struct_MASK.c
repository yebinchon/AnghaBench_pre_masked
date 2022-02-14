
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mce {int microcode; int cpuid; int time; int cpuvendor; } ;
struct TYPE_2__ {int microcode; int x86_vendor; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mce*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mce *VAR_1)
{
 FUNC_2(VAR_1, 0, sizeof(struct mce));

 VAR_1->cpuvendor = VAR_0.x86_vendor;
 VAR_1->time = FUNC_1();
 VAR_1->cpuid = FUNC_0(1);
 VAR_1->microcode = VAR_0.microcode;
}
