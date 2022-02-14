
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int root_fd; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mount *VAR_1, const char *VAR_2) {
    int VAR_3 = FUNC_2(VAR_1->root_fd, FUNC_1(VAR_2), VAR_0);
    if (VAR_3 < 0)
        return FUNC_0();
    return 0;
}
