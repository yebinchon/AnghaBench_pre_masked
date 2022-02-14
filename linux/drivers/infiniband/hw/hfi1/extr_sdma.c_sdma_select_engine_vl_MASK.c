
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct sdma_vl_map {size_t mask; struct sdma_map_elem** map; } ;
struct sdma_map_elem {size_t mask; struct sdma_engine** sde; } ;
struct sdma_engine {int this_idx; } ;
struct hfi1_devdata {struct sdma_engine* per_sdma; int sdma_map; } ;


 size_t VAR_0 ;
 struct sdma_vl_map* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct hfi1_devdata*,size_t,size_t,int ) ;
 scalar_t__ FUNC_4 (int) ;

struct sdma_engine *FUNC_5(
 struct hfi1_devdata *VAR_1,
 u32 VAR_2,
 u8 VAR_3)
{
 struct sdma_vl_map *VAR_4;
 struct sdma_map_elem *VAR_5;
 struct sdma_engine *VAR_6;





 if (VAR_3 >= VAR_0) {
  VAR_6 = ((void*)0);
  goto done;
 }

 FUNC_1();
 VAR_4 = FUNC_0(VAR_1->sdma_map);
 if (FUNC_4(!VAR_4)) {
  FUNC_2();
  return &VAR_1->per_sdma[0];
 }
 VAR_5 = VAR_4->map[VAR_3 & VAR_4->mask];
 VAR_6 = VAR_5->sde[VAR_2 & VAR_5->mask];
 FUNC_2();

done:
 VAR_6 = !VAR_6 ? &VAR_1->per_sdma[0] : VAR_6;
 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_6->this_idx);
 return VAR_6;
}
