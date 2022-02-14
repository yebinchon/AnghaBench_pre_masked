
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path_get_inode; } ;
struct mount {TYPE_1__ stmt; } ;
typedef int ino_t ;


 int FUNC_0 (int ,int,char const*) ;
 scalar_t__ FUNC_1 (struct mount*,int ) ;
 int FUNC_2 (struct mount*,int ) ;
 int FUNC_3 (int ,int ) ;

ino_t FUNC_4(struct mount *VAR_0, const char *VAR_1) {

    FUNC_0(VAR_0->stmt.path_get_inode, 1, VAR_1);
    ino_t VAR_2 = 0;
    if (FUNC_1(VAR_0, VAR_0->stmt.path_get_inode))
        VAR_2 = FUNC_3(VAR_0->stmt.path_get_inode, 0);
    FUNC_2(VAR_0, VAR_0->stmt.path_get_inode);
    return VAR_2;
}
