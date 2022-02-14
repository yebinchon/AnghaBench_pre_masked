
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pad_bytes; int buf_size; void* format_val; scalar_t__ format_write; void* format_reg; int parse_val; void* parse_inplace; void* val_bytes; void* reg_bytes; } ;
struct regmap_range_node {int reg_shift; int reg_stride; int reg_stride_order; int use_single_read; int use_single_write; int can_multi_write; scalar_t__ max_register; int defer_caching; unsigned int range_min; unsigned int range_max; scalar_t__ selector_reg; unsigned int window_start; scalar_t__ window_len; int name; scalar_t__ hwlock; struct regmap_range_node* work_buf; int * selector_work_buf; TYPE_1__ format; struct device* dev; int selector_shift; int selector_mask; struct regmap_range_node* map; int range_tree; int reg_write; int reg_update_bits; int reg_read; scalar_t__ read_flag_mask; scalar_t__ write_flag_mask; int async_waitq; int async_free; int async_list; int async_lock; int cache_type; int readable_noinc_reg; int writeable_noinc_reg; int precious_reg; int volatile_reg; int readable_reg; int writeable_reg; int rd_noinc_table; int wr_noinc_table; int precious_table; int volatile_table; int rd_table; int wr_table; void* bus_context; struct regmap_bus const* bus; int max_raw_write; int max_raw_read; int alloc_flags; struct regmap_range_node* lock_arg; int mutex; scalar_t__ unlock; scalar_t__ lock; int spinlock; } ;
struct regmap_range_cfg {scalar_t__ range_max; scalar_t__ range_min; scalar_t__ selector_reg; scalar_t__ window_len; unsigned int window_start; int selector_shift; int selector_mask; int name; } ;
struct regmap_config {int hwlock_mode; int reg_bits; int pad_bits; int val_bits; int reg_stride; scalar_t__ max_register; int num_ranges; int name; struct regmap_range_cfg* ranges; int reg_write; int reg_read; scalar_t__ write_flag_mask; scalar_t__ read_flag_mask; scalar_t__ zero_flag_mask; int cache_type; int readable_noinc_reg; int writeable_noinc_reg; int precious_reg; int volatile_reg; int readable_reg; int writeable_reg; int rd_noinc_table; int wr_noinc_table; int precious_table; int volatile_table; int rd_table; int wr_table; scalar_t__ can_multi_write; scalar_t__ use_single_write; scalar_t__ use_single_read; scalar_t__ fast_io; int hwlock_id; scalar_t__ use_hwlock; struct regmap_range_node* lock_arg; scalar_t__ unlock; scalar_t__ lock; scalar_t__ disable_locking; } ;
struct regmap_bus {int reg_update_bits; scalar_t__ write; int read; scalar_t__ read_flag_mask; int max_raw_write; int max_raw_read; scalar_t__ fast_io; } ;
struct regmap {int reg_shift; int reg_stride; int reg_stride_order; int use_single_read; int use_single_write; int can_multi_write; scalar_t__ max_register; int defer_caching; unsigned int range_min; unsigned int range_max; scalar_t__ selector_reg; unsigned int window_start; scalar_t__ window_len; int name; scalar_t__ hwlock; struct regmap* work_buf; int * selector_work_buf; TYPE_1__ format; struct device* dev; int selector_shift; int selector_mask; struct regmap* map; int range_tree; int reg_write; int reg_update_bits; int reg_read; scalar_t__ read_flag_mask; scalar_t__ write_flag_mask; int async_waitq; int async_free; int async_list; int async_lock; int cache_type; int readable_noinc_reg; int writeable_noinc_reg; int precious_reg; int volatile_reg; int readable_reg; int writeable_reg; int rd_noinc_table; int wr_noinc_table; int precious_table; int volatile_table; int rd_table; int wr_table; void* bus_context; struct regmap_bus const* bus; int max_raw_write; int max_raw_read; int alloc_flags; struct regmap* lock_arg; int mutex; scalar_t__ unlock; scalar_t__ lock; int spinlock; } ;
struct lock_class_key {int dummy; } ;
struct device {int dummy; } ;
typedef enum regmap_endian { ____Placeholder_regmap_endian } regmap_endian ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct regmap_range_node* FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_2 (int *) ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct regmap_range_node*,struct regmap_range_node*) ;
 int FUNC_4 (struct device*,char*,int,...) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct regmap_range_node*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 void* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,struct lock_class_key*,char const*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct regmap_range_node*) ;
 int FUNC_17 (struct regmap_range_node*,struct regmap_config const*) ;
 int FUNC_18 (struct device*,struct regmap_range_node*,struct regmap_config const*) ;
 int FUNC_19 (struct regmap_range_node*) ;
 int FUNC_20 (struct regmap_range_node*,int ) ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 scalar_t__ VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 scalar_t__ VAR_24 ;
 void* VAR_25 ;
 int FUNC_21 (struct regmap_bus const*,struct regmap_config const*) ;
 int FUNC_22 (struct device*,struct regmap_bus const*,struct regmap_config const*) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 void* VAR_33 ;
 int VAR_34 ;
 void* VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 void* VAR_39 ;
 int VAR_40 ;
 void* VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 void* VAR_44 ;
 int VAR_45 ;
 void* VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 void* VAR_49 ;
 int FUNC_23 (struct regmap_range_node*) ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 int FUNC_24 (int *) ;

