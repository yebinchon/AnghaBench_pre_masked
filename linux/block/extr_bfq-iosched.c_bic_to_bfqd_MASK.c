
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* q; } ;
struct bfq_io_cq {TYPE_3__ icq; } ;
struct bfq_data {int dummy; } ;
struct TYPE_5__ {TYPE_1__* elevator; } ;
struct TYPE_4__ {struct bfq_data* elevator_data; } ;



struct bfq_data *FUNC_0(struct bfq_io_cq *VAR_0)
{
 return VAR_0->icq.q->elevator->elevator_data;
}
