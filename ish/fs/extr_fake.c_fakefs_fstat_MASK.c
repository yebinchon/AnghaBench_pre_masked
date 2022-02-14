
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statbuf {int rdev; int gid; int uid; int mode; int inode; } ;
struct ish_stat {int rdev; int gid; int uid; int mode; } ;
struct fd {int fake_inode; int mount; } ;
struct TYPE_2__ {int (* fstat ) (struct fd*,struct statbuf*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct ish_stat*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (struct fd*,struct statbuf*) ;

__attribute__((used)) static int FUNC_4(struct fd *VAR_1, struct statbuf *VAR_2) {
    int VAR_3 = VAR_0.fstat(VAR_1, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;
    FUNC_0(VAR_1->mount);
    struct ish_stat VAR_4;
    FUNC_2(VAR_1->mount, VAR_1->fake_inode, &VAR_4);
    FUNC_1(VAR_1->mount);
    VAR_2->inode = VAR_1->fake_inode;
    VAR_2->mode = VAR_4.mode;
    VAR_2->uid = VAR_4.uid;
    VAR_2->gid = VAR_4.gid;
    VAR_2->rdev = VAR_4.rdev;
    return 0;
}
