
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_vl_map {int* engine_to_vl; } ;
struct hfi1_devdata {int sdma_map; } ;


 int VAR_0 ;
 struct sdma_vl_map* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct hfi1_devdata *VAR_1, int VAR_2)
{
 struct sdma_vl_map *VAR_3;
 int VAR_4;


 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return -1;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_1->sdma_map);
 VAR_4 = VAR_3->engine_to_vl[VAR_2];
 FUNC_2();

 return VAR_4;
}
