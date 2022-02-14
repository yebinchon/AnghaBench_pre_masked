
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int dir; } ;
struct dirent {int d_name; int d_ino; } ;
struct dir_entry {int name; int inode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 struct dirent* FUNC_1 (int ) ;
 int FUNC_2 (struct fd*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct fd *VAR_1, struct dir_entry *VAR_2) {
    FUNC_2(VAR_1);
    VAR_0 = 0;
    struct dirent *VAR_3 = FUNC_1(VAR_1->dir);
    if (VAR_3 == ((void*)0)) {
        if (VAR_0 != 0)
            return FUNC_0();
        else
            return 0;
    }
    VAR_2->inode = VAR_3->d_ino;
    FUNC_3(VAR_2->name, VAR_3->d_name);
    return 1;
}
