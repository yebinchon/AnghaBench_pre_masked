
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_cmd {int lock; int flags; } ;
struct blk_mq_queue_data {int rq; } ;
struct blk_mq_hw_ctx {int queue_num; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nbd_cmd* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nbd_cmd*,int ) ;

__attribute__((used)) static blk_status_t FUNC_5(struct blk_mq_hw_ctx *VAR_3,
   const struct blk_mq_queue_data *VAR_4)
{
 struct nbd_cmd *VAR_5 = FUNC_0(VAR_4->rq);
 int VAR_6;
 FUNC_2(&VAR_5->lock);
 FUNC_1(VAR_2, &VAR_5->flags);






 VAR_6 = FUNC_4(VAR_5, VAR_3->queue_num);
 if (VAR_6 < 0)
  VAR_6 = VAR_0;
 else if (!VAR_6)
  VAR_6 = VAR_1;
 FUNC_3(&VAR_5->lock);

 return VAR_6;
}
