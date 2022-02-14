
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int root_fd; } ;
struct fd {int real_fd; int * dir; } ;


 struct fd* FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct fd* FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int,int) ;
 int VAR_0 ;

__attribute__((used)) static struct fd *FUNC_6(struct mount *VAR_1, const char *VAR_2, int VAR_3, int VAR_4) {
    int VAR_5 = FUNC_4(VAR_3);
    int VAR_6 = FUNC_5(VAR_1->root_fd, FUNC_3(VAR_2), VAR_5, VAR_4);
    if (VAR_6 < 0)
        return FUNC_0(FUNC_1());
    struct fd *VAR_7 = FUNC_2(&VAR_0);
    VAR_7->real_fd = VAR_6;
    VAR_7->dir = ((void*)0);
    return VAR_7;
}
