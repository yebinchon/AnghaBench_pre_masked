
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; } ;
struct fd {int offset; TYPE_1__ devpts; } ;
struct dir_entry {int inode; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct fd *VAR_1, struct dir_entry *VAR_2) {
    FUNC_0(VAR_1->devpts.num == -1);

    int VAR_3 = VAR_1->offset;
    while (VAR_3 < VAR_0 && !FUNC_1(VAR_3))
        VAR_3++;
    if (VAR_3 >= VAR_0)
        return 0;
    VAR_1->offset = VAR_3 + 1;
    FUNC_2(VAR_2->name, "%d", VAR_3);
    VAR_2->inode = VAR_3 + 3;
    return 1;
}
