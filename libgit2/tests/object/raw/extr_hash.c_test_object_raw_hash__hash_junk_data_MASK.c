
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {int type; int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 TYPE_1__ VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

void FUNC_6(void)
{
 git_oid VAR_6, VAR_7;

 FUNC_1(FUNC_3(&VAR_7, VAR_5));


 VAR_3.data = VAR_4;
 FUNC_4(&VAR_6, &VAR_3);

 VAR_3.type = 0;
 FUNC_4(&VAR_6, &VAR_3);

 VAR_3.type = 5;
 FUNC_4(&VAR_6, &VAR_3);

 VAR_3.type = VAR_1;
 FUNC_4(&VAR_6, &VAR_3);

 VAR_3.type = VAR_2;
 FUNC_4(&VAR_6, &VAR_3);

 VAR_3.type = 42;
 FUNC_4(&VAR_6, &VAR_3);


 VAR_3.type = VAR_0;
 VAR_3.data = ((void*)0);
 FUNC_5(&VAR_6, &VAR_3);
 FUNC_0(FUNC_2(&VAR_6, &VAR_7) == 0);

 VAR_3.len = 1;
 FUNC_4(&VAR_6, &VAR_3);
}
