
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char) ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_5 ;

void
FUNC_6(int VAR_6, char *VAR_7)
{
    char *VAR_8;
    char *VAR_9;


    while (VAR_0 < VAR_5 + VAR_6)
    {
 FUNC_3('\n');
 VAR_0++;
    }


    int VAR_10 = FUNC_5(VAR_7);
    if (VAR_1 < VAR_10)
    {
 VAR_7[VAR_1] = '\0';
    }


    FUNC_0(VAR_7, VAR_4);


    VAR_9 = VAR_3 ? VAR_2 + FUNC_1(VAR_6) : VAR_2;
    VAR_8 = FUNC_4(VAR_9, VAR_7);


    if (VAR_8 - VAR_9 < VAR_1)
    {
 FUNC_2(VAR_8, 0, VAR_1 - (VAR_8 - VAR_9));
    }
}
