
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
    size_t VAR_4;

    VAR_2 = VAR_0;

    for (VAR_4 = 0; VAR_4 != 100; ++VAR_4) {
        FUNC_0(&VAR_1, 3, 4);
        FUNC_1("75%", VAR_3);

        FUNC_0(&VAR_1, 1, 2);
        FUNC_1("50%", VAR_3);

        FUNC_0(&VAR_1, 1, 4);
        FUNC_1("25%", VAR_3);

        FUNC_0(&VAR_1, 1, 10);
        FUNC_1("10%", VAR_3);

        FUNC_0(&VAR_1, 1, 20);
        FUNC_1("5%", VAR_3);

        FUNC_0(&VAR_1, 1, 40);
        FUNC_1("2.5%", VAR_3);

        FUNC_0(&VAR_1, 1, 64);
        FUNC_1("1.6%", VAR_3);
    }
}
