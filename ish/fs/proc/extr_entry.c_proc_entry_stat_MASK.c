
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct statbuf {int inode; int mode; } ;
struct proc_entry {int pid; scalar_t__ fd; TYPE_1__* meta; } ;
struct TYPE_2__ {int inode; } ;


 int FUNC_0 (struct statbuf*,int ,int) ;
 int FUNC_1 (struct proc_entry*) ;

int FUNC_2(struct proc_entry *VAR_0, struct statbuf *VAR_1) {
    FUNC_0(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->mode = FUNC_1(VAR_0);
    VAR_1->inode = VAR_0->meta->inode | VAR_0->pid << 16 | (uint64_t) VAR_0->fd << 48;
    return 0;
}
