
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *,int) ;
 int VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static void
FUNC_5(void)
{

    if (VAR_5 == ((void*)0))
 return;
    VAR_6 = 0;
    if (FUNC_0(FUNC_3(&VAR_9[VAR_1])))
 return;


    FUNC_4(&VAR_9[VAR_0], FUNC_3(&VAR_9[VAR_0]) | VAR_3);
    FUNC_4(&VAR_9[VAR_2], VAR_5->data[VAR_6++]);
    if (VAR_7)
 FUNC_2();
    else
 FUNC_1();
    VAR_4 = VAR_8;
}
