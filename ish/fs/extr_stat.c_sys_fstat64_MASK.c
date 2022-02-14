
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct statbuf {int dummy; } ;
struct newstat64 {int dummy; } ;
struct fd {TYPE_2__* mount; } ;
typedef int fd_t ;
typedef int dword_t ;
typedef int addr_t ;
struct TYPE_4__ {TYPE_1__* fs; } ;
struct TYPE_3__ {int (* fstat ) (struct fd*,struct statbuf*) ;} ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fd* FUNC_1 (int ) ;
 struct newstat64 FUNC_2 (struct statbuf) ;
 int FUNC_3 (struct fd*,struct statbuf*) ;
 scalar_t__ FUNC_4 (int ,struct newstat64) ;

dword_t FUNC_5(fd_t VAR_2, addr_t VAR_3) {
    FUNC_0("fstat64(%d, 0x%x)", VAR_2, VAR_3);
    struct fd *VAR_4 = FUNC_1(VAR_2);
    if (VAR_4 == ((void*)0))
        return VAR_0;
    struct statbuf VAR_5 = {};
    int VAR_6 = VAR_4->mount->fs->fstat(VAR_4, &VAR_5);
    if (VAR_6 < 0)
        return VAR_6;
    struct newstat64 VAR_7 = FUNC_2(VAR_5);
    if (FUNC_4(VAR_3, VAR_7))
        return VAR_1;
    return 0;
}
