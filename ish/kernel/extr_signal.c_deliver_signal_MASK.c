
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task {TYPE_1__* sighand; } ;
struct siginfo_ {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct task*,int,struct siginfo_) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct task *VAR_0, int VAR_1, struct siginfo_ VAR_2) {
    FUNC_1(&VAR_0->sighand->lock);
    FUNC_0(VAR_0, VAR_1, VAR_2);
    FUNC_2(&VAR_0->sighand->lock);
}
