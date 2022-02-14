
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_integrity_c {scalar_t__ journal_sections; scalar_t__ meta_device_sectors; scalar_t__ initial_sectors; int metadata_run; scalar_t__ tag_size; int log2_metadata_run; int provided_data_sectors; scalar_t__ start; int log2_buffer_sectors; TYPE_1__* sb; int meta_dev; scalar_t__ journal_section_sectors; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {scalar_t__ log2_interleave_sectors; scalar_t__ log2_sectors_per_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dm_integrity_c*) ;
 int FUNC_2 (struct dm_integrity_c*,int,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct dm_integrity_c*,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct dm_integrity_c *VAR_5)
{
 __u64 VAR_6;

 FUNC_1(VAR_5);
 VAR_6 = VAR_2 + (__u64)VAR_5->journal_section_sectors * VAR_5->journal_sections;
 if (VAR_6 + VAR_1 >= VAR_5->meta_device_sectors || VAR_6 > VAR_4)
  return -VAR_0;
 VAR_5->initial_sectors = VAR_6;

 if (!VAR_5->meta_dev) {
  sector_t VAR_7, VAR_8, VAR_9;

  VAR_5->metadata_run = FUNC_4((__u64)VAR_5->tag_size << (VAR_5->sb->log2_interleave_sectors - VAR_5->sb->log2_sectors_per_block),
        (__u64)(1 << VAR_3 << VAR_1)) >> VAR_3;
  if (!(VAR_5->metadata_run & (VAR_5->metadata_run - 1)))
   VAR_5->log2_metadata_run = FUNC_0(VAR_5->metadata_run);
  else
   VAR_5->log2_metadata_run = -1;

  FUNC_2(VAR_5, VAR_5->provided_data_sectors - 1, &VAR_8, &VAR_9);
  VAR_7 = FUNC_3(VAR_5, VAR_8, VAR_9);
  if (VAR_7 < VAR_5->start || VAR_7 >= VAR_5->meta_device_sectors)
   return -VAR_0;
 } else {
  __u64 VAR_10 = (VAR_5->provided_data_sectors >> VAR_5->sb->log2_sectors_per_block) * VAR_5->tag_size;
  VAR_10 = (VAR_10 + ((1U << (VAR_5->log2_buffer_sectors + VAR_3)) - 1))
    >> (VAR_5->log2_buffer_sectors + VAR_3);
  VAR_10 <<= VAR_5->log2_buffer_sectors;
  if (VAR_5->initial_sectors + VAR_10 < VAR_5->initial_sectors ||
      VAR_5->initial_sectors + VAR_10 > VAR_5->meta_device_sectors)
   return -VAR_0;
  VAR_5->metadata_run = 1;
  VAR_5->log2_metadata_run = 0;
 }

 return 0;
}
