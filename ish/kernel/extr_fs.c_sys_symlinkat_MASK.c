
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target ;
struct fd {int dummy; } ;
typedef int link ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (char*,struct fd*,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;

dword_t FUNC_4(addr_t VAR_3, fd_t VAR_4, addr_t VAR_5) {
    char VAR_6[VAR_0];
    if (FUNC_3(VAR_3, VAR_6, sizeof(VAR_6)))
        return VAR_2;
    char VAR_7[VAR_0];
    if (FUNC_3(VAR_5, VAR_7, sizeof(VAR_7)))
        return VAR_2;
    FUNC_0("symlinkat(\"%s\", %d, \"%s\")", VAR_6, VAR_4, VAR_7);
    struct fd *VAR_8 = FUNC_1(VAR_4);
    if (VAR_8 == ((void*)0))
        return VAR_1;
    return FUNC_2(VAR_6, VAR_8, VAR_7);
}
