
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path_create_path; int path_create_stat; } ;
struct mount {TYPE_1__ stmt; } ;
struct ish_stat {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char const*) ;
 int FUNC_1 (struct mount*,int ) ;
 int FUNC_2 (int ,int,struct ish_stat*,int,int ) ;

void FUNC_3(struct mount *VAR_1, const char *VAR_2, struct ish_stat *VAR_3) {

    FUNC_2(VAR_1->stmt.path_create_stat, 1, VAR_3, sizeof(*VAR_3), VAR_0);
    FUNC_1(VAR_1, VAR_1->stmt.path_create_stat);

    FUNC_0(VAR_1->stmt.path_create_path, 1, VAR_2);
    FUNC_1(VAR_1, VAR_1->stmt.path_create_path);
}
