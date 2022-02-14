
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int root_fd; } ;
typedef int mode_t_ ;


 int FUNC_0 () ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mount *VAR_0, const char *VAR_1, mode_t_ VAR_2) {
    int VAR_3 = FUNC_2(VAR_0->root_fd, FUNC_1(VAR_1), VAR_2);
    if (VAR_3 < 0)
        return FUNC_0();
    return 0;
}
