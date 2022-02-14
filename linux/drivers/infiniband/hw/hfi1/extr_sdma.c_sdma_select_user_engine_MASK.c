
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct sdma_rht_node {struct sdma_rht_map_elem** map; } ;
struct sdma_rht_map_elem {size_t mask; struct sdma_engine** sde; } ;
struct sdma_engine {int dummy; } ;
struct hfi1_devdata {int sdma_rht; } ;
struct TYPE_2__ {int nr_cpus_allowed; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sdma_rht_node* FUNC_2 (int ,unsigned long*,int ) ;
 int VAR_1 ;
 struct sdma_engine* FUNC_3 (struct hfi1_devdata*,size_t,size_t) ;
 unsigned long FUNC_4 () ;

struct sdma_engine *FUNC_5(struct hfi1_devdata *VAR_2,
         u32 VAR_3, u8 VAR_4)
{
 struct sdma_rht_node *VAR_5;
 struct sdma_engine *VAR_6 = ((void*)0);
 unsigned long VAR_7;





 if (VAR_0->nr_cpus_allowed != 1)
  goto out;

 VAR_7 = FUNC_4();
 FUNC_0();
 VAR_5 = FUNC_2(VAR_2->sdma_rht, &VAR_7,
       VAR_1);

 if (VAR_5 && VAR_5->map[VAR_4]) {
  struct sdma_rht_map_elem *VAR_8 = VAR_5->map[VAR_4];

  VAR_6 = VAR_8->sde[VAR_3 & VAR_8->mask];
 }
 FUNC_1();

 if (VAR_6)
  return VAR_6;

out:
 return FUNC_3(VAR_2, VAR_3, VAR_4);
}
