
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ thread; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int*,int) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (char) ;
 int FUNC_5 (int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,int*,int ) ;

void
FUNC_7(int VAR_7, int *VAR_8)
{
    int VAR_9;

    VAR_4 = FUNC_5(VAR_4, 0);


    FUNC_3("%d %s:", VAR_7, VAR_5.thread ? "threads" : "processes");
    VAR_1 = VAR_7;


    VAR_9 = FUNC_0(VAR_7);
    while (VAR_9++ < (VAR_5.thread ? 6 : 4))
    {
 FUNC_4(' ');
    }


    FUNC_6(VAR_4, VAR_8, VAR_3);
    FUNC_1(VAR_4, VAR_6);


    FUNC_2(VAR_0, VAR_8, VAR_2 * sizeof(int));
}
