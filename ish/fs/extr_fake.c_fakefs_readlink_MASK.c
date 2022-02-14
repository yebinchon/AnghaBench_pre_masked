
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {int dummy; } ;
struct ish_stat {int mode; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ (* readlink ) (struct mount*,char const*,char*,size_t) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 scalar_t__ FUNC_4 (struct mount*,char const*,char*,size_t) ;
 int FUNC_5 (struct mount*,char const*,struct ish_stat*,int *) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_6 (struct mount*,char const*,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_7(struct mount *VAR_3, const char *VAR_4, char *VAR_5, size_t VAR_6) {
    FUNC_1(VAR_3);
    struct ish_stat VAR_7;
    if (!FUNC_5(VAR_3, VAR_4, &VAR_7, ((void*)0))) {
        FUNC_3(VAR_3);
        return VAR_1;
    }
    if (!FUNC_0(VAR_7.mode)) {
        FUNC_3(VAR_3);
        return VAR_0;
    }

    ssize_t VAR_8 = VAR_2.readlink(VAR_3, VAR_4, VAR_5, VAR_6);
    if (VAR_8 == VAR_0)
        VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);
    FUNC_2(VAR_3);
    return VAR_8;
}
