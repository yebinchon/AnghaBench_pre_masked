
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rio_mport {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pw_regs; } ;
struct TYPE_3__ {int pwmr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 TYPE_2__* VAR_1 ;

int FUNC_2(struct rio_mport *VAR_2, int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(&VAR_1->pw_regs->pwmr);

 if (VAR_3)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;

 FUNC_1(&VAR_1->pw_regs->pwmr, VAR_4);

 return 0;
}
