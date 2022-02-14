
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int root_fd; } ;
typedef int off_t_ ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(struct mount *VAR_1, const char *VAR_2, off_t_ VAR_3) {
    int VAR_4 = FUNC_4(VAR_1->root_fd, FUNC_2(VAR_2), VAR_0);
    if (VAR_4 < 0)
        return FUNC_1();
    int VAR_5 = 0;
    if (FUNC_3(VAR_4, VAR_3) < 0)
        VAR_5 = FUNC_1();
    FUNC_0(VAR_4);
    return VAR_5;
}
