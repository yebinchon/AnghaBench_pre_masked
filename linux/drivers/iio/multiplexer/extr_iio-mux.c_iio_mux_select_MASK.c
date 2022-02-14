
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mux_ext_info_cache {scalar_t__ size; int data; } ;
struct mux_child {struct mux_ext_info_cache* ext_info_cache; } ;
struct mux {int cached_state; int control; int parent; struct iio_chan_spec* chan; struct mux_child* child; } ;
struct iio_chan_spec {scalar_t__ channel; TYPE_1__* ext_info; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (int ,char const*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mux *VAR_0, int VAR_1)
{
 struct mux_child *VAR_2 = &VAR_0->child[VAR_1];
 struct iio_chan_spec const *VAR_3 = &VAR_0->chan[VAR_1];
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_0->control, VAR_3->channel);
 if (VAR_4 < 0) {
  VAR_0->cached_state = -1;
  return VAR_4;
 }

 if (VAR_0->cached_state == VAR_3->channel)
  return 0;

 if (VAR_3->ext_info) {
  for (VAR_5 = 0; VAR_3->ext_info[VAR_5].name; ++VAR_5) {
   const char *VAR_6 = VAR_3->ext_info[VAR_5].name;
   struct mux_ext_info_cache *VAR_7;

   VAR_7 = &VAR_2->ext_info_cache[VAR_5];

   if (VAR_7->size < 0)
    continue;

   VAR_4 = FUNC_0(VAR_0->parent, VAR_6,
        VAR_7->data,
        VAR_7->size);

   if (VAR_4 < 0) {
    FUNC_1(VAR_0->control);
    VAR_0->cached_state = -1;
    return VAR_4;
   }
  }
 }
 VAR_0->cached_state = VAR_3->channel;

 return 0;
}
