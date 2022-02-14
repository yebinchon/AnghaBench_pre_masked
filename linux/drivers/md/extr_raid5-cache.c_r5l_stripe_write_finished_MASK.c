
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {struct r5l_io_unit* log_io; } ;
struct r5l_io_unit {int pending_stripe; } ;


 int FUNC_0 (struct r5l_io_unit*) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct stripe_head *VAR_0)
{
 struct r5l_io_unit *VAR_1;

 VAR_1 = VAR_0->log_io;
 VAR_0->log_io = ((void*)0);

 if (VAR_1 && FUNC_1(&VAR_1->pending_stripe))
  FUNC_0(VAR_1);
}
