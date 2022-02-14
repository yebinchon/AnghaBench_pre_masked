
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_entry {int pid; TYPE_1__* meta; } ;
struct TYPE_2__ {int (* readdir ) (struct proc_entry*,unsigned long*,struct proc_entry*) ;int children_sizeof; struct TYPE_2__* children; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct proc_entry*,unsigned long*,struct proc_entry*) ;

bool FUNC_2(struct proc_entry *VAR_0, unsigned long *VAR_1, struct proc_entry *VAR_2) {
    if (VAR_0->meta->readdir)
        return VAR_0->meta->readdir(VAR_0, VAR_1, VAR_2);

    if (VAR_0->meta->children) {
        if (*VAR_1 >= VAR_0->meta->children_sizeof/sizeof(VAR_0->meta->children[0]))
            return 0;
        VAR_2->meta = &VAR_0->meta->children[*VAR_1];
        VAR_2->pid = VAR_0->pid;
        (*VAR_1)++;
        return 1;
    }
    FUNC_0(!"read from invalid proc directory");
}
