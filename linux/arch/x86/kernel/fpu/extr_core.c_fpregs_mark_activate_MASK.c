
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpu {int last_cpu; } ;
struct TYPE_3__ {struct fpu fpu; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct fpu*) ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 struct fpu *VAR_2 = &VAR_1->thread.fpu;

 FUNC_1(VAR_2);
 VAR_2->last_cpu = FUNC_2();
 FUNC_0(VAR_0);
}
