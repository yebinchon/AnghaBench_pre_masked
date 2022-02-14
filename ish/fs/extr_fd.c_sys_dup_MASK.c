
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int refcount; } ;
typedef int fd_t ;
typedef int dword_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (struct fd*,int ) ;

dword_t FUNC_3(fd_t VAR_1) {
    FUNC_0("dup(%d)", VAR_1);
    struct fd *VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 == ((void*)0))
        return VAR_0;
    VAR_2->refcount++;
    return FUNC_2(VAR_2, 0);
}
