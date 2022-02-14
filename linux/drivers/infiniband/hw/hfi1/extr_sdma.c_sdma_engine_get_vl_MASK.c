
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdma_vl_map {int* engine_to_vl; } ;
struct sdma_engine {size_t this_idx; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int sdma_map; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct sdma_vl_map* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct sdma_engine *VAR_2)
{
 struct hfi1_devdata *VAR_3 = VAR_2->dd;
 struct sdma_vl_map *VAR_4;
 u8 VAR_5;

 if (VAR_2->this_idx >= VAR_1)
  return -VAR_0;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_3->sdma_map);
 if (FUNC_3(!VAR_4)) {
  FUNC_2();
  return -VAR_0;
 }
 VAR_5 = VAR_4->engine_to_vl[VAR_2->this_idx];
 FUNC_2();

 return VAR_5;
}
