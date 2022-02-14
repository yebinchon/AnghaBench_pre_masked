
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task {TYPE_1__* files; } ;
struct proc_entry {int fd; } ;
struct fd {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 struct fd* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct fd*,char*) ;
 int FUNC_2 (int *) ;
 struct task* FUNC_3 (struct proc_entry*) ;
 int FUNC_4 (struct task*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct proc_entry *VAR_1, char *VAR_2) {
    struct task *VAR_3 = FUNC_3(VAR_1);
    if (VAR_3 == ((void*)0))
        return VAR_0;
    FUNC_2(&VAR_3->files->lock);
    struct fd *VAR_4 = FUNC_0(VAR_3->files, VAR_1->fd);
    int VAR_5 = FUNC_1(VAR_4, VAR_2);
    FUNC_5(&VAR_3->files->lock);
    FUNC_4(VAR_3);
    return VAR_5;
}
