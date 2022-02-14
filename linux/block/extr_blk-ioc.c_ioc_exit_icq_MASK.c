
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct io_cq {int flags; TYPE_2__* q; } ;
struct TYPE_6__ {int (* exit_icq ) (struct io_cq*) ;} ;
struct elevator_type {TYPE_3__ ops; } ;
struct TYPE_5__ {TYPE_1__* elevator; } ;
struct TYPE_4__ {struct elevator_type* type; } ;


 int VAR_0 ;
 int FUNC_0 (struct io_cq*) ;

__attribute__((used)) static void FUNC_1(struct io_cq *VAR_1)
{
 struct elevator_type *VAR_2 = VAR_1->q->elevator->type;

 if (VAR_1->flags & VAR_0)
  return;

 if (VAR_2->ops.exit_icq)
  VAR_2->ops.exit_icq(VAR_1);

 VAR_1->flags |= VAR_0;
}
