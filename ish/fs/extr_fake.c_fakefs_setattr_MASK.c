
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {int dummy; } ;
struct ish_stat {int dummy; } ;
struct attr {scalar_t__ type; } ;
typedef int ino_t ;
struct TYPE_2__ {int (* setattr ) (struct mount*,char const*,struct attr) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct ish_stat*,struct attr) ;
 int FUNC_4 (struct mount*,int ,struct ish_stat*) ;
 int FUNC_5 (struct mount*,char const*,struct ish_stat*,int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (struct mount*,char const*,struct attr) ;

__attribute__((used)) static int FUNC_7(struct mount *VAR_3, const char *VAR_4, struct attr VAR_5) {
    if (VAR_5.type == VAR_1)
        return VAR_2.setattr(VAR_3, VAR_4, VAR_5);
    FUNC_0(VAR_3);
    struct ish_stat VAR_6;
    ino_t VAR_7;
    if (!FUNC_5(VAR_3, VAR_4, &VAR_6, &VAR_7)) {
        FUNC_2(VAR_3);
        return VAR_0;
    }
    FUNC_3(&VAR_6, VAR_5);
    FUNC_4(VAR_3, VAR_7, &VAR_6);
    FUNC_1(VAR_3);
    return 0;
}
