
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct user_fp {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_3__ {int user_fp; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct user_fp*,int *,int) ;

int FUNC_1(struct pt_regs *VAR_1, struct user_fp *VAR_2)
{
 FUNC_0(VAR_2, &VAR_0->thread.user_fp, sizeof(*VAR_2));
 return 1;
}
