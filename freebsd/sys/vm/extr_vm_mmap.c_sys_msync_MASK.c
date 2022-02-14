
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct msync_args {int flags; int len; scalar_t__ addr; } ;


 int FUNC_0 (struct thread*,uintptr_t,int ,int ) ;

int
FUNC_1(struct thread *VAR_0, struct msync_args *VAR_1)
{

 return (FUNC_0(VAR_0, (uintptr_t)VAR_1->addr, VAR_1->len, VAR_1->flags));
}
