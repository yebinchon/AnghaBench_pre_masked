
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; int asize; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,char*) ;

void FUNC_6(void)
{
 git_buf VAR_1 = VAR_0;


 FUNC_2(FUNC_5(&VAR_1, "Hello"));
 FUNC_1(5, VAR_1);
 FUNC_1(8, VAR_1);


 FUNC_2(FUNC_4(&VAR_1, 1));
 FUNC_1(5, VAR_1);
 FUNC_1(8, VAR_1);


 FUNC_2(FUNC_4(&VAR_1, 16));
 FUNC_1(5, VAR_1);
 FUNC_0(VAR_1 > 8);

 FUNC_3(&VAR_1);
}
