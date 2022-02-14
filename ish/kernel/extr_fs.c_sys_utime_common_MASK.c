
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; int tv_sec; } ;
struct fd {int dummy; } ;
typedef int path ;
typedef int fd_t ;
typedef int dword_t ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int ,int ,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (struct fd*,char*,struct timespec,struct timespec,int) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int) ;

__attribute__((used)) static dword_t FUNC_4(fd_t VAR_4, addr_t VAR_5, struct timespec VAR_6, struct timespec VAR_7, dword_t VAR_8) {
    char VAR_9[VAR_1];
    if (VAR_5 != 0)
        if (FUNC_3(VAR_5, VAR_9, sizeof(VAR_9)))
            return VAR_3;
    FUNC_0("utimensat(%d, %s, {{%d, %d}, {%d, %d}}, %d)", VAR_4, VAR_9,
            VAR_6.tv_sec, VAR_6.tv_nsec, VAR_7.tv_sec, VAR_7.tv_nsec, VAR_8);
    struct fd *VAR_10 = FUNC_1(VAR_4);
    if (VAR_10 == ((void*)0))
        return VAR_2;

    bool VAR_11 = VAR_8 & VAR_0 ? 0 : 1;
    return FUNC_2(VAR_10, VAR_5 != 0 ? VAR_9 : ".", VAR_6, VAR_7, VAR_11);
}
