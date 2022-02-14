
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct mapped_device {struct dm_target* immutable_target; } ;
struct dm_target {TYPE_1__* type; } ;
struct dm_table {int dummy; } ;
struct dm_rq_target_io {struct dm_target* ti; struct mapped_device* md; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {int dummy; } ;
typedef int blk_status_t ;
struct TYPE_2__ {scalar_t__ (* busy ) (struct dm_target*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dm_rq_target_io* FUNC_0 (struct request*) ;
 struct dm_table* FUNC_1 (struct mapped_device*,int*) ;
 int FUNC_2 (struct mapped_device*,int) ;
 int FUNC_3 (struct mapped_device*,struct request*) ;
 struct dm_target* FUNC_4 (struct dm_table*,int ) ;
 int FUNC_5 (struct dm_rq_target_io*,struct request*,struct mapped_device*) ;
 scalar_t__ FUNC_6 (struct dm_rq_target_io*) ;
 int FUNC_7 (struct mapped_device*) ;
 int FUNC_8 (struct mapped_device*,struct request*) ;
 scalar_t__ FUNC_9 (struct dm_target*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static blk_status_t FUNC_11(struct blk_mq_hw_ctx *VAR_3,
     const struct blk_mq_queue_data *VAR_4)
{
 struct request *VAR_5 = VAR_4->rq;
 struct dm_rq_target_io *VAR_6 = FUNC_0(VAR_5);
 struct mapped_device *VAR_7 = VAR_6->md;
 struct dm_target *VAR_8 = VAR_7->immutable_target;

 if (FUNC_10(!VAR_8)) {
  int VAR_9;
  struct dm_table *VAR_10 = FUNC_1(VAR_7, &VAR_9);

  VAR_8 = FUNC_4(VAR_10, 0);
  FUNC_2(VAR_7, VAR_9);
 }

 if (VAR_8->type->busy && VAR_8->type->busy(VAR_8))
  return VAR_1;

 FUNC_3(VAR_7, VAR_5);


 FUNC_5(VAR_6, VAR_5, VAR_7);




 VAR_6->ti = VAR_8;


 if (FUNC_6(VAR_6) == VAR_2) {

  FUNC_8(VAR_7, VAR_5);
  FUNC_7(VAR_7);
  return VAR_1;
 }

 return VAR_0;
}
