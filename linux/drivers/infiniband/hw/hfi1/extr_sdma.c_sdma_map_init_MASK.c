
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdma_vl_map {int actual_vls; int vls; int mask; int* engine_to_vl; int list; TYPE_1__** map; } ;
struct sdma_map_elem {int dummy; } ;
struct sdma_engine {int dummy; } ;
struct hfi1_devdata {int flags; int num_sdma; int sde_map_lock; int sdma_map; int * per_sdma; } ;
struct TYPE_2__ {int mask; int ** sde; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct sdma_vl_map*) ;
 struct sdma_vl_map* FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sdma_vl_map*) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct hfi1_devdata *VAR_6, u8 VAR_7, u8 VAR_8, u8 *VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 0;
 u8 VAR_15[VAR_3];
 struct sdma_vl_map *VAR_16, *VAR_17;

 if (!(VAR_6->flags & VAR_2))
  return 0;

 if (!VAR_9) {

  VAR_13 = VAR_6->num_sdma / VAR_8;

  VAR_12 = VAR_6->num_sdma % VAR_8;
  VAR_9 = VAR_15;

  for (VAR_10 = VAR_8 - 1; VAR_10 >= 0; VAR_10--, VAR_12--)
   VAR_9[VAR_10] = VAR_13 + (VAR_12 > 0 ? 1 : 0);
 }

 VAR_17 = FUNC_2(
  sizeof(struct sdma_vl_map) +
   FUNC_6(VAR_8) *
   sizeof(struct sdma_map_elem *),
  VAR_1);
 if (!VAR_17)
  goto bail;
 VAR_17->actual_vls = VAR_8;
 VAR_17->vls = FUNC_6(VAR_8);
 VAR_17->mask = (1 << FUNC_1(VAR_17->vls)) - 1;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  VAR_17->engine_to_vl[VAR_10] = -1;
 for (VAR_10 = 0; VAR_10 < VAR_17->vls; VAR_10++) {

  int VAR_18 = VAR_14;

  if (VAR_10 < VAR_17->actual_vls) {
   int VAR_19 = FUNC_6(VAR_9[VAR_10]);


   VAR_17->map[VAR_10] = FUNC_2(
    sizeof(struct sdma_map_elem) +
     VAR_19 * sizeof(struct sdma_engine *),
    VAR_1);
   if (!VAR_17->map[VAR_10])
    goto bail;
   VAR_17->map[VAR_10]->mask = (1 << FUNC_1(VAR_19)) - 1;

   for (VAR_11 = 0; VAR_11 < VAR_19; VAR_11++) {
    VAR_17->map[VAR_10]->sde[VAR_11] =
     &VAR_6->per_sdma[VAR_14];
    if (++VAR_14 >= VAR_18 + VAR_9[VAR_10])

     VAR_14 = VAR_18;
   }

   for (VAR_11 = 0; VAR_11 < VAR_9[VAR_10]; VAR_11++)
    VAR_17->engine_to_vl[VAR_18 + VAR_11] = VAR_10;
  } else {

   VAR_17->map[VAR_10] = VAR_17->map[VAR_10 % VAR_8];
  }
  VAR_14 = VAR_18 + VAR_9[VAR_10];
 }

 FUNC_8(&VAR_6->sde_map_lock);
 VAR_16 = FUNC_5(VAR_6->sdma_map,
        FUNC_3(&VAR_6->sde_map_lock));


 FUNC_4(VAR_6->sdma_map, VAR_17);

 FUNC_9(&VAR_6->sde_map_lock);

 if (VAR_16)
  FUNC_0(&VAR_16->list, VAR_5);
 return 0;
bail:

 FUNC_7(VAR_17);
 return -VAR_0;
}
