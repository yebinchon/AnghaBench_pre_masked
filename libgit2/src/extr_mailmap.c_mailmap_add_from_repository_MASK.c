
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ is_bare; } ;
typedef TYPE_1__ git_repository ;
typedef int git_mailmap ;
typedef int git_config ;
struct TYPE_12__ {char* ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char const* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_5 (int **,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*,char const*) ;
 int FUNC_7 (int *,char const*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(git_mailmap *VAR_5, git_repository *VAR_6)
{
 git_config *VAR_7 = ((void*)0);
 git_buf VAR_8 = VAR_0;
 git_buf VAR_9 = VAR_0;
 const char *VAR_10 = ((void*)0);
 const char *VAR_11 = ((void*)0);

 FUNC_0(VAR_5 && VAR_6);


 if (VAR_6->is_bare)
  VAR_10 = VAR_2;


 if (FUNC_5(&VAR_7, VAR_6) == 0) {
  if (FUNC_4(&VAR_8, VAR_7, VAR_1) == 0)
   VAR_10 = VAR_8.ptr;
  if (FUNC_3(&VAR_9, VAR_7, VAR_4) == 0)
   VAR_11 = VAR_9.ptr;
 }
 if (!VAR_6->is_bare)
  FUNC_7(VAR_5, VAR_3, VAR_6);
 if (VAR_10 != ((void*)0))
  FUNC_6(VAR_5, VAR_6, VAR_10);
 if (VAR_11 != ((void*)0))
  FUNC_7(VAR_5, VAR_11, VAR_6);

 FUNC_1(&VAR_8);
 FUNC_1(&VAR_9);
 FUNC_2(VAR_7);
}
