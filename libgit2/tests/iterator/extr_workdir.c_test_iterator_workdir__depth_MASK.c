
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_iterator_options ;
typedef int git_iterator ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int,int *,int,int *) ;
 int VAR_2 ;
 int FUNC_4 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 git_iterator *VAR_3;
 git_iterator_options VAR_4 = VAR_1;

 VAR_2 = FUNC_2("icase");

 FUNC_0("icase", 10, 10);
 FUNC_0("icase/DIR01/sUB01", 50, 0);
 FUNC_0("icase/dir02/sUB01", 50, 0);


 FUNC_1(FUNC_4(&VAR_3, VAR_2, ((void*)0), ((void*)0), &VAR_4));
 FUNC_3(VAR_3, 125, ((void*)0), 125, ((void*)0));
 FUNC_5(VAR_3);


 VAR_4.flags = VAR_0;
 FUNC_1(FUNC_4(&VAR_3, VAR_2, ((void*)0), ((void*)0), &VAR_4));
 FUNC_3(VAR_3, 337, ((void*)0), 337, ((void*)0));
 FUNC_5(VAR_3);
}
