
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linux_dirent64_ {int dummy; } ;
struct fd {TYPE_1__* ops; int type; } ;
struct dir_entry {char* name; int inode; } ;
typedef void* off_t_ ;
typedef int int_t ;
typedef int ino_t ;
typedef int fd_t ;
typedef size_t dword_t ;
typedef size_t addr_t ;
struct TYPE_2__ {int (* readdir ) (struct fd*,struct dir_entry*) ;} ;


 int FUNC_0 (char*,int ,size_t,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fd* FUNC_2 (int ) ;
 int FUNC_3 (struct fd*,long) ;
 void* FUNC_4 (struct fd*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct fd*,struct dir_entry*) ;
 scalar_t__ FUNC_7 (size_t,char*,size_t) ;

int_t FUNC_8(fd_t VAR_3, addr_t VAR_4, dword_t VAR_5,
        size_t (*VAR_6)(void *, ino_t, off_t_, const char *, int)) {
    FUNC_0("getdents(%d, %#x, %#x)", VAR_3, VAR_4, VAR_5);
    struct fd *VAR_7 = FUNC_2(VAR_3);
    if (VAR_7 == ((void*)0))
        return VAR_0;
    if (!FUNC_1(VAR_7->type) || VAR_7->ops->readdir == ((void*)0))
        return VAR_2;

    dword_t VAR_8 = VAR_5;

    long VAR_9;
    int VAR_10;
    int VAR_11 = 0;
    while (1) {
        VAR_9 = FUNC_4(VAR_7);
        struct dir_entry VAR_12;
        VAR_10 = VAR_7->ops->readdir(VAR_7, &VAR_12);
        if (VAR_10 < 0)
            return VAR_10;
        if (VAR_10 == 0)
            break;

        size_t VAR_13 = sizeof(struct linux_dirent64_) + FUNC_5(VAR_12.name) + 4;
        char VAR_14[VAR_13];
        ino_t VAR_15 = VAR_12.inode;
        off_t_ VAR_16 = FUNC_4(VAR_7);
        const char *VAR_17 = VAR_12.name;
        int VAR_18 = 0;
        size_t VAR_19 = VAR_6(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18);
        if (VAR_11 < 20) {
            FUNC_0(" {inode=%d, offset=%d, name=%s, type=%d, reclen=%d}",
                    VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);
            VAR_11++;
        }

        if (VAR_19 > VAR_5)
            break;
        if (FUNC_7(VAR_4, VAR_14, VAR_19))
            return VAR_1;
        VAR_4 += VAR_19;
        VAR_5 -= VAR_19;
    }

    FUNC_3(VAR_7, VAR_9);
    return VAR_8 - VAR_5;
}
