
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit_ {int cur; } ;
typedef int rlim_t_ ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ,int,struct rlimit_*) ;

rlim_t_ FUNC_2(int VAR_1) {
    struct rlimit_ VAR_2;
    if (FUNC_1(VAR_0, VAR_1, &VAR_2) != 0)
        FUNC_0("invalid resource %d", VAR_1);
    return VAR_2.cur;
}
