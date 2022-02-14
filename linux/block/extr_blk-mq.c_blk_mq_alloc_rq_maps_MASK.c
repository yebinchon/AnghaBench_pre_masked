
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tag_set {unsigned int queue_depth; int reserved_tags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct blk_mq_tag_set*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct blk_mq_tag_set *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->queue_depth;
 do {
  VAR_4 = FUNC_0(VAR_2);
  if (!VAR_4)
   break;

  VAR_2->queue_depth >>= 1;
  if (VAR_2->queue_depth < VAR_2->reserved_tags + VAR_0) {
   VAR_4 = -VAR_1;
   break;
  }
 } while (VAR_2->queue_depth);

 if (!VAR_2->queue_depth || VAR_4) {
  FUNC_1("blk-mq: failed to allocate request map\n");
  return -VAR_1;
 }

 if (VAR_3 != VAR_2->queue_depth)
  FUNC_2("blk-mq: reduced tag depth (%u -> %u)\n",
      VAR_3, VAR_2->queue_depth);

 return 0;
}
