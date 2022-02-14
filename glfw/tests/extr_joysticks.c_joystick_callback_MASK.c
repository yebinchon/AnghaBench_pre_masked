
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(int VAR_6, int VAR_7)
{
    if (VAR_7 == VAR_0)
        VAR_4[VAR_3++] = VAR_6;
    else if (VAR_7 == VAR_1)
    {
        int VAR_8;

        for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
        {
            if (VAR_4[VAR_8] == VAR_6)
                break;
        }

        for (VAR_8 = VAR_8 + 1; VAR_8 < VAR_3; VAR_8++)
            VAR_4[VAR_8 - 1] = VAR_4[VAR_8];

        VAR_3--;
    }

    if (!FUNC_0(VAR_5, VAR_2))
        FUNC_1(VAR_5);
}
