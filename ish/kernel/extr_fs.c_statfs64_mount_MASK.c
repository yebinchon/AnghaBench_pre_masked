
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfsbuf {int flags; int frsize; int namelen; int fsid; int ffree; int files; int bavail; int bfree; int blocks; int bsize; int type; } ;
struct statfs64_ {int flags; int frsize; int namelen; int fsid; int ffree; int files; int bavail; int bfree; int blocks; int bsize; int type; } ;
struct mount {int dummy; } ;
typedef int int_t ;
typedef int addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct mount*,struct statfsbuf*) ;
 scalar_t__ FUNC_1 (int ,struct statfs64_) ;

__attribute__((used)) static int_t FUNC_2(struct mount *VAR_1, addr_t VAR_2) {
    struct statfsbuf VAR_3 = {};
    int VAR_4 = FUNC_0(VAR_1, &VAR_3);
    if (VAR_4 < 0)
        return VAR_4;
    struct statfs64_ VAR_5 = {
        .type = VAR_3.type,
        .bsize = VAR_3.bsize,
        .blocks = VAR_3.blocks,
        .bfree = VAR_3.bfree,
        .bavail = VAR_3.bavail,
        .files = VAR_3.files,
        .ffree = VAR_3.ffree,
        .fsid = VAR_3.fsid,
        .namelen = VAR_3.namelen,
        .frsize = VAR_3.frsize,
        .flags = VAR_3.flags,
    };
    if (FUNC_1(VAR_2, VAR_5))
        return VAR_0;
    return 0;
}
