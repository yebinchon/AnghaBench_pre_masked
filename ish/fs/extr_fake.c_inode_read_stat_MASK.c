
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inode_read_stat; } ;
struct mount {TYPE_1__ stmt; } ;
struct ish_stat {int dummy; } ;
typedef scalar_t__ ino_t ;


 int FUNC_0 (struct mount*,int ) ;
 int FUNC_1 (struct mount*,int ) ;
 int FUNC_2 (char*,unsigned long long) ;
 int FUNC_3 (int ,int,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct mount *VAR_0, ino_t VAR_1, struct ish_stat *VAR_2) {

    FUNC_3(VAR_0->stmt.inode_read_stat, 1, VAR_1);
    if (!FUNC_0(VAR_0, VAR_0->stmt.inode_read_stat))
        FUNC_2("inode_read_stat(%llu): missing inode", (unsigned long long) VAR_1);
    *VAR_2 = *(struct ish_stat *) FUNC_4(VAR_0->stmt.inode_read_stat, 0);
    FUNC_1(VAR_0, VAR_0->stmt.inode_read_stat);
}
