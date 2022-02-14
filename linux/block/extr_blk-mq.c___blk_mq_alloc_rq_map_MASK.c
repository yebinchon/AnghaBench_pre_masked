
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_tag_set {int ** tags; int queue_depth; int reserved_tags; } ;


 int * FUNC_0 (struct blk_mq_tag_set*,int,int ,int ) ;
 int FUNC_1 (struct blk_mq_tag_set*,int *,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct blk_mq_tag_set *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 VAR_0->tags[VAR_1] = FUNC_0(VAR_0, VAR_1,
     VAR_0->queue_depth, VAR_0->reserved_tags);
 if (!VAR_0->tags[VAR_1])
  return 0;

 VAR_2 = FUNC_1(VAR_0, VAR_0->tags[VAR_1], VAR_1,
    VAR_0->queue_depth);
 if (!VAR_2)
  return 1;

 FUNC_2(VAR_0->tags[VAR_1]);
 VAR_0->tags[VAR_1] = ((void*)0);
 return 0;
}
