
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ish_stat {int dummy; } ;
struct fd {int mount; int fake_inode; } ;
struct attr {scalar_t__ type; } ;
struct TYPE_2__ {int (* fsetattr ) (struct fd*,struct attr) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ish_stat*,struct attr) ;
 int FUNC_3 (int ,int ,struct ish_stat*) ;
 int FUNC_4 (int ,int ,struct ish_stat*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (struct fd*,struct attr) ;

__attribute__((used)) static int FUNC_6(struct fd *VAR_2, struct attr VAR_3) {
    if (VAR_3.type == VAR_0)
        return VAR_1.fsetattr(VAR_2, VAR_3);
    FUNC_0(VAR_2->mount);
    struct ish_stat VAR_4;
    FUNC_3(VAR_2->mount, VAR_2->fake_inode, &VAR_4);
    FUNC_2(&VAR_4, VAR_3);
    FUNC_4(VAR_2->mount, VAR_2->fake_inode, &VAR_4);
    FUNC_1(VAR_2->mount);
    return 0;
}
