
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r10conf {int wait_barrier; scalar_t__ array_freeze_pending; int nr_pending; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct r10conf *VAR_0)
{
 if ((FUNC_0(&VAR_0->nr_pending)) ||
   (VAR_0->array_freeze_pending))
  FUNC_1(&VAR_0->wait_barrier);
}
