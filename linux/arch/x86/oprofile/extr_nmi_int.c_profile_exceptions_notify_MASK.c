
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int (* stop ) (int ) ;int (* check_ctrs ) (struct pt_regs*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pt_regs*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_6, struct pt_regs *VAR_7)
{
 if (VAR_3)
  VAR_4->check_ctrs(VAR_7, FUNC_2(&VAR_2));
 else if (!VAR_5)
  return VAR_0;
 else
  VAR_4->stop(FUNC_2(&VAR_2));
 return VAR_1;
}
