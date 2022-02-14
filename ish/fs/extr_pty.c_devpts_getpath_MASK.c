
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; } ;
struct fd {TYPE_1__ devpts; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct fd *VAR_0, char *VAR_1) {
    if (VAR_0->devpts.num == -1)
        FUNC_1(VAR_1, "");
    else
        FUNC_0(VAR_1, "/%d", VAR_0->devpts.num);
    return 0;
}
