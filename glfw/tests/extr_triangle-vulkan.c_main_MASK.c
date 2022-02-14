
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demo {int dummy; } ;


 int FUNC_0 (struct demo*) ;
 int FUNC_1 (struct demo*) ;
 int FUNC_2 (struct demo*,int const,char const**) ;
 int FUNC_3 (struct demo*) ;
 int FUNC_4 (struct demo*) ;
 int FUNC_5 (struct demo*) ;
 int VAR_0 ;

int FUNC_6(const int VAR_1, const char *VAR_2[]) {
    struct demo VAR_3;

    FUNC_2(&VAR_3, VAR_1, VAR_2);
    FUNC_1(&VAR_3);
    FUNC_3(&VAR_3);

    FUNC_4(&VAR_3);
    FUNC_5(&VAR_3);

    FUNC_0(&VAR_3);

    return VAR_0;
}
