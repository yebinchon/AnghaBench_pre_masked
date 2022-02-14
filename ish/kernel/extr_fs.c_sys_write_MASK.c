
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* ops; } ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;
struct TYPE_2__ {int (* write ) (struct fd*,char*,int) ;} ;


 int FUNC_0 (char*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (struct fd*,char*,int) ;
 scalar_t__ FUNC_5 (int ,char*,int) ;

dword_t FUNC_6(fd_t VAR_3, addr_t VAR_4, dword_t VAR_5) {

    char *VAR_6 = FUNC_3(VAR_5 + 1);
    if (VAR_6 == ((void*)0))
        return VAR_2;
    dword_t VAR_7 = 0;
    if (FUNC_5(VAR_4, VAR_6, VAR_5)) {
        VAR_7 = VAR_1;
        goto out;
    }
    VAR_6[VAR_5] = '\0';
    FUNC_0("write(%d, \"%.100s\", %d)", VAR_3, VAR_6, VAR_5);
    struct fd *VAR_8 = FUNC_1(VAR_3);
    if (VAR_8 == ((void*)0) || VAR_8->ops->write == ((void*)0)) {
        VAR_7 = VAR_0;
        goto out;
    }
    VAR_7 = VAR_8->ops->write(VAR_8, VAR_6, VAR_5);
out:
    FUNC_2(VAR_6);
    return VAR_7;
}
