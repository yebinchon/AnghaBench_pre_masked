
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kyber_queue_data {int async_depth; } ;
struct blk_mq_alloc_data {int shallow_depth; TYPE_2__* q; } ;
struct TYPE_4__ {TYPE_1__* elevator; } ;
struct TYPE_3__ {struct kyber_queue_data* elevator_data; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_0, struct blk_mq_alloc_data *VAR_1)
{




 if (!FUNC_0(VAR_0)) {
  struct kyber_queue_data *VAR_2 = VAR_1->q->elevator->elevator_data;

  VAR_1->shallow_depth = VAR_2->async_depth;
 }
}
