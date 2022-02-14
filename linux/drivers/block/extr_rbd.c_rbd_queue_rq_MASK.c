
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct request {int dummy; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {int dummy; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 struct work_struct* FUNC_0 (struct request*) ;
 int FUNC_1 (int ,struct work_struct*) ;
 int VAR_1 ;

__attribute__((used)) static blk_status_t FUNC_2(struct blk_mq_hw_ctx *VAR_2,
  const struct blk_mq_queue_data *VAR_3)
{
 struct request *VAR_4 = VAR_3->rq;
 struct work_struct *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_1, VAR_5);
 return VAR_0;
}
