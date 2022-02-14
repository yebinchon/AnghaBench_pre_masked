
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {TYPE_2__* q; } ;
struct kyber_queue_data {int dummy; } ;
struct TYPE_4__ {TYPE_1__* elevator; } ;
struct TYPE_3__ {struct kyber_queue_data* elevator_data; } ;


 int FUNC_0 (struct kyber_queue_data*,struct request*) ;

__attribute__((used)) static void FUNC_1(struct request *VAR_0)
{
 struct kyber_queue_data *VAR_1 = VAR_0->q->elevator->elevator_data;

 FUNC_0(VAR_1, VAR_0);
}
