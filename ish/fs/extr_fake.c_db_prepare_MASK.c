
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int db; } ;
typedef int sqlite3_stmt ;


 int FUNC_0 (struct mount*) ;
 int FUNC_1 (int ,char const*,scalar_t__,int **,int *) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static sqlite3_stmt *FUNC_3(struct mount *VAR_0, const char *VAR_1) {
    sqlite3_stmt *VAR_2;
    FUNC_1(VAR_0->db, VAR_1, FUNC_2(VAR_1) + 1, &VAR_2, ((void*)0));
    FUNC_0(VAR_0);
    return VAR_2;
}
