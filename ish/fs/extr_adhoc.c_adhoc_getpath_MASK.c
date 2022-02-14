
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ inode; } ;
struct fd {TYPE_1__ stat; } ;


 int FUNC_0 (char*,char*,char const*,...) ;

__attribute__((used)) static int FUNC_1(struct fd *VAR_0, char *VAR_1) {
    const char *VAR_2 = "unknown";
    if (VAR_0->stat.inode == 0)
        FUNC_0(VAR_1, "anon_inode:[%s]", VAR_2);
    else
        FUNC_0(VAR_1, "%s:[%lu]", VAR_2, (unsigned long) VAR_0->stat.inode);
    return 0;
}
