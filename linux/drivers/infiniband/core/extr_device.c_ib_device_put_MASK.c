
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int unreg_completion; int refcount; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct ib_device *VAR_0)
{
 if (FUNC_1(&VAR_0->refcount))
  FUNC_0(&VAR_0->unreg_completion);
}
