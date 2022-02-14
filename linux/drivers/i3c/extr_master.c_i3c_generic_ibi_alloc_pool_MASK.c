
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_ibi_setup {unsigned int num_slots; int max_payload_len; } ;
struct TYPE_2__ {void* data; } ;
struct i3c_generic_ibi_slot {int node; TYPE_1__ base; } ;
struct i3c_generic_ibi_pool {int num_slots; int free_slots; void* payload_buf; struct i3c_generic_ibi_slot* slots; int pending; int lock; } ;
struct i3c_dev_desc {int dummy; } ;


 int VAR_0 ;
 struct i3c_generic_ibi_pool* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i3c_generic_ibi_pool*) ;
 int FUNC_3 (struct i3c_dev_desc*,TYPE_1__*) ;
 void* FUNC_4 (unsigned int,int,int ) ;
 struct i3c_generic_ibi_pool* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

struct i3c_generic_ibi_pool *
FUNC_8(struct i3c_dev_desc *VAR_2,
      const struct i3c_ibi_setup *VAR_3)
{
 struct i3c_generic_ibi_pool *VAR_4;
 struct i3c_generic_ibi_slot *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_5(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_7(&VAR_4->lock);
 FUNC_1(&VAR_4->free_slots);
 FUNC_1(&VAR_4->pending);

 VAR_4->slots = FUNC_4(VAR_3->num_slots, sizeof(*VAR_5), VAR_1);
 if (!VAR_4->slots) {
  VAR_7 = -VAR_0;
  goto err_free_pool;
 }

 if (VAR_3->max_payload_len) {
  VAR_4->payload_buf = FUNC_4(VAR_3->num_slots,
         VAR_3->max_payload_len, VAR_1);
  if (!VAR_4->payload_buf) {
   VAR_7 = -VAR_0;
   goto err_free_pool;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->num_slots; VAR_6++) {
  VAR_5 = &VAR_4->slots[VAR_6];
  FUNC_3(VAR_2, &VAR_5->base);

  if (VAR_3->max_payload_len)
   VAR_5->base.data = VAR_4->payload_buf +
       (VAR_6 * VAR_3->max_payload_len);

  FUNC_6(&VAR_5->node, &VAR_4->free_slots);
  VAR_4->num_slots++;
 }

 return VAR_4;

err_free_pool:
 FUNC_2(VAR_4);
 return FUNC_0(VAR_7);
}
