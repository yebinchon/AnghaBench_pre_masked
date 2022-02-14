
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {TYPE_1__* rq_disk; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {int dummy; } ;
struct amiga_floppy_struct {int dummy; } ;
typedef int blk_status_t ;
struct TYPE_2__ {struct amiga_floppy_struct* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amiga_floppy_struct*,struct request*) ;
 int FUNC_1 (struct request*,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static blk_status_t FUNC_7(struct blk_mq_hw_ctx *VAR_3,
         const struct blk_mq_queue_data *VAR_4)
{
 struct request *VAR_5 = VAR_4->rq;
 struct amiga_floppy_struct *VAR_6 = VAR_5->rq_disk->private_data;
 blk_status_t VAR_7;

 if (!FUNC_5(&VAR_2))
  return VAR_0;

 FUNC_2(VAR_5);

 do {
  VAR_7 = FUNC_0(VAR_6, VAR_5);
 } while (FUNC_4(VAR_5, VAR_7, FUNC_3(VAR_5)));
 FUNC_1(VAR_5, VAR_7);

 FUNC_6(&VAR_2);
 return VAR_1;
}
