
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int can_destroy; int refcount; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct thin_c *VAR_0)
{
 if (FUNC_1(&VAR_0->refcount))
  FUNC_0(&VAR_0->can_destroy);
}
