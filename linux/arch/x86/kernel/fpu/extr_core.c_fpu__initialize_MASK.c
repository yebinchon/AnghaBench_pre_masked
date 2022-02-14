
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpu {int state; } ;
struct TYPE_3__ {struct fpu fpu; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fpu*) ;

__attribute__((used)) static void FUNC_4(struct fpu *VAR_2)
{
 FUNC_0(VAR_2 != &VAR_1->thread.fpu);

 FUNC_2(VAR_0);
 FUNC_1(&VAR_2->state);
 FUNC_3(VAR_2);
}
