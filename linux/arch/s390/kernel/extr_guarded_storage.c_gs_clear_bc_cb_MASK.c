
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gs_cb {int dummy; } ;
struct TYPE_3__ {struct gs_cb* gs_bc_cb; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct gs_cb*) ;

__attribute__((used)) static int FUNC_1(void)
{
 struct gs_cb *VAR_1;

 VAR_1 = VAR_0->thread.gs_bc_cb;
 VAR_0->thread.gs_bc_cb = ((void*)0);
 FUNC_0(VAR_1);
 return 0;
}
