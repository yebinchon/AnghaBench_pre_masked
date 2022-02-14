
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit_ {scalar_t__ max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct rlimit_*) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(int VAR_2, struct rlimit_ VAR_3) {
    if (FUNC_1())
        return 0;
    struct rlimit_ VAR_4;
    int VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_4);
    if (VAR_5 < 0)
        return VAR_5;
    if (VAR_3.max > VAR_4.max)
        return VAR_0;
    return 0;
}
