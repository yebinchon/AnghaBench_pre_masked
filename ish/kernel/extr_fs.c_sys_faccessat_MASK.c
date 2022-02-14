
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uid_t_ ;
struct fd {int dummy; } ;
typedef int path ;
typedef int mode_t_ ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;
struct TYPE_2__ {void* egid; void* euid; void* gid; void* uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct fd* FUNC_1 (int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (struct fd*,char*,int ) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;

dword_t FUNC_4(fd_t VAR_5, addr_t VAR_6, mode_t_ VAR_7, dword_t VAR_8) {
    char VAR_9[VAR_1];
    if (FUNC_3(VAR_6, VAR_9, sizeof(VAR_9)))
        return VAR_3;
    struct fd *VAR_10 = FUNC_1(VAR_5);
    if (VAR_10 == ((void*)0))
        return VAR_2;
    FUNC_0("faccessat(%d, \"%s\", 0x%x, %d)", VAR_5, VAR_9, VAR_7, VAR_8);

    if (VAR_8 & VAR_0)
        return FUNC_2(VAR_10, VAR_9, VAR_7);

    uid_t_ VAR_11 = VAR_4->euid;
    uid_t_ VAR_12 = VAR_4->egid;
    VAR_4->euid = VAR_4->uid;
    VAR_4->egid = VAR_4->gid;
    int VAR_13 = FUNC_2(VAR_10, VAR_9, VAR_7);
    VAR_4->euid = VAR_11;
    VAR_4->egid = VAR_12;
    return VAR_13;
}
