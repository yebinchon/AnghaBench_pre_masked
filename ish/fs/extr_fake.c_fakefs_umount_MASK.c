
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int try_cleanup_inode; int path_from_inode; int path_rename; int path_unlink; int path_link; int inode_write_stat; int inode_read_stat; int path_create_path; int path_create_stat; int path_read_stat; int path_get_inode; int rollback; int commit; int begin; } ;
struct mount {scalar_t__ db; TYPE_1__ stmt; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mount *VAR_1) {
    if (VAR_1->db) {
        FUNC_2(VAR_1->stmt.begin);
        FUNC_2(VAR_1->stmt.commit);
        FUNC_2(VAR_1->stmt.rollback);
        FUNC_2(VAR_1->stmt.path_get_inode);
        FUNC_2(VAR_1->stmt.path_read_stat);
        FUNC_2(VAR_1->stmt.path_create_stat);
        FUNC_2(VAR_1->stmt.path_create_path);
        FUNC_2(VAR_1->stmt.inode_read_stat);
        FUNC_2(VAR_1->stmt.inode_write_stat);
        FUNC_2(VAR_1->stmt.path_link);
        FUNC_2(VAR_1->stmt.path_unlink);
        FUNC_2(VAR_1->stmt.path_rename);
        FUNC_2(VAR_1->stmt.path_from_inode);
        FUNC_2(VAR_1->stmt.try_cleanup_inode);
        int VAR_2 = FUNC_1(VAR_1->db);
        if (VAR_2 != VAR_0) {
            FUNC_0("sqlite failed to close: %d\n", VAR_2);
        }
    }

    return 0;
}
