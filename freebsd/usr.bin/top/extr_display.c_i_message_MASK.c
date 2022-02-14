
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 char* FUNC_2 (char*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_5 ;

void
FUNC_5(void)
{
    VAR_3 = FUNC_2(VAR_3, VAR_0);

    while (VAR_1 < VAR_5)
    {
 FUNC_1('\n', VAR_4);
 VAR_1++;
    }
    if (VAR_3[0] != '\0')
    {
 FUNC_4(VAR_3);
 VAR_2 = FUNC_3(VAR_3);
 VAR_3[0] = '\0';
    }
    else if (VAR_2 > 0)
    {
 (void) FUNC_0(VAR_2);
 VAR_2 = 0;
    }
}