struct regmap *FUNC_25(struct device *VAR_55,
        const struct regmap_bus *VAR_56,
        void *VAR_57,
        const struct regmap_config *VAR_58,
        struct lock_class_key *VAR_59,
        const char *VAR_60)
{
 struct regmap *VAR_61;
 int VAR_62 = -VAR_0;
 enum regmap_endian VAR_63, VAR_64;
 int VAR_65, VAR_66;

 if (!VAR_58)
  goto err;

 VAR_61 = FUNC_13(sizeof(*VAR_61), VAR_4);
 if (VAR_61 == ((void*)0)) {
  VAR_62 = -VAR_1;
  goto err;
 }

 if (VAR_58->name) {
  VAR_61->name = FUNC_12(VAR_58->name, VAR_4);
  if (!VAR_61->name) {
   VAR_62 = -VAR_1;
   goto err_map;
  }
 }

 if (VAR_58->disable_locking) {
  VAR_61->lock = VAR_61->unlock = VAR_31;
  FUNC_19(VAR_61);
 } else if (VAR_58->lock && VAR_58->unlock) {
  VAR_61->lock = VAR_58->lock;
  VAR_61->unlock = VAR_58->unlock;
  VAR_61->lock_arg = VAR_58->lock_arg;
 } else if (VAR_58->use_hwlock) {
  VAR_61->hwlock = FUNC_6(VAR_58->hwlock_id);
  if (!VAR_61->hwlock) {
   VAR_62 = -VAR_2;
   goto err_name;
  }

  switch (VAR_58->hwlock_mode) {
  case 131:
   VAR_61->lock = VAR_28;
   VAR_61->unlock = VAR_52;
   break;
  case 132:
   VAR_61->lock = VAR_27;
   VAR_61->unlock = VAR_51;
   break;
  default:
   VAR_61->lock = VAR_26;
   VAR_61->unlock = VAR_50;
   break;
  }

  VAR_61->lock_arg = VAR_61;
 } else {
  if ((VAR_56 && VAR_56->fast_io) ||
      VAR_58->fast_io) {
   FUNC_24(&VAR_61->spinlock);
   VAR_61->lock = VAR_30;
   VAR_61->unlock = VAR_54;
   FUNC_14(&VAR_61->spinlock,
         VAR_59, VAR_60);
  } else {
   FUNC_15(&VAR_61->mutex);
   VAR_61->lock = VAR_29;
   VAR_61->unlock = VAR_53;
   FUNC_14(&VAR_61->mutex,
         VAR_59, VAR_60);
  }
  VAR_61->lock_arg = VAR_61;
 }





 if ((VAR_56 && VAR_56->fast_io) || VAR_58->fast_io)
  VAR_61->alloc_flags = VAR_3;
 else
  VAR_61->alloc_flags = VAR_4;

 VAR_61->format.reg_bytes = FUNC_0(VAR_58->reg_bits, 8);
 VAR_61->format.pad_bytes = VAR_58->pad_bits / 8;
 VAR_61->format.val_bytes = FUNC_0(VAR_58->val_bits, 8);
 VAR_61->format.buf_size = FUNC_0(VAR_58->reg_bits +
   VAR_58->val_bits + VAR_58->pad_bits, 8);
 VAR_61->reg_shift = VAR_58->pad_bits % 8;
 if (VAR_58->reg_stride)
  VAR_61->reg_stride = VAR_58->reg_stride;
 else
  VAR_61->reg_stride = 1;
 if (FUNC_9(VAR_61->reg_stride))
  VAR_61->reg_stride_order = FUNC_7(VAR_61->reg_stride);
 else
  VAR_61->reg_stride_order = -1;
 VAR_61->use_single_read = VAR_58->use_single_read || !VAR_56 || !VAR_56->read;
 VAR_61->use_single_write = VAR_58->use_single_write || !VAR_56 || !VAR_56->write;
 VAR_61->can_multi_write = VAR_58->can_multi_write && VAR_56 && VAR_56->write;
 if (VAR_56) {
  VAR_61->max_raw_read = VAR_56->max_raw_read;
  VAR_61->max_raw_write = VAR_56->max_raw_write;
 }
 VAR_61->dev = VAR_55;
 VAR_61->bus = VAR_56;
 VAR_61->bus_context = VAR_57;
 VAR_61->max_register = VAR_58->max_register;
 VAR_61->wr_table = VAR_58->wr_table;
 VAR_61->rd_table = VAR_58->rd_table;
 VAR_61->volatile_table = VAR_58->volatile_table;
 VAR_61->precious_table = VAR_58->precious_table;
 VAR_61->wr_noinc_table = VAR_58->wr_noinc_table;
 VAR_61->rd_noinc_table = VAR_58->rd_noinc_table;
 VAR_61->writeable_reg = VAR_58->writeable_reg;
 VAR_61->readable_reg = VAR_58->readable_reg;
 VAR_61->volatile_reg = VAR_58->volatile_reg;
 VAR_61->precious_reg = VAR_58->precious_reg;
 VAR_61->writeable_noinc_reg = VAR_58->writeable_noinc_reg;
 VAR_61->readable_noinc_reg = VAR_58->readable_noinc_reg;
 VAR_61->cache_type = VAR_58->cache_type;

 FUNC_24(&VAR_61->async_lock);
 FUNC_2(&VAR_61->async_list);
 FUNC_2(&VAR_61->async_free);
 FUNC_8(&VAR_61->async_waitq);

 if (VAR_58->read_flag_mask ||
     VAR_58->write_flag_mask ||
     VAR_58->zero_flag_mask) {
  VAR_61->read_flag_mask = VAR_58->read_flag_mask;
  VAR_61->write_flag_mask = VAR_58->write_flag_mask;
 } else if (VAR_56) {
  VAR_61->read_flag_mask = VAR_56->read_flag_mask;
 }

 if (!VAR_56) {
  VAR_61->reg_read = VAR_58->reg_read;
  VAR_61->reg_write = VAR_58->reg_write;

  VAR_61->defer_caching = 0;
  goto skip_format_initialization;
 } else if (!VAR_56->read || !VAR_56->write) {
  VAR_61->reg_read = VAR_9;
  VAR_61->reg_write = VAR_10;

  VAR_61->defer_caching = 0;
  goto skip_format_initialization;
 } else {
  VAR_61->reg_read = VAR_8;
  VAR_61->reg_update_bits = VAR_56->reg_update_bits;
 }

 VAR_63 = FUNC_21(VAR_56, VAR_58);
 VAR_64 = FUNC_22(VAR_55, VAR_56, VAR_58);

 switch (VAR_58->reg_bits + VAR_61->reg_shift) {
 case 2:
  switch (VAR_58->val_bits) {
  case 6:
   VAR_61->format.format_write = VAR_16;
   break;
  default:
   goto err_hwlock;
  }
  break;

 case 4:
  switch (VAR_58->val_bits) {
  case 12:
   VAR_61->format.format_write = VAR_20;
   break;
  default:
   goto err_hwlock;
  }
  break;

 case 7:
  switch (VAR_58->val_bits) {
  case 9:
   VAR_61->format.format_write = VAR_24;
   break;
  default:
   goto err_hwlock;
  }
  break;

 case 10:
  switch (VAR_58->val_bits) {
  case 14:
   VAR_61->format.format_write = VAR_11;
   break;
  default:
   goto err_hwlock;
  }
  break;

 case 8:
  VAR_61->format.format_reg = VAR_25;
  break;

 case 16:
  switch (VAR_63) {
  case 130:
   VAR_61->format.format_reg = VAR_12;
   break;
  case 129:
   VAR_61->format.format_reg = VAR_13;
   break;
  case 128:
   VAR_61->format.format_reg = VAR_14;
   break;
  default:
   goto err_hwlock;
  }
  break;

 case 24:
  if (VAR_63 != 130)
   goto err_hwlock;
  VAR_61->format.format_reg = VAR_15;
  break;

 case 32:
  switch (VAR_63) {
  case 130:
   VAR_61->format.format_reg = VAR_17;
   break;
  case 129:
   VAR_61->format.format_reg = VAR_18;
   break;
  case 128:
   VAR_61->format.format_reg = VAR_19;
   break;
  default:
   goto err_hwlock;
  }
  break;
 default:
  goto err_hwlock;
 }

 if (VAR_64 == 128)
  VAR_61->format.parse_inplace = VAR_49;

 switch (VAR_58->val_bits) {
 case 8:
  VAR_61->format.format_val = VAR_25;
  VAR_61->format.parse_val = VAR_48;
  VAR_61->format.parse_inplace = VAR_49;
  break;
 case 16:
  switch (VAR_64) {
  case 130:
   VAR_61->format.format_val = VAR_12;
   VAR_61->format.parse_val = VAR_32;
   VAR_61->format.parse_inplace = VAR_33;
   break;
  case 129:
   VAR_61->format.format_val = VAR_13;
   VAR_61->format.parse_val = VAR_34;
   VAR_61->format.parse_inplace = VAR_35;
   break;
  case 128:
   VAR_61->format.format_val = VAR_14;
   VAR_61->format.parse_val = VAR_36;
   break;
  default:
   goto err_hwlock;
  }
  break;
 case 24:
  if (VAR_64 != 130)
   goto err_hwlock;
  VAR_61->format.format_val = VAR_15;
  VAR_61->format.parse_val = VAR_37;
  break;
 case 32:
  switch (VAR_64) {
  case 130:
   VAR_61->format.format_val = VAR_17;
   VAR_61->format.parse_val = VAR_38;
   VAR_61->format.parse_inplace = VAR_39;
   break;
  case 129:
   VAR_61->format.format_val = VAR_18;
   VAR_61->format.parse_val = VAR_40;
   VAR_61->format.parse_inplace = VAR_41;
   break;
  case 128:
   VAR_61->format.format_val = VAR_19;
   VAR_61->format.parse_val = VAR_42;
   break;
  default:
   goto err_hwlock;
  }
  break;
 }

 if (VAR_61->format.format_write) {
  if ((VAR_63 != 130) ||
      (VAR_64 != 130))
   goto err_hwlock;
  VAR_61->use_single_write = 1;
 }

 if (!VAR_61->format.format_write &&
     !(VAR_61->format.format_reg && VAR_61->format.format_val))
  goto err_hwlock;

 VAR_61->work_buf = FUNC_13(VAR_61->format.buf_size, VAR_4);
 if (VAR_61->work_buf == ((void*)0)) {
  VAR_62 = -VAR_1;
  goto err_hwlock;
 }

 if (VAR_61->format.format_write) {
  VAR_61->defer_caching = 0;
  VAR_61->reg_write = VAR_6;
 } else if (VAR_61->format.format_val) {
  VAR_61->defer_caching = 1;
  VAR_61->reg_write = VAR_7;
 }

skip_format_initialization:

 VAR_61->range_tree = VAR_5;
 for (VAR_65 = 0; VAR_65 < VAR_58->num_ranges; VAR_65++) {
  const struct regmap_range_cfg *VAR_67 = &VAR_58->ranges[VAR_65];
  struct regmap_range_node *VAR_68;


  if (VAR_67->range_max < VAR_67->range_min) {
   FUNC_4(VAR_61->dev, "Invalid range %d: %d < %d\n", VAR_65,
    VAR_67->range_max, VAR_67->range_min);
   goto err_range;
  }

  if (VAR_67->range_max > VAR_61->max_register) {
   FUNC_4(VAR_61->dev, "Invalid range %d: %d > %d\n", VAR_65,
    VAR_67->range_max, VAR_61->max_register);
   goto err_range;
  }

  if (VAR_67->selector_reg > VAR_61->max_register) {
   FUNC_4(VAR_61->dev,
    "Invalid range %d: selector out of map\n", VAR_65);
   goto err_range;
  }

  if (VAR_67->window_len == 0) {
   FUNC_4(VAR_61->dev, "Invalid range %d: window_len 0\n",
    VAR_65);
   goto err_range;
  }



  for (VAR_66 = 0; VAR_66 < VAR_58->num_ranges; VAR_66++) {
   unsigned VAR_69 = VAR_58->ranges[VAR_66].selector_reg;
   unsigned VAR_70 = VAR_58->ranges[VAR_66].window_start;
   unsigned VAR_71 = VAR_70 +
        VAR_58->ranges[VAR_66].window_len - 1;


   if (VAR_66 == VAR_65)
    continue;

   if (VAR_67->range_min <= VAR_69 &&
       VAR_69 <= VAR_67->range_max) {
    FUNC_4(VAR_61->dev,
     "Range %d: selector for %d in window\n",
     VAR_65, VAR_66);
    goto err_range;
   }

   if (!(VAR_71 < VAR_67->range_min ||
         VAR_70 > VAR_67->range_max)) {
    FUNC_4(VAR_61->dev,
     "Range %d: window for %d in window\n",
     VAR_65, VAR_66);
    goto err_range;
   }
  }

  VAR_68 = FUNC_13(sizeof(*VAR_68), VAR_4);
  if (VAR_68 == ((void*)0)) {
   VAR_62 = -VAR_1;
   goto err_range;
  }

  VAR_68->map = VAR_61;
  VAR_68->name = VAR_67->name;
  VAR_68->range_min = VAR_67->range_min;
  VAR_68->range_max = VAR_67->range_max;
  VAR_68->selector_reg = VAR_67->selector_reg;
  VAR_68->selector_mask = VAR_67->selector_mask;
  VAR_68->selector_shift = VAR_67->selector_shift;
  VAR_68->window_start = VAR_67->window_start;
  VAR_68->window_len = VAR_67->window_len;

  if (!FUNC_3(VAR_61, VAR_68)) {
   FUNC_4(VAR_61->dev, "Failed to add range %d\n", VAR_65);
   FUNC_10(VAR_68);
   goto err_range;
  }

  if (VAR_61->selector_work_buf == ((void*)0)) {
   VAR_61->selector_work_buf =
    FUNC_13(VAR_61->format.buf_size, VAR_4);
   if (VAR_61->selector_work_buf == ((void*)0)) {
    VAR_62 = -VAR_1;
    goto err_range;
   }
  }
 }

 VAR_62 = FUNC_17(VAR_61, VAR_58);
 if (VAR_62 != 0)
  goto err_range;

 if (VAR_55) {
  VAR_62 = FUNC_18(VAR_55, VAR_61, VAR_58);
  if (VAR_62 != 0)
   goto err_regcache;
 } else {
  FUNC_20(VAR_61, VAR_58->name);
 }

 return VAR_61;

err_regcache:
 FUNC_16(VAR_61);
err_range:
 FUNC_23(VAR_61);
 FUNC_10(VAR_61->work_buf);
err_hwlock:
 if (VAR_61->hwlock)
  FUNC_5(VAR_61->hwlock);
err_name:
 FUNC_11(VAR_61->name);
err_map:
 FUNC_10(VAR_61);
err:
 return FUNC_1(VAR_62);
}
