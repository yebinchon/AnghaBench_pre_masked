
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    int *VAR_2;
    size_t VAR_3;

    FUNC_3(VAR_0);
    VAR_3 = FUNC_0(&VAR_2);
    FUNC_1(VAR_3 == 0);

    FUNC_2(VAR_0, "0.0.0.0:80=3", 1);
    VAR_3 = FUNC_0(&VAR_2);
    FUNC_1(VAR_3 == 1);
    FUNC_1(VAR_2[0] == 3);

    FUNC_2(VAR_0, "0.0.0.0:80=3;/tmp/foo.sock=4", 1);
    VAR_3 = FUNC_0(&VAR_2);
    FUNC_1(VAR_3 == 2);
    FUNC_1(VAR_2[0] == 3);
    FUNC_1(VAR_2[1] == 4);

    FUNC_2(VAR_0, "0.0.0.0:80=foo", 1);
    VAR_3 = FUNC_0(&VAR_2);
    FUNC_1(VAR_3 == VAR_1);


    FUNC_2(VAR_0, "50908=4", 1);
    VAR_3 = FUNC_0(&VAR_2);
    FUNC_1(VAR_3 == 1);
    FUNC_1(VAR_2[0] == 4);
}
