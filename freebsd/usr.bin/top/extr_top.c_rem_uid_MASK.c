
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* uid; } ;


 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(int VAR_2)
{
    size_t VAR_3 = 0;
    size_t VAR_4 = VAR_0;


    for (; VAR_3 < VAR_0; ++VAR_3)
    {
 if (VAR_1.uid[VAR_3] == -1)
     break;
 if (VAR_1.uid[VAR_3] == VAR_2)
     VAR_4 = VAR_3;
    }


    if (VAR_4 != VAR_0)
    {
 VAR_1.uid[VAR_4] = VAR_1.uid[VAR_3-1];
 VAR_1.uid[VAR_3-1] = -1;
    }
}
