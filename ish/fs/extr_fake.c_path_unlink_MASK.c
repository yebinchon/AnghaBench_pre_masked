
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path_unlink; } ;
struct mount {TYPE_1__ stmt; } ;
typedef scalar_t__ ino_t ;


 int FUNC_0 (int ,int,char const*) ;
 int FUNC_1 (struct mount*,int ) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (struct mount*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct mount*,char const*) ;
 int FUNC_5 (struct mount*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mount *VAR_0, const char *VAR_1) {
    ino_t VAR_2 = FUNC_4(VAR_0, VAR_1);
    if (VAR_2 == 0)
        FUNC_2("path_unlink(%s): nonexistent path", VAR_1);

    FUNC_0(VAR_0->stmt.path_unlink, 1, VAR_1);
    FUNC_1(VAR_0, VAR_0->stmt.path_unlink);
    if (FUNC_3(VAR_0, VAR_2))
        FUNC_5(VAR_0, VAR_2);
}
