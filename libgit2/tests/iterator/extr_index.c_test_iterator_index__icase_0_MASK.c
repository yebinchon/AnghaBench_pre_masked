
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int *,int,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ) ;

void FUNC_7(void)
{
 git_iterator *VAR_4;
 git_iterator_options VAR_5 = VAR_2;
 git_index *VAR_6;

 VAR_3 = FUNC_1("icase");

 FUNC_0(FUNC_6(&VAR_6, VAR_3));


 FUNC_0(FUNC_4(&VAR_4, VAR_3, VAR_6, ((void*)0)));
 FUNC_2(VAR_4, 20, ((void*)0), 20, ((void*)0));
 FUNC_5(VAR_4);


 VAR_5.flags = VAR_1;
 FUNC_0(FUNC_4(&VAR_4, VAR_3, VAR_6, &VAR_5));
 FUNC_2(VAR_4, 22, ((void*)0), 22, ((void*)0));
 FUNC_5(VAR_4);


 VAR_5.flags = VAR_0;
 FUNC_0(FUNC_4(&VAR_4, VAR_3, VAR_6, &VAR_5));
 FUNC_2(VAR_4, 12, ((void*)0), 22, ((void*)0));
 FUNC_5(VAR_4);

 FUNC_3(VAR_6);
}
