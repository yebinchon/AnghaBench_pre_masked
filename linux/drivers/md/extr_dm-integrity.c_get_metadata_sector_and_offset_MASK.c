
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_integrity_c {unsigned int log2_metadata_run; unsigned int metadata_run; unsigned int log2_buffer_sectors; unsigned int log2_tag_size; unsigned int tag_size; TYPE_1__* sb; } ;
typedef unsigned int sector_t ;
typedef unsigned int __u64 ;
struct TYPE_2__ {unsigned int log2_interleave_sectors; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dm_integrity_c*,unsigned int) ;

__attribute__((used)) static __u64 FUNC_2(struct dm_integrity_c *VAR_1, sector_t VAR_2,
         sector_t VAR_3, unsigned *VAR_4)
{
 __u64 VAR_5;
 unsigned VAR_6;

 VAR_5 = VAR_2 << VAR_1->sb->log2_interleave_sectors;
 if (FUNC_0(VAR_1->log2_metadata_run >= 0))
  VAR_5 += VAR_2 << VAR_1->log2_metadata_run;
 else
  VAR_5 += VAR_2 * VAR_1->metadata_run;
 VAR_5 >>= VAR_1->log2_buffer_sectors;

 FUNC_1(VAR_1, VAR_3);

 if (FUNC_0(VAR_1->log2_tag_size >= 0)) {
  VAR_5 += VAR_3 >> (VAR_0 + VAR_1->log2_buffer_sectors - VAR_1->log2_tag_size);
  VAR_6 = (VAR_3 << VAR_1->log2_tag_size) & ((1U << VAR_0 << VAR_1->log2_buffer_sectors) - 1);
 } else {
  VAR_5 += (__u64)VAR_3 * VAR_1->tag_size >> (VAR_0 + VAR_1->log2_buffer_sectors);
  VAR_6 = (VAR_3 * VAR_1->tag_size) & ((1U << VAR_0 << VAR_1->log2_buffer_sectors) - 1);
 }
 *VAR_4 = VAR_6;
 return VAR_5;
}
