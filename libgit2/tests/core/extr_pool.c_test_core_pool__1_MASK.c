
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int page_size; } ;
typedef TYPE_1__ git_pool ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int * FUNC_5 (TYPE_1__*,int) ;

void FUNC_6(void)
{
 int VAR_0;
 git_pool VAR_1;

 FUNC_4(&VAR_1, 1);
 VAR_1.page_size = 4000;

 for (VAR_0 = 2010; VAR_0 > 0; VAR_0--)
  FUNC_0(FUNC_5(&VAR_1, VAR_0) != ((void*)0));



 FUNC_1(591, FUNC_2(&VAR_1));

 FUNC_3(&VAR_1);

 FUNC_4(&VAR_1, 1);
 VAR_1.page_size = 4120;

 for (VAR_0 = 2010; VAR_0 > 0; VAR_0--)
  FUNC_0(FUNC_5(&VAR_1, VAR_0) != ((void*)0));



 FUNC_1(sizeof(void *) == 8 ? 575 : 573, FUNC_2(&VAR_1));

 FUNC_3(&VAR_1);
}
