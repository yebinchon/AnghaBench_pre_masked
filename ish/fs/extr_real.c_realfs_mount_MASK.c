
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {scalar_t__ root_fd; int source; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;

int FUNC_2(struct mount *VAR_1) {
    VAR_1->root_fd = FUNC_1(VAR_1->source, VAR_0);
    if (VAR_1->root_fd < 0)
        return FUNC_0();
    return 0;
}
