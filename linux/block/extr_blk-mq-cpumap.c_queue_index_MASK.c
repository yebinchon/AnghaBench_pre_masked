
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_queue_map {int queue_offset; } ;



__attribute__((used)) static int FUNC_0(struct blk_mq_queue_map *VAR_0,
         unsigned int VAR_1, const int VAR_2)
{
 return VAR_0->queue_offset + (VAR_2 % VAR_1);
}
