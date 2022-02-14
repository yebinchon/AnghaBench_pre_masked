
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clockdomain {int dummy; } ;
struct TYPE_2__ {int (* clkdm_restore_context ) (struct clockdomain*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct clockdomain*) ;

__attribute__((used)) static int FUNC_1(struct clockdomain *VAR_2, void *VAR_3)
{
 if (!VAR_1 || !VAR_1->clkdm_restore_context)
  return -VAR_0;

 return VAR_1->clkdm_restore_context(VAR_2);
}
