
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int root_fd; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_5(struct mount *VAR_1, const char *VAR_2, char *VAR_3, size_t VAR_4) {

    int VAR_5 = FUNC_3(VAR_1->root_fd, FUNC_2(VAR_2), VAR_0);
    if (VAR_5 < 0)
        return FUNC_1();
    int VAR_6 = FUNC_4(VAR_5, VAR_3, VAR_4);
    FUNC_0(VAR_5);
    if (VAR_6 < 0)
        return FUNC_1();
    return VAR_6;
}
