
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct qxl_bo {TYPE_1__ tbo; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct qxl_bo **VAR_0)
{
 if ((*VAR_0) == ((void*)0))
  return;

 FUNC_0(&(*VAR_0)->tbo.base);
 *VAR_0 = ((void*)0);
}
