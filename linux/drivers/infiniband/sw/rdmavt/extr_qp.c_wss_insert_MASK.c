
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rvt_wss {unsigned long pages_mask; int total_count; int * entries; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct rvt_wss*) ;

__attribute__((used)) static void FUNC_3(struct rvt_wss *VAR_2, void *VAR_3)
{
 u32 VAR_4 = ((unsigned long)VAR_3 >> VAR_1) & VAR_2->pages_mask;
 u32 VAR_5 = VAR_4 / VAR_0;
 u32 VAR_6 = VAR_4 & (VAR_0 - 1);

 if (!FUNC_1(VAR_6, &VAR_2->entries[VAR_5]))
  FUNC_0(&VAR_2->total_count);

 FUNC_2(VAR_2);
}
