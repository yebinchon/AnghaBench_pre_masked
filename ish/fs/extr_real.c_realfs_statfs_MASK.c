
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {int f_frsize; int f_namemax; int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; int f_bsize; } ;
struct statfsbuf {int frsize; int namelen; int ffree; int files; int bavail; int bfree; int blocks; int bsize; } ;
struct mount {int root_fd; } ;


 int FUNC_0 (int ,struct statvfs*) ;

int FUNC_1(struct mount *VAR_0, struct statfsbuf *VAR_1) {
    struct statvfs VAR_2 = {};
    FUNC_0(VAR_0->root_fd, &VAR_2);
    VAR_1->bsize = VAR_2.f_bsize;
    VAR_1->blocks = VAR_2.f_blocks;
    VAR_1->bfree = VAR_2.f_bfree;
    VAR_1->bavail = VAR_2.f_bavail;
    VAR_1->files = VAR_2.f_files;
    VAR_1->ffree = VAR_2.f_ffree;
    VAR_1->namelen = VAR_2.f_namemax;
    VAR_1->frsize = VAR_2.f_frsize;
    return 0;
}
