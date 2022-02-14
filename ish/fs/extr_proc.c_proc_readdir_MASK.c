
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_entry {int dummy; } ;
struct TYPE_2__ {int entry; } ;
struct fd {int offset; TYPE_1__ proc; } ;
struct dir_entry {scalar_t__ inode; int name; } ;


 int FUNC_0 (int *,int *,struct proc_entry*) ;
 int FUNC_1 (struct proc_entry*,int ) ;

__attribute__((used)) static int FUNC_2(struct fd *VAR_0, struct dir_entry *VAR_1) {
    struct proc_entry VAR_2;
    bool VAR_3 = FUNC_0(&VAR_0->proc.entry, &VAR_0->offset, &VAR_2);
    if (!VAR_3)
        return 0;
    FUNC_1(&VAR_2, VAR_1->name);
    VAR_1->inode = 0;
    return 1;
}
