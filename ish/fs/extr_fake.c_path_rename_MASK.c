
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path_rename; } ;
struct mount {TYPE_1__ stmt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char const*) ;
 int FUNC_1 (struct mount*,int ) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (int ,int,char*,size_t,int ) ;
 int FUNC_4 (int ,int,size_t) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(struct mount *VAR_1, const char *VAR_2, const char *VAR_3) {
    size_t VAR_4 = FUNC_5(VAR_2);
    FUNC_4(VAR_1->stmt.path_rename, 1, VAR_4);
    FUNC_0(VAR_1->stmt.path_rename, 2, VAR_3);
    char VAR_5[VAR_4 + 1];
    FUNC_2(VAR_5, VAR_2, VAR_4);
    VAR_5[VAR_4] = '/';
    FUNC_3(VAR_1->stmt.path_rename, 3, VAR_5, VAR_4 + 1, VAR_0);
    VAR_5[VAR_4] = '0';
    FUNC_3(VAR_1->stmt.path_rename, 4, VAR_5, VAR_4 + 1, VAR_0);
    FUNC_3(VAR_1->stmt.path_rename, 5, VAR_5, VAR_4, VAR_0);
    FUNC_1(VAR_1, VAR_1->stmt.path_rename);
}
