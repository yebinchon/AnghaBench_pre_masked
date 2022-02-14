
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inode_write_stat; } ;
struct mount {TYPE_1__ stmt; } ;
struct ish_stat {int dummy; } ;
typedef int ino_t ;


 int VAR_0 ;
 int FUNC_0 (struct mount*,int ) ;
 int FUNC_1 (int ,int,struct ish_stat*,int,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct mount *VAR_1, ino_t VAR_2, struct ish_stat *VAR_3) {

    FUNC_1(VAR_1->stmt.inode_write_stat, 1, VAR_3, sizeof(*VAR_3), VAR_0);
    FUNC_2(VAR_1->stmt.inode_write_stat, 2, VAR_2);
    FUNC_0(VAR_1, VAR_1->stmt.inode_write_stat);
}
