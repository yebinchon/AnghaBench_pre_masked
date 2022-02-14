
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmf_function {int ref; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* handlers; } ;
struct TYPE_3__ {int owner; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

struct pmf_function *FUNC_2(struct pmf_function *VAR_0)
{
 if (!FUNC_1(VAR_0->dev->handlers->owner))
  return ((void*)0);
 FUNC_0(&VAR_0->ref);
 return VAR_0;
}
