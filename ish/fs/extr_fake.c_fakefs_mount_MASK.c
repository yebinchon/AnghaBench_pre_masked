
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct stat {scalar_t__ st_ino; } ;
struct TYPE_3__ {void* try_cleanup_inode; void* path_from_inode; void* path_rename; void* path_unlink; void* path_link; void* inode_write_stat; void* inode_read_stat; void* path_create_path; void* path_create_stat; void* path_read_stat; void* path_get_inode; void* rollback; void* commit; void* begin; } ;
struct mount {char* source; int root_fd; TYPE_1__ stmt; int lock; int db; } ;
typedef int sqlite3_stmt ;
typedef int int64_t ;
typedef scalar_t__ ino_t ;
typedef int buf ;
struct TYPE_4__ {int (* mount ) (struct mount*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mount*) ;
 void* FUNC_4 (struct mount*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct mount*) ;
 int FUNC_7 (struct mount*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int,char*,int) ;
 TYPE_2__ VAR_9 ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int *,int ) ;
 int FUNC_16 (int ,char*,int,int,int *,int ,int *,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*,int *,int ,int *) ;
 scalar_t__ FUNC_20 (int *) ;
 int FUNC_21 (int ,int ,int ,int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_22 (char*,struct stat*) ;
 scalar_t__ FUNC_23 (char*,char*) ;
 int FUNC_24 (char*,char*) ;
 scalar_t__ FUNC_25 (char*,char*,int) ;
 char* FUNC_26 (char*,char) ;
 int FUNC_27 (struct mount*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_28(struct mount *VAR_12) {
    char VAR_13[VAR_1];
    FUNC_24(VAR_13, VAR_12->source);
    char *VAR_14 = FUNC_26(VAR_13, '/') + 1;
    FUNC_1(FUNC_23(VAR_14, "data") == 0);
    FUNC_24(VAR_14, "meta.db");


    char VAR_15[16] = {};
    int VAR_16 = FUNC_9(VAR_13, VAR_0);
    if (VAR_16 < 0)
        return FUNC_5();
    FUNC_11(VAR_16, VAR_15, sizeof(VAR_15));
    FUNC_2(VAR_16);
    if (FUNC_25(VAR_15, "SQLite format 3", 15) != 0)
        return VAR_8;

    int VAR_17 = FUNC_19(VAR_13, &VAR_12->db, VAR_4, ((void*)0));
    if (VAR_17 != VAR_3) {
        FUNC_10("error opening database: %s\n", FUNC_17(VAR_12->db));
        FUNC_14(VAR_12->db);
        return VAR_8;
    }
    FUNC_13(VAR_12->db, 1000);
    FUNC_16(VAR_12->db, "change_prefix", 3, VAR_7 | VAR_2, ((void*)0), VAR_10, ((void*)0), ((void*)0));
    FUNC_3(VAR_12);


    sqlite3_stmt *VAR_18 = FUNC_4(VAR_12, "pragma journal_mode=wal");
    FUNC_3(VAR_12);
    FUNC_20(VAR_18);
    FUNC_3(VAR_12);
    FUNC_18(VAR_18);

    VAR_18 = FUNC_4(VAR_12, "pragma foreign_keys=true");
    FUNC_3(VAR_12);
    FUNC_20(VAR_18);
    FUNC_3(VAR_12);
    FUNC_18(VAR_18);






    VAR_17 = VAR_9.mount(VAR_12);
    if (VAR_17 < 0)
        return VAR_17;

    VAR_17 = FUNC_6(VAR_12);
    if (VAR_17 < 0)
        return VAR_17;





    struct stat VAR_19;
    if (FUNC_22(VAR_13, &VAR_19) < 0) FUNC_0("stat database");
    ino_t VAR_20 = VAR_19.st_ino;
    VAR_18 = FUNC_4(VAR_12, "select db_inode from meta");
    if (FUNC_20(VAR_18) == VAR_5) {
        if ((uint64_t) FUNC_15(VAR_18, 0) != VAR_20) {
            FUNC_18(VAR_18);
            VAR_18 = ((void*)0);
            int VAR_21 = FUNC_7(VAR_12);
            if (VAR_21 < 0) {
                FUNC_2(VAR_12->root_fd);
                return VAR_21;
            }
        }
    }
    if (VAR_18 != ((void*)0))
        FUNC_18(VAR_18);


    VAR_18 = FUNC_4(VAR_12, "update meta set db_inode = ?");
    FUNC_12(VAR_18, 1, (int64_t) VAR_20);
    FUNC_3(VAR_12);
    FUNC_20(VAR_18);
    FUNC_3(VAR_12);
    FUNC_18(VAR_18);


    VAR_18 = FUNC_4(VAR_12, "delete from stats where not exists (select 1 from paths where inode = stats.inode)");
    FUNC_3(VAR_12);
    FUNC_20(VAR_18);
    FUNC_3(VAR_12);
    FUNC_18(VAR_18);

    FUNC_8(&VAR_12->lock);
    VAR_12->stmt.begin = FUNC_4(VAR_12, "begin");
    VAR_12->stmt.commit = FUNC_4(VAR_12, "commit");
    VAR_12->stmt.rollback = FUNC_4(VAR_12, "rollback");
    VAR_12->stmt.path_get_inode = FUNC_4(VAR_12, "select inode from paths where path = ?");
    VAR_12->stmt.path_read_stat = FUNC_4(VAR_12, "select inode, stat from stats natural join paths where path = ?");
    VAR_12->stmt.path_create_stat = FUNC_4(VAR_12, "insert into stats (stat) values (?)");
    VAR_12->stmt.path_create_path = FUNC_4(VAR_12, "insert or replace into paths values (?, last_insert_rowid())");
    VAR_12->stmt.inode_read_stat = FUNC_4(VAR_12, "select stat from stats where inode = ?");
    VAR_12->stmt.inode_write_stat = FUNC_4(VAR_12, "update stats set stat = ? where inode = ?");
    VAR_12->stmt.path_link = FUNC_4(VAR_12, "insert or replace into paths (path, inode) values (?, ?)");
    VAR_12->stmt.path_unlink = FUNC_4(VAR_12, "delete from paths where path = ?");
    VAR_12->stmt.path_rename = FUNC_4(VAR_12, "update or replace paths set path = change_prefix(path, ?, ?) "
            "where (path >= ? and path < ?) or path = ?");
    VAR_12->stmt.path_from_inode = FUNC_4(VAR_12, "select path from paths where inode = ?");
    VAR_12->stmt.try_cleanup_inode = FUNC_4(VAR_12, "delete from stats where inode = ? and not exists (select 1 from paths where inode = stats.inode)");

    return 0;
}
