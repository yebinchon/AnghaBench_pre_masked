
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mux_child {TYPE_5__* ext_info_cache; } ;
struct mux {TYPE_1__* ext_info; TYPE_2__* parent; int control; struct iio_chan_spec* chan; struct mux_child* child; } ;
struct iio_chan_spec {int indexed; char const* datasheet_name; TYPE_1__* ext_info; scalar_t__ channel; int info_mask_separate_available; int info_mask_separate; int type; int output; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int size; scalar_t__* data; } ;
struct TYPE_7__ {struct iio_chan_spec* channel; } ;
struct TYPE_6__ {int name; int read; int write; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*,...) ;
 TYPE_5__* FUNC_2 (struct device*,int,int,int ) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__* FUNC_4 (struct device*,char*,int,int ) ;
 char* FUNC_5 (struct device*,int,int ) ;
 scalar_t__ FUNC_6 (struct iio_chan_spec const*,int ) ;
 scalar_t__ FUNC_7 (struct iio_chan_spec const*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_6, struct mux *VAR_7,
     u32 VAR_8, const char *VAR_9, int VAR_10)
{
 struct mux_child *VAR_11 = &VAR_7->child[VAR_10];
 struct iio_chan_spec *VAR_12 = &VAR_7->chan[VAR_10];
 struct iio_chan_spec const *VAR_13 = VAR_7->parent->channel;
 char *VAR_14 = ((void*)0);
 int VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_12->indexed = 1;
 VAR_12->output = VAR_13->output;
 VAR_12->datasheet_name = VAR_9;
 VAR_12->ext_info = VAR_7->ext_info;

 VAR_17 = FUNC_9(VAR_7->parent, &VAR_12->type);
 if (VAR_17 < 0) {
  FUNC_1(VAR_6, "failed to get parent channel type\n");
  return VAR_17;
 }

 if (FUNC_7(VAR_13, VAR_3))
  VAR_12->info_mask_separate |= FUNC_0(VAR_3);
 if (FUNC_7(VAR_13, VAR_4))
  VAR_12->info_mask_separate |= FUNC_0(VAR_4);

 if (FUNC_6(VAR_13, VAR_3))
  VAR_12->info_mask_separate_available |= FUNC_0(VAR_3);

 if (VAR_8 >= FUNC_11(VAR_7->control)) {
  FUNC_1(VAR_6, "too many channels\n");
  return -VAR_0;
 }

 VAR_12->channel = VAR_8;

 VAR_15 = FUNC_8(VAR_7->parent);
 if (VAR_15) {
  VAR_14 = FUNC_5(VAR_6, VAR_5, VAR_2);
  if (!VAR_14)
   return -VAR_1;
 }
 VAR_11->ext_info_cache = FUNC_2(VAR_6,
          VAR_15,
          sizeof(*VAR_11->ext_info_cache),
          VAR_2);
 if (!VAR_11->ext_info_cache)
  return -VAR_1;

 for (VAR_16 = 0; VAR_16 < VAR_15; ++VAR_16) {
  VAR_11->ext_info_cache[VAR_16].size = -1;

  if (!VAR_13->ext_info[VAR_16].write)
   continue;
  if (!VAR_13->ext_info[VAR_16].read)
   continue;

  VAR_17 = FUNC_10(VAR_7->parent,
      VAR_7->ext_info[VAR_16].name,
      VAR_14);
  if (VAR_17 < 0) {
   FUNC_1(VAR_6, "failed to get ext_info '%s'\n",
    VAR_13->ext_info[VAR_16].name);
   return VAR_17;
  }
  if (VAR_17 >= VAR_5) {
   FUNC_1(VAR_6, "too large ext_info '%s'\n",
    VAR_13->ext_info[VAR_16].name);
   return -VAR_0;
  }

  VAR_11->ext_info_cache[VAR_16].data = FUNC_4(VAR_6, VAR_14, VAR_17 + 1,
            VAR_2);
  if (!VAR_11->ext_info_cache[VAR_16].data)
   return -VAR_1;

  VAR_11->ext_info_cache[VAR_16].data[VAR_17] = 0;
  VAR_11->ext_info_cache[VAR_16].size = VAR_17;
 }

 if (VAR_14)
  FUNC_3(VAR_6, VAR_14);

 return 0;
}
