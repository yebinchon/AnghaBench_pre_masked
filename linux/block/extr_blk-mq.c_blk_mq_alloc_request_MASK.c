
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int * biotail; int bio; scalar_t__ __sector; scalar_t__ __data_len; } ;
struct blk_mq_alloc_data {unsigned int cmd_flags; int flags; } ;
typedef scalar_t__ sector_t ;
typedef int blk_mq_req_flags_t ;


 struct request* FUNC_0 (int) ;
 int VAR_0 ;
 struct request* FUNC_1 (struct request_queue*,int *,struct blk_mq_alloc_data*) ;
 int FUNC_2 (struct request_queue*,int ) ;
 int FUNC_3 (struct request_queue*) ;

struct request *FUNC_4(struct request_queue *VAR_1, unsigned int VAR_2,
  blk_mq_req_flags_t VAR_3)
{
 struct blk_mq_alloc_data VAR_4 = { .flags = VAR_3, .cmd_flags = VAR_2 };
 struct request *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_3);
 if (VAR_6)
  return FUNC_0(VAR_6);

 VAR_5 = FUNC_1(VAR_1, ((void*)0), &VAR_4);
 FUNC_3(VAR_1);

 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->__data_len = 0;
 VAR_5->__sector = (sector_t) -1;
 VAR_5->bio = *(VAR_5->biotail = ((void*)0));
 return VAR_5;
}
