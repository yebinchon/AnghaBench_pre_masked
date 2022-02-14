
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int xsave; } ;
struct fpu {TYPE_2__ state; } ;
struct TYPE_4__ {struct fpu fpu; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (struct fpu*) ;
 void const* FUNC_1 (int *,int) ;

const void *FUNC_2(int VAR_1)
{
 struct fpu *VAR_2 = &VAR_0->thread.fpu;





 FUNC_0(VAR_2);

 return FUNC_1(&VAR_2->state.xsave, VAR_1);
}
