
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powernv_smp_call_data {int freq; int pstate_id; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,unsigned long,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
 unsigned long VAR_2;
 struct powernv_smp_call_data *VAR_3 = VAR_1;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3->pstate_id = FUNC_0(VAR_2);
 VAR_3->freq = FUNC_3(VAR_3->pstate_id);

 FUNC_2("cpu %d pmsr %016lX pstate_id 0x%x frequency %d kHz\n",
   FUNC_4(), VAR_2, VAR_3->pstate_id,
   VAR_3->freq);
}
