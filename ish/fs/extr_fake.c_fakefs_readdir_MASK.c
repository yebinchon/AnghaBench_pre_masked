
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {int mount; int * ops; } ;
struct dir_entry {char* name; int inode; } ;
struct TYPE_2__ {int (* readdir ) (struct fd*,struct dir_entry*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (struct fd*,char*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (struct fd*,struct dir_entry*) ;

__attribute__((used)) static int FUNC_9(struct fd *VAR_3, struct dir_entry *VAR_4) {
    FUNC_0(VAR_3->ops == &VAR_1);
    int VAR_5;
retry:
    VAR_5 = VAR_2.readdir(VAR_3, VAR_4);
    if (VAR_5 <= 0)
        return VAR_5;


    char VAR_6[VAR_0 + 1];
    FUNC_4(VAR_3, VAR_6);
    if (FUNC_6(VAR_4->name, "..") == 0) {
        if (FUNC_6(VAR_6, "") != 0) {
            *FUNC_7(VAR_6, '/') = '\0';
        }
    } else if (FUNC_6(VAR_4->name, ".") != 0) {

        FUNC_5(VAR_6, "/");
        FUNC_5(VAR_6, VAR_4->name);
    }

    FUNC_1(VAR_3->mount);
    VAR_4->inode = FUNC_3(VAR_3->mount, VAR_6);
    FUNC_2(VAR_3->mount);


    if (VAR_4->inode == 0)
        goto retry;
    return VAR_5;
}
