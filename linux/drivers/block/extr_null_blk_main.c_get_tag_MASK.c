
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_queue {unsigned int queue_depth; int tag_map; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct nullb_queue *VAR_0)
{
 unsigned int VAR_1;

 do {
  VAR_1 = FUNC_0(VAR_0->tag_map, VAR_0->queue_depth);
  if (VAR_1 >= VAR_0->queue_depth)
   return -1U;
 } while (FUNC_1(VAR_1, VAR_0->tag_map));

 return VAR_1;
}
