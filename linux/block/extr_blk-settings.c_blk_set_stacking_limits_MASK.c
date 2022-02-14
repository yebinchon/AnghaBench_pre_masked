
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_limits {void* max_write_zeroes_sectors; void* max_write_same_sectors; void* max_dev_sectors; void* max_sectors; void* max_segment_size; void* max_hw_sectors; void* max_discard_segments; void* max_segments; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct queue_limits*) ;

void FUNC_1(struct queue_limits *VAR_2)
{
 FUNC_0(VAR_2);


 VAR_2->max_segments = VAR_1;
 VAR_2->max_discard_segments = VAR_1;
 VAR_2->max_hw_sectors = VAR_0;
 VAR_2->max_segment_size = VAR_0;
 VAR_2->max_sectors = VAR_0;
 VAR_2->max_dev_sectors = VAR_0;
 VAR_2->max_write_same_sectors = VAR_0;
 VAR_2->max_write_zeroes_sectors = VAR_0;
}
