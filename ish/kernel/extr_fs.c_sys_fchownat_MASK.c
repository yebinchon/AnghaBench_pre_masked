
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct fd {int dummy; } ;
typedef int path ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (struct fd*,char*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ,char*,int) ;

dword_t FUNC_5(fd_t VAR_6, addr_t VAR_7, dword_t VAR_8, dword_t VAR_9, int VAR_10) {
    char VAR_11[VAR_1];
    if (FUNC_4(VAR_7, VAR_11, sizeof(VAR_11)))
        return VAR_3;
    FUNC_0("fchownat(%d, \"%s\", %d, %d, %d)", VAR_6, VAR_11, VAR_8, VAR_9, VAR_10);
    struct fd *VAR_12 = FUNC_1(VAR_6);
    if (VAR_12 == ((void*)0))
        return VAR_2;
    int VAR_13;
    bool VAR_14 = VAR_10 & VAR_0 ? 0 : 1;
    if (VAR_8 != (uid_t) -1) {
        VAR_13 = FUNC_2(VAR_12, VAR_11, FUNC_3(VAR_5, VAR_8), VAR_14);
        if (VAR_13 < 0)
            return VAR_13;
    }
    if (VAR_9 != (uid_t) -1) {
        VAR_13 = FUNC_2(VAR_12, VAR_11, FUNC_3(VAR_4, VAR_9), VAR_14);
        if (VAR_13 < 0)
            return VAR_13;
    }
    return 0;
}
