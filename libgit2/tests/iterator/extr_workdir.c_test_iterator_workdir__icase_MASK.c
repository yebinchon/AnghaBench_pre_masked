
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int *,int,int *) ;
 int VAR_3 ;
 int FUNC_3 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 git_iterator *VAR_4;
 git_iterator_options VAR_5 = VAR_2;

 VAR_3 = FUNC_1("icase");


 FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
 FUNC_2(VAR_4, 20, ((void*)0), 20, ((void*)0));
 FUNC_4(VAR_4);


 VAR_5.flags = VAR_1;
 FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
 FUNC_2(VAR_4, 22, ((void*)0), 22, ((void*)0));
 FUNC_4(VAR_4);


 VAR_5.flags = VAR_0;
 FUNC_0(FUNC_3(&VAR_4, VAR_3, ((void*)0), ((void*)0), &VAR_5));
 FUNC_2(VAR_4, 12, ((void*)0), 22, ((void*)0));
 FUNC_4(VAR_4);
}
