
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct blk_mq_tags {void* rqs; void* static_rqs; } ;
struct blk_mq_tag_set {int numa_node; int flags; int * map; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct blk_mq_tags*) ;
 int FUNC_2 (int *,unsigned int) ;
 struct blk_mq_tags* FUNC_3 (unsigned int,unsigned int,int,int ) ;
 void* FUNC_4 (unsigned int,int,int,int) ;
 int FUNC_5 (void*) ;

struct blk_mq_tags *FUNC_6(struct blk_mq_tag_set *VAR_5,
     unsigned int VAR_6,
     unsigned int VAR_7,
     unsigned int VAR_8)
{
 struct blk_mq_tags *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(&VAR_5->map[VAR_1], VAR_6);
 if (VAR_10 == VAR_2)
  VAR_10 = VAR_5->numa_node;

 VAR_9 = FUNC_3(VAR_7, VAR_8, VAR_10,
    FUNC_0(VAR_5->flags));
 if (!VAR_9)
  return ((void*)0);

 VAR_9->rqs = FUNC_4(VAR_7, sizeof(struct request *),
     VAR_0 | VAR_4 | VAR_3,
     VAR_10);
 if (!VAR_9->rqs) {
  FUNC_1(VAR_9);
  return ((void*)0);
 }

 VAR_9->static_rqs = FUNC_4(VAR_7, sizeof(struct request *),
     VAR_0 | VAR_4 | VAR_3,
     VAR_10);
 if (!VAR_9->static_rqs) {
  FUNC_5(VAR_9->rqs);
  FUNC_1(VAR_9);
  return ((void*)0);
 }

 return VAR_9;
}
