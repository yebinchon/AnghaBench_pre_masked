
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit_ {int cur; int max; } ;
struct rlimit32_ {int cur; int max; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,struct rlimit_*) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct rlimit32_ *VAR_2) {
    FUNC_0("getlimit(%d)", VAR_1);
    struct rlimit_ VAR_3;
    int VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
    if (VAR_4 < 0)
        return VAR_4;
    FUNC_0(" {cur=%#x, max=%#x}", VAR_3.cur, VAR_3.max);

    VAR_2->max = VAR_3.max;
    VAR_2->cur = VAR_3.cur;
    return 0;
}
