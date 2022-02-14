
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeh_dev {int pe; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ error_state; } ;


 scalar_t__ FUNC_0 (struct eeh_dev*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct eeh_dev *VAR_1)
{
 if (!VAR_1->pdev)
  return 0;
 if (VAR_1->pdev->error_state == VAR_0)
  return 0;
 if (FUNC_0(VAR_1))
  return 0;
 if (FUNC_1(VAR_1->pe))
  return 0;

 return 1;
}
