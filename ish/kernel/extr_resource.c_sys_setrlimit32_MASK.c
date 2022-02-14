
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit_ {int max; int cur; } ;
typedef int dword_t ;
typedef int addr_t ;


 int FUNC_0 (char*,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,struct rlimit_) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,struct rlimit_) ;
 scalar_t__ FUNC_3 (int ,struct rlimit_) ;

dword_t FUNC_4(dword_t VAR_2, addr_t VAR_3) {
    struct rlimit_ VAR_4;
    if (FUNC_3(VAR_3, VAR_4))
        return VAR_0;
    FUNC_0("setrlimit(%d, {cur=%#x, max=%#x})", VAR_2, VAR_4.cur, VAR_4.max);
    int VAR_5 = FUNC_1(VAR_2, VAR_4);
    if (VAR_5 < 0)
        return VAR_5;
    return FUNC_2(VAR_1, VAR_2, VAR_4);
}
