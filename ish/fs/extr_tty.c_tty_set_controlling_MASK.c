
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int fg_group; int session; int refcount; } ;
struct tgroup {int lock; int pgid; int sid; struct tty* tty; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tgroup *VAR_0, struct tty *VAR_1) {
    FUNC_0(&VAR_0->lock);
    if (VAR_0->tty == ((void*)0)) {
        VAR_1->refcount++;
        VAR_0->tty = VAR_1;
        VAR_1->session = VAR_0->sid;
        VAR_1->fg_group = VAR_0->pgid;
    }
    FUNC_1(&VAR_0->lock);
}
