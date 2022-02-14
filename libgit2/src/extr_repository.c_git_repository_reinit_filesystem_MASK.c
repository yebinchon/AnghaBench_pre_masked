
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int is_bare; } ;
typedef TYPE_1__ git_repository ;
typedef int git_config ;
struct TYPE_13__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (int *,int ,char const*,int ,int) ;
 int FUNC_7 (int **,TYPE_2__*,TYPE_1__*,char const*) ;
 int VAR_1 ;

int FUNC_8(git_repository *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 git_buf VAR_5 = VAR_0;
 git_config *VAR_6 = ((void*)0);
 const char *VAR_7 = FUNC_3(VAR_2);

 if (!(VAR_4 = FUNC_7(&VAR_6, &VAR_5, VAR_2, VAR_7)))
  VAR_4 = FUNC_6(
   VAR_6, VAR_5.ptr, VAR_7, FUNC_4(VAR_2), 1);

 FUNC_1(VAR_6);
 FUNC_0(&VAR_5);

 FUNC_2(VAR_2);

 if (!VAR_2->is_bare && VAR_3)
  (void)FUNC_5(VAR_2, VAR_1, ((void*)0));

 return VAR_4;
}
