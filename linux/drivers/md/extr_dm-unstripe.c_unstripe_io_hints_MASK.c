
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unstripe_c {int chunk_size; } ;
struct queue_limits {int chunk_sectors; } ;
struct dm_target {struct unstripe_c* private; } ;



__attribute__((used)) static void FUNC_0(struct dm_target *VAR_0,
          struct queue_limits *VAR_1)
{
 struct unstripe_c *VAR_2 = VAR_0->private;

 VAR_1->chunk_sectors = VAR_2->chunk_size;
}
