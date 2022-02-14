
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {TYPE_1__* dbell_regs; } ;
struct TYPE_7__ {TYPE_2__* pw_regs; } ;
struct TYPE_6__ {int pwsr; } ;
struct TYPE_5__ {int dsr; int odsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_4__* VAR_10 ;
 int FUNC_0 (int *,int ) ;
 TYPE_3__* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;

void FUNC_1(void)
{


 FUNC_0((u32 *)(VAR_12 + VAR_7), 0);

 FUNC_0((u32 *)(VAR_13 + VAR_5), VAR_1);
 FUNC_0((u32 *)(VAR_13 + VAR_6), VAR_1);
 FUNC_0((u32 *)(VAR_13 + VAR_8), VAR_4);
 FUNC_0((u32 *)(VAR_13 + VAR_9), VAR_4);

 FUNC_0(&VAR_10->dbell_regs->odsr, VAR_3);
 FUNC_0(&VAR_10->dbell_regs->dsr, VAR_0);

 FUNC_0(&VAR_11->pw_regs->pwsr, VAR_2);
}
