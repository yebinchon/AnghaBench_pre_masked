
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * gs_cb; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int FUNC_0 (int,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void)
{
 if (VAR_0->thread.gs_cb) {
  FUNC_2();
  FUNC_1(VAR_0->thread.gs_cb);
  VAR_0->thread.gs_cb = ((void*)0);
  FUNC_0(2, 4);
  FUNC_3();
 }
 return 0;
}
