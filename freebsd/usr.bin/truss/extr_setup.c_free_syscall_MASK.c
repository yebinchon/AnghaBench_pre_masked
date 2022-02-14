
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {size_t nargs; int * s_args; } ;
struct threadinfo {scalar_t__ in_syscall; TYPE_1__ cs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct threadinfo *VAR_0)
{
 u_int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->cs.nargs; VAR_1++)
  FUNC_0(VAR_0->cs.s_args[VAR_1]);
 FUNC_1(&VAR_0->cs, 0, sizeof(VAR_0->cs));
 VAR_0->in_syscall = 0;
}
