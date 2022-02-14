
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct request {int dummy; } ;
struct bfq_queue {int dispatched; } ;
struct TYPE_2__ {int elevator_data; } ;


 struct bfq_queue* FUNC_0 (struct request*) ;
 int FUNC_1 (struct request_queue*,struct request*) ;
 int FUNC_2 (int ,struct request*) ;

__attribute__((used)) static void FUNC_3(struct request_queue *VAR_0, struct request *VAR_1)
{
 struct bfq_queue *VAR_2 = FUNC_0(VAR_1);
 VAR_2->dispatched++;
 FUNC_2(VAR_0->elevator->elevator_data, VAR_1);

 FUNC_1(VAR_0, VAR_1);
}
