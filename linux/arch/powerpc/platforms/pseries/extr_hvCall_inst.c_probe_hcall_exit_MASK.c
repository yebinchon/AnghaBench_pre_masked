
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hcall_stats {scalar_t__ purr_start; int purr_total; scalar_t__ tb_start; int tb_total; int num_calls; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 struct hcall_stats* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, unsigned long VAR_4, long VAR_5,
        unsigned long *VAR_6)
{
 struct hcall_stats *VAR_7;

 if (VAR_4 > VAR_0)
  return;

 VAR_7 = FUNC_2(&VAR_2[VAR_4 / 4]);
 VAR_7->num_calls++;
 VAR_7->tb_total += FUNC_1() - VAR_7->tb_start;
 VAR_7->purr_total += FUNC_0(VAR_1) - VAR_7->purr_start;
}
