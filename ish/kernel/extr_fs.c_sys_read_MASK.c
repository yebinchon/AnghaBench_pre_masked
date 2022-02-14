
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* ops; int type; } ;
typedef size_t int_t ;
typedef int fd_t ;
typedef size_t dword_t ;
typedef int addr_t ;
struct TYPE_2__ {size_t (* read ) (struct fd*,char*,size_t) ;} ;


 int FUNC_0 (char*,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct fd* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 size_t FUNC_5 (struct fd*,char*,size_t) ;
 scalar_t__ FUNC_6 (int ,char*,size_t) ;

dword_t FUNC_7(fd_t VAR_4, addr_t VAR_5, dword_t VAR_6) {
    FUNC_0("read(%d, 0x%x, %d)", VAR_4, VAR_5, VAR_6);
    char *VAR_7 = (char *) FUNC_4(VAR_6+1);
    if (VAR_7 == ((void*)0))
        return VAR_3;
    int_t VAR_8 = 0;
    struct fd *VAR_9 = FUNC_2(VAR_4);
    if (VAR_9 == ((void*)0) || VAR_9->ops->read == ((void*)0)) {
        VAR_8 = VAR_0;
        goto out;
    }
    if (FUNC_1(VAR_9->type)) {
        VAR_8 = VAR_2;
        goto out;
    }
    VAR_8 = VAR_9->ops->read(VAR_9, VAR_7, VAR_6);
    if (VAR_8 >= 0) {
        VAR_7[VAR_8] = '\0';
        FUNC_0(" \"%.99s\"", VAR_7);
        if (FUNC_6(VAR_5, VAR_7, VAR_8))
            VAR_8 = VAR_1;
    }
out:
    FUNC_3(VAR_7);
    return VAR_8;
}
