
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uid; int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,char*,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,scalar_t__) ;

int
FUNC_4(int VAR_3, char VAR_4[], bool VAR_5)
{
    int VAR_6;





    VAR_6 = FUNC_1(VAR_3);

    if (!FUNC_2(VAR_6))
    {
 if (!VAR_5)
     return (0);
 if (VAR_1[VAR_6].uid == VAR_3)
     return(VAR_6);
    }


    VAR_1[VAR_6].uid = VAR_3;
    (void) FUNC_3(VAR_1[VAR_6].name, VAR_4, VAR_0 - 1);
    return(VAR_6);
}
