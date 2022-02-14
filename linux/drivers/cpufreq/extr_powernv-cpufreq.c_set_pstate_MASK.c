
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powernv_smp_call_data {unsigned long pstate_id; unsigned long gpstate_id; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 unsigned long VAR_2;
 struct powernv_smp_call_data *VAR_3 = VAR_1;
 unsigned long VAR_4 = VAR_3->pstate_id;
 unsigned long VAR_5 = VAR_3->gpstate_id;

 VAR_2 = FUNC_0(VAR_0);
 VAR_2 = VAR_2 & 0x0000FFFFFFFFFFFFULL;

 VAR_4 = VAR_4 & 0xFF;
 VAR_5 = VAR_5 & 0xFF;


 VAR_2 = VAR_2 | (VAR_5 << 56) | (VAR_4 << 48);

 FUNC_1("Setting cpu %d pmcr to %016lX\n",
   FUNC_2(), VAR_2);
 FUNC_3(VAR_0, VAR_2);
}
