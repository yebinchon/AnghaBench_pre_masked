
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hcall_stats {int purr_start; int tb_start; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct hcall_stats* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, unsigned long VAR_4, unsigned long *VAR_5)
{
 struct hcall_stats *VAR_6;

 if (VAR_4 > VAR_0)
  return;

 VAR_6 = FUNC_2(&VAR_2[VAR_4 / 4]);
 VAR_6->tb_start = FUNC_1();
 VAR_6->purr_start = FUNC_0(VAR_1);
}
