
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mce {int microcode; int ppin; int mcgcap; int extcpu; int apicid; int socketid; int cpuid; int cpuvendor; int time; int cpu; } ;
struct TYPE_4__ {int microcode; int x86_vendor; } ;
struct TYPE_3__ {int initial_apicid; int phys_proc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mce*,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(struct mce *VAR_4)
{
 FUNC_3(VAR_4, 0, sizeof(struct mce));
 VAR_4->cpu = VAR_4->extcpu = FUNC_5();

 VAR_4->time = FUNC_0();
 VAR_4->cpuvendor = VAR_3.x86_vendor;
 VAR_4->cpuid = FUNC_2(1);
 VAR_4->socketid = FUNC_1(VAR_4->extcpu).phys_proc_id;
 VAR_4->apicid = FUNC_1(VAR_4->extcpu).initial_apicid;
 FUNC_4(VAR_0, VAR_4->mcgcap);

 if (FUNC_6(VAR_2))
  FUNC_4(VAR_1, VAR_4->ppin);

 VAR_4->microcode = VAR_3.microcode;
}
