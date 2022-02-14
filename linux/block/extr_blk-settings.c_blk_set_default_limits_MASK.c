
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_limits {int max_discard_segments; int logical_block_size; int physical_block_size; int io_min; unsigned long bounce_pfn; int zoned; scalar_t__ misaligned; scalar_t__ io_opt; scalar_t__ alignment_offset; scalar_t__ discard_misaligned; scalar_t__ discard_alignment; scalar_t__ discard_granularity; scalar_t__ max_hw_discard_sectors; scalar_t__ max_discard_sectors; scalar_t__ max_write_zeroes_sectors; scalar_t__ max_write_same_sectors; scalar_t__ chunk_sectors; scalar_t__ max_dev_sectors; int max_hw_sectors; int max_sectors; int max_segment_size; scalar_t__ virt_boundary_mask; int seg_boundary_mask; scalar_t__ max_integrity_segments; int max_segments; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(struct queue_limits *VAR_7)
{
 VAR_7->max_segments = VAR_1;
 VAR_7->max_discard_segments = 1;
 VAR_7->max_integrity_segments = 0;
 VAR_7->seg_boundary_mask = VAR_4;
 VAR_7->virt_boundary_mask = 0;
 VAR_7->max_segment_size = VAR_2;
 VAR_7->max_sectors = VAR_7->max_hw_sectors = VAR_3;
 VAR_7->max_dev_sectors = 0;
 VAR_7->chunk_sectors = 0;
 VAR_7->max_write_same_sectors = 0;
 VAR_7->max_write_zeroes_sectors = 0;
 VAR_7->max_discard_sectors = 0;
 VAR_7->max_hw_discard_sectors = 0;
 VAR_7->discard_granularity = 0;
 VAR_7->discard_alignment = 0;
 VAR_7->discard_misaligned = 0;
 VAR_7->logical_block_size = VAR_7->physical_block_size = VAR_7->io_min = 512;
 VAR_7->bounce_pfn = (unsigned long)(VAR_0 >> VAR_6);
 VAR_7->alignment_offset = 0;
 VAR_7->io_opt = 0;
 VAR_7->misaligned = 0;
 VAR_7->zoned = VAR_5;
}
