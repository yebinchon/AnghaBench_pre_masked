
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; } ;
typedef TYPE_1__ git_vector ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int VAR_0 ;

void FUNC_8(void)
{
 git_vector VAR_1;
 int *VAR_2[2];

 VAR_2[0] = FUNC_3(sizeof(int));
 VAR_2[1] = FUNC_3(sizeof(int));

 *VAR_2[0] = 2;
 *VAR_2[1] = 1;

 FUNC_1(FUNC_5(&VAR_1, 5, VAR_0));
 FUNC_1(FUNC_6(&VAR_1, VAR_2[0]));
 FUNC_1(FUNC_6(&VAR_1, VAR_2[1]));
 FUNC_1(FUNC_6(&VAR_1, VAR_2[1]));
 FUNC_1(FUNC_6(&VAR_1, VAR_2[0]));
 FUNC_1(FUNC_6(&VAR_1, VAR_2[1]));
 FUNC_0(VAR_1.length == 5);

 FUNC_7(&VAR_1, ((void*)0));
 FUNC_0(VAR_1.length == 2);

 FUNC_4(&VAR_1);

 FUNC_2(VAR_2[0]);
 FUNC_2(VAR_2[1]);
}
