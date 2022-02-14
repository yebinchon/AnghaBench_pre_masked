
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {unsigned short nr_phys_segments; int __data_len; struct bio* biotail; } ;
struct TYPE_2__ {scalar_t__ bi_size; } ;
struct bio {TYPE_1__ bi_iter; struct bio* bi_next; } ;


 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct request*,int) ;
 scalar_t__ FUNC_2 (struct request*,int ) ;
 unsigned short FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (struct request*) ;
 unsigned short FUNC_6 (struct request_queue*) ;
 int FUNC_7 (struct request_queue*,struct request*) ;
 int FUNC_8 (struct request_queue*,struct request*,struct bio*) ;

bool FUNC_9(struct request_queue *VAR_0, struct request *VAR_1,
  struct bio *VAR_2)
{
 unsigned short VAR_3 = FUNC_3(VAR_1);

 if (VAR_3 >= FUNC_6(VAR_0))
  goto no_merge;
 if (FUNC_5(VAR_1) + FUNC_0(VAR_2) >
     FUNC_2(VAR_1, FUNC_4(VAR_1)))
  goto no_merge;

 FUNC_8(VAR_0, VAR_1, VAR_2);

 VAR_1->biotail->bi_next = VAR_2;
 VAR_1->biotail = VAR_2;
 VAR_1->__data_len += VAR_2->bi_iter.bi_size;
 VAR_1->nr_phys_segments = VAR_3 + 1;

 FUNC_1(VAR_1, 0);
 return 1;
no_merge:
 FUNC_7(VAR_0, VAR_1);
 return 0;
}
