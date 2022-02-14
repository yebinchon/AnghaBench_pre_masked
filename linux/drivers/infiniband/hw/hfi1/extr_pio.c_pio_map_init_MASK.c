
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct send_context {int dummy; } ;
struct pio_vl_map {int actual_vls; int vls; int mask; int list; TYPE_2__** map; } ;
struct pio_map_elem {int dummy; } ;
struct hfi1_devdata {int num_send_contexts; int pio_map_lock; int pio_map; scalar_t__* kernel_send_context; TYPE_1__* send_contexts; } ;
struct TYPE_4__ {int mask; scalar_t__* ksc; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pio_vl_map*) ;
 int VAR_4 ;
 int FUNC_5 (int ,struct pio_vl_map*) ;
 struct pio_vl_map* FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct hfi1_devdata*,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct hfi1_devdata *VAR_5, u8 VAR_6, u8 VAR_7, u8 *VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11, VAR_12;
 int VAR_13 = 1;
 int VAR_14 = 0;
 u8 VAR_15[VAR_2];
 struct pio_vl_map *VAR_16, *VAR_17;

 if (!VAR_8) {
  for (VAR_9 = 0; VAR_9 < VAR_5->num_send_contexts; VAR_9++)
   if (VAR_5->send_contexts[VAR_9].type == VAR_3)
    VAR_14++;

  VAR_12 = VAR_14 / VAR_7;

  VAR_11 = VAR_14 % VAR_7;
  VAR_8 = VAR_15;

  for (VAR_9 = VAR_7 - 1; VAR_9 >= 0; VAR_9--, VAR_11--)
   VAR_8[VAR_9] = VAR_12 + (VAR_11 > 0 ? 1 : 0);
 }

 VAR_17 = FUNC_2(sizeof(*VAR_17) +
    FUNC_7(VAR_7) *
    sizeof(struct pio_map_elem *),
    VAR_1);
 if (!VAR_17)
  goto bail;
 VAR_17->actual_vls = VAR_7;
 VAR_17->vls = FUNC_7(VAR_7);
 VAR_17->mask = (1 << FUNC_1(VAR_17->vls)) - 1;
 for (VAR_9 = 0; VAR_9 < VAR_17->vls; VAR_9++) {

  int VAR_18 = VAR_13;

  if (VAR_9 < VAR_17->actual_vls) {
   int VAR_19 = FUNC_7(VAR_8[VAR_9]);


   VAR_17->map[VAR_9] = FUNC_2(sizeof(*VAR_17->map[VAR_9]) +
       VAR_19 * sizeof(struct
            send_context *),
       VAR_1);
   if (!VAR_17->map[VAR_9])
    goto bail;
   VAR_17->map[VAR_9]->mask = (1 << FUNC_1(VAR_19)) - 1;




   for (VAR_10 = 0; VAR_10 < VAR_19; VAR_10++) {
    if (VAR_5->kernel_send_context[VAR_13]) {
     VAR_17->map[VAR_9]->ksc[VAR_10] =
     VAR_5->kernel_send_context[VAR_13];
     FUNC_8(VAR_5, VAR_13, VAR_9);
    }
    if (++VAR_13 >= VAR_18 +
        VAR_8[VAR_9])

     VAR_13 = VAR_18;
   }
  } else {

   VAR_17->map[VAR_9] = VAR_17->map[VAR_9 % VAR_7];
  }
  VAR_13 = VAR_18 + VAR_8[VAR_9];
 }

 FUNC_9(&VAR_5->pio_map_lock);
 VAR_16 = FUNC_6(VAR_5->pio_map,
        FUNC_3(&VAR_5->pio_map_lock));


 FUNC_5(VAR_5->pio_map, VAR_17);

 FUNC_10(&VAR_5->pio_map_lock);

 if (VAR_16)
  FUNC_0(&VAR_16->list, VAR_4);
 return 0;
bail:

 FUNC_4(VAR_17);
 return -VAR_0;
}
