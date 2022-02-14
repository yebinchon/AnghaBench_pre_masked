
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvt_wss {int num_entries; int total_count; int * entries; int clean_entry; int clean_period; int clean_counter; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct rvt_wss *VAR_0)
{
 int VAR_1;
 int VAR_2;
 unsigned long VAR_3;


 if (FUNC_0(&VAR_0->clean_counter)) {
  FUNC_2(&VAR_0->clean_counter, VAR_0->clean_period);







  VAR_1 = (FUNC_1(&VAR_0->clean_entry) - 1)
   & (VAR_0->num_entries - 1);


  VAR_3 = FUNC_5(&VAR_0->entries[VAR_1], 0);
  VAR_2 = FUNC_4((u64)VAR_3);

  if (VAR_2)
   FUNC_3(VAR_2, &VAR_0->total_count);
 }
}
