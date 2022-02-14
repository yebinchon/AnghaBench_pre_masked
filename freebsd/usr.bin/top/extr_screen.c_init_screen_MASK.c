
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int c_lflag; int* c_cc; int c_oflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 TYPE_1__ VAR_13 ;
 int FUNC_0 (int ) ;
 int VAR_14 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_15 ;

void
FUNC_3(void)
{

    if (FUNC_1(VAR_2, &VAR_13) != -1)
    {

 VAR_12 = VAR_13;


 VAR_12.c_lflag &= ~(VAR_1|VAR_0);
 VAR_12.c_oflag &= ~(VAR_3);
 VAR_12.c_cc[VAR_7] = 1;
 VAR_12.c_cc[VAR_8] = 0;
 FUNC_2(VAR_2, VAR_4, &VAR_12);


 VAR_9 = VAR_13.c_cc[VAR_5];
 VAR_10 = VAR_13.c_cc[VAR_6];


 VAR_11 = 1;


 FUNC_0(VAR_15);
    }

    if (!VAR_11)
    {

 VAR_14 = 0;
    }
}
