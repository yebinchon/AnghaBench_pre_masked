
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int root_fd; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ,int ,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct mount *VAR_0, const char *VAR_1, char *VAR_2, size_t VAR_3) {
    ssize_t VAR_4 = FUNC_2(VAR_0->root_fd, FUNC_1(VAR_1), VAR_2, VAR_3);
    if (VAR_4 < 0)
        return FUNC_0();
    return VAR_4;
}
