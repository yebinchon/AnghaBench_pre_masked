
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct partition_meta_info {int dummy; } ;
struct hd_struct {int partno; int holder_dir; struct partition_meta_info* info; int policy; void* nr_sects; int discard_alignment; int alignment_offset; void* start_sect; int nr_sects_seq; } ;
struct gendisk {TYPE_1__* queue; int part_tbl; } ;
struct disk_part_tbl {scalar_t__* part; } ;
struct device {int kobj; int devt; struct device* parent; int * type; int * class; } ;
typedef void* sector_t ;
typedef int dev_t ;
struct TYPE_2__ {int limits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hd_struct* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 struct partition_meta_info* FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct hd_struct*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct device*) ;
 char* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,char*,char const*,int) ;
 int FUNC_7 (struct device*,int) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,int *) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*,int *) ;
 int FUNC_13 (struct gendisk*,int) ;
 struct device* FUNC_14 (struct gendisk*) ;
 int FUNC_15 (struct hd_struct*) ;
 int FUNC_16 (struct hd_struct*) ;
 int FUNC_17 (struct gendisk*) ;
 int FUNC_18 (struct hd_struct*) ;
 int FUNC_19 (struct hd_struct*) ;
 scalar_t__ FUNC_20 (char const) ;
 int FUNC_21 (struct hd_struct*) ;
 int FUNC_22 (char*,int *) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *,int ) ;
 struct hd_struct* FUNC_25 (int,int ) ;
 int FUNC_26 (struct partition_meta_info*,struct partition_meta_info*,int) ;
 struct device* FUNC_27 (struct hd_struct*) ;
 int VAR_7 ;
 int FUNC_28 (struct device*) ;
 int FUNC_29 (int *,void*) ;
 int FUNC_30 (int *,void*) ;
 int FUNC_31 (scalar_t__,struct hd_struct*) ;
 struct disk_part_tbl* FUNC_32 (int ,int) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (char const*) ;

struct hd_struct *FUNC_35(struct gendisk *VAR_8, int VAR_9,
    sector_t VAR_10, sector_t VAR_11, int VAR_12,
    struct partition_meta_info *VAR_13)
{
 struct hd_struct *VAR_14;
 dev_t VAR_15 = FUNC_1(0, 0);
 struct device *VAR_16 = FUNC_14(VAR_8);
 struct device *VAR_17;
 struct disk_part_tbl *VAR_18;
 const char *VAR_19;
 int VAR_20;

 VAR_20 = FUNC_13(VAR_8, VAR_9);
 if (VAR_20)
  return FUNC_0(VAR_20);
 VAR_18 = FUNC_32(VAR_8->part_tbl, 1);

 if (VAR_18->part[VAR_9])
  return FUNC_0(-VAR_1);

 VAR_14 = FUNC_25(sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return FUNC_0(-VAR_1);

 if (!FUNC_19(VAR_14)) {
  VAR_20 = -VAR_2;
  goto out_free;
 }

 FUNC_33(&VAR_14->nr_sects_seq);
 VAR_17 = FUNC_27(VAR_14);

 VAR_14->start_sect = VAR_10;
 VAR_14->alignment_offset =
  FUNC_29(&VAR_8->queue->limits, VAR_10);
 VAR_14->discard_alignment =
  FUNC_30(&VAR_8->queue->limits, VAR_10);
 VAR_14->nr_sects = VAR_11;
 VAR_14->partno = VAR_9;
 VAR_14->policy = FUNC_17(VAR_8);

 if (VAR_13) {
  struct partition_meta_info *VAR_21 = FUNC_2(VAR_8);
  if (!VAR_21) {
   VAR_20 = -VAR_2;
   goto out_free_stats;
  }
  FUNC_26(VAR_21, VAR_13, sizeof(*VAR_13));
  VAR_14->info = VAR_21;
 }

 VAR_19 = FUNC_5(VAR_16);
 if (FUNC_20(VAR_19[FUNC_34(VAR_19) - 1]))
  FUNC_6(VAR_17, "%sp%d", VAR_19, VAR_9);
 else
  FUNC_6(VAR_17, "%s%d", VAR_19, VAR_9);

 FUNC_11(VAR_17);
 VAR_17->class = &VAR_5;
 VAR_17->type = &VAR_7;
 VAR_17->parent = VAR_16;

 VAR_20 = FUNC_3(VAR_14, &VAR_15);
 if (VAR_20)
  goto out_free_info;
 VAR_17->devt = VAR_15;


 FUNC_7(VAR_17, 1);
 VAR_20 = FUNC_8(VAR_17);
 if (VAR_20)
  goto out_put;

 VAR_20 = -VAR_2;
 VAR_14->holder_dir = FUNC_22("holders", &VAR_17->kobj);
 if (!VAR_14->holder_dir)
  goto out_del;

 FUNC_7(VAR_17, 0);
 if (VAR_12 & VAR_0) {
  VAR_20 = FUNC_9(VAR_17, &VAR_6);
  if (VAR_20)
   goto out_del;
 }

 VAR_20 = FUNC_18(VAR_14);
 if (VAR_20) {
  if (VAR_12 & VAR_0)
   goto out_remove_file;
  goto out_del;
 }


 FUNC_31(VAR_18->part[VAR_9], VAR_14);


 if (!FUNC_4(VAR_16))
  FUNC_24(&VAR_17->kobj, VAR_4);
 return VAR_14;

out_free_info:
 FUNC_15(VAR_14);
out_free_stats:
 FUNC_16(VAR_14);
out_free:
 FUNC_21(VAR_14);
 return FUNC_0(VAR_20);
out_remove_file:
 FUNC_12(VAR_17, &VAR_6);
out_del:
 FUNC_23(VAR_14->holder_dir);
 FUNC_10(VAR_17);
out_put:
 FUNC_28(VAR_17);
 return FUNC_0(VAR_20);
}
