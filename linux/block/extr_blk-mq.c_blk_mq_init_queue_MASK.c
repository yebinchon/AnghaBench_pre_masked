
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct blk_mq_tag_set {int numa_node; } ;


 int VAR_0 ;
 struct request_queue* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct request_queue*) ;
 struct request_queue* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct request_queue*) ;
 struct request_queue* FUNC_4 (struct blk_mq_tag_set*,struct request_queue*,int) ;

struct request_queue *FUNC_5(struct blk_mq_tag_set *VAR_2)
{
 struct request_queue *VAR_3, *VAR_4;

 VAR_3 = FUNC_2(VAR_1, VAR_2->numa_node);
 if (!VAR_3)
  return FUNC_0(-VAR_0);





 VAR_4 = FUNC_4(VAR_2, VAR_3, 0);
 if (FUNC_1(VAR_4))
  FUNC_3(VAR_3);

 return VAR_4;
}
