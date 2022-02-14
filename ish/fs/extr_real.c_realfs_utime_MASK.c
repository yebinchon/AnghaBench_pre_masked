
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct mount {int root_fd; } ;


 int FUNC_0 () ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int ,struct timespec*,int ) ;

int FUNC_3(struct mount *VAR_0, const char *VAR_1, struct timespec VAR_2, struct timespec VAR_3) {
    struct timespec VAR_4[2] = {VAR_2, VAR_3};
    int VAR_5 = FUNC_2(VAR_0->root_fd, FUNC_1(VAR_1), VAR_4, 0);
    if (VAR_5 < 0)
        return FUNC_0();
    return 0;
}
