
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {int dummy; } ;
struct TYPE_2__ {int (* rmdir ) (struct mount*,char const*) ;} ;


 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*,char const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (struct mount*,char const*) ;

__attribute__((used)) static int FUNC_5(struct mount *VAR_1, const char *VAR_2) {
    FUNC_0(VAR_1);
    int VAR_3 = VAR_0.rmdir(VAR_1, VAR_2);
    if (VAR_3 < 0) {
        FUNC_2(VAR_1);
        return VAR_3;
    }
    FUNC_3(VAR_1, VAR_2);
    FUNC_1(VAR_1);
    return 0;
}
