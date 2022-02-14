
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EditLine ;


 int VAR_0 ;
 char* FUNC_0 (int *,int*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static const char *
FUNC_3(EditLine *VAR_4, int *VAR_5, int VAR_6)
{
    const char *VAR_7;

    if (FUNC_2(VAR_1))
        VAR_7 = ((void*)0);
    else {
        VAR_0 = VAR_6;
        if (VAR_3)

            FUNC_1(&VAR_2);
        VAR_7 = FUNC_0(VAR_4, VAR_5);
    }

    VAR_0 = -1;

    return VAR_7;
}
