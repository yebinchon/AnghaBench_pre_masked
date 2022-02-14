
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path_read_stat; } ;
struct mount {TYPE_1__ stmt; } ;
struct ish_stat {int dummy; } ;
typedef int ino_t ;


 int FUNC_0 (int ,int,char const*) ;
 int FUNC_1 (struct mount*,int ) ;
 int FUNC_2 (struct mount*,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;

bool FUNC_5(struct mount *VAR_0, const char *VAR_1, struct ish_stat *VAR_2, ino_t *VAR_3) {

    FUNC_0(VAR_0->stmt.path_read_stat, 1, VAR_1);
    bool VAR_4 = FUNC_1(VAR_0, VAR_0->stmt.path_read_stat);
    if (VAR_4) {
        if (VAR_3)
            *VAR_3 = FUNC_4(VAR_0->stmt.path_read_stat, 0);
        if (VAR_2)
            *VAR_2 = *(struct ish_stat *) FUNC_3(VAR_0->stmt.path_read_stat, 1);
    }
    FUNC_2(VAR_0, VAR_0->stmt.path_read_stat);
    return VAR_4;
}
