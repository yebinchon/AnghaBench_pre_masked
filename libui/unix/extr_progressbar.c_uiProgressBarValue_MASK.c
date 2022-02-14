
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pbar; scalar_t__ indeterminate; } ;
typedef TYPE_1__ uiProgressBar ;


 int FUNC_0 (int ) ;

int FUNC_1(uiProgressBar *VAR_0)
{
 if (VAR_0->indeterminate)
  return -1;
 return (int) (FUNC_0(VAR_0->pbar) * 100);
}
