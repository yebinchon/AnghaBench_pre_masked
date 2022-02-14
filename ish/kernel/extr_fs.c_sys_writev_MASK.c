
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec_ {unsigned int len; int base; } ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iovec_*) ;
 struct iovec_* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 scalar_t__ FUNC_3 (int ,struct iovec_*,int) ;

dword_t FUNC_4(fd_t VAR_2, addr_t VAR_3, dword_t VAR_4) {
    dword_t VAR_5 = sizeof(struct iovec_) * VAR_4;
    struct iovec_ *VAR_6 = FUNC_1(VAR_5);
    if (VAR_6 == ((void*)0))
        return VAR_1;
    int VAR_7 = 0;
    if (FUNC_3(VAR_3, VAR_6, VAR_5)) {
        VAR_7 = VAR_0;
        goto err;
    }
    dword_t VAR_8 = 0;
    for (unsigned VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        VAR_7 = FUNC_2(VAR_2, VAR_6[VAR_9].base, VAR_6[VAR_9].len);
        if (VAR_7 < 0)
            goto err;
        VAR_8 += VAR_7;
        if ((unsigned) VAR_7 < VAR_6[VAR_9].len)
            break;
    }
    FUNC_0(VAR_6);
    return VAR_8;

err:
    FUNC_0(VAR_6);
    return VAR_7;
}
