
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
 int FUNC_1 (struct fpu*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct fpu*) ;
 int FUNC_7 (struct fpu*) ;

void FUNC_8(struct fpu *VAR_2)
{
 FUNC_0(VAR_2 != &VAR_1->thread.fpu);

 FUNC_3();
 FUNC_7(VAR_2);

 if (!FUNC_5(VAR_0)) {
  if (!FUNC_1(VAR_2)) {
   FUNC_2(&VAR_2->state);
  }
 }

 FUNC_6(VAR_2);
 FUNC_4();
}
