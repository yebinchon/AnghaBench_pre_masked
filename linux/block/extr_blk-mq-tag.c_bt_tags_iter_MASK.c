
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbitmap {int dummy; } ;
struct request {int dummy; } ;
struct bt_tags_iter_data {int reserved; int (* fn ) (struct request*,int ,int) ;int data; struct blk_mq_tags* tags; } ;
struct blk_mq_tags {struct request** rqs; scalar_t__ nr_reserved_tags; } ;


 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct sbitmap *VAR_0, unsigned int VAR_1, void *VAR_2)
{
 struct bt_tags_iter_data *VAR_3 = VAR_2;
 struct blk_mq_tags *VAR_4 = VAR_3->tags;
 bool VAR_5 = VAR_3->reserved;
 struct request *VAR_6;

 if (!VAR_5)
  VAR_1 += VAR_4->nr_reserved_tags;





 VAR_6 = VAR_4->rqs[VAR_1];
 if (VAR_6 && FUNC_0(VAR_6))
  return VAR_3->fn(VAR_6, VAR_3->data, VAR_5);

 return 1;
}
