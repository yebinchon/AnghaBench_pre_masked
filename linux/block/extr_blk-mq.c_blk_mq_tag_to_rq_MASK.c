
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct blk_mq_tags {unsigned int nr_tags; struct request** rqs; } ;


 int FUNC_0 (struct request*) ;

struct request *FUNC_1(struct blk_mq_tags *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 < VAR_0->nr_tags) {
  FUNC_0(VAR_0->rqs[VAR_1]);
  return VAR_0->rqs[VAR_1];
 }

 return ((void*)0);
}
