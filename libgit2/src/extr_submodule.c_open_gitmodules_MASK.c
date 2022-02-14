
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config_backend ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 char* FUNC_6 (int *) ;

__attribute__((used)) static git_config_backend *FUNC_7(
 git_repository *VAR_3,
 int VAR_4)
{
 const char *VAR_5 = FUNC_6(VAR_3);
 git_buf VAR_6 = VAR_0;
 git_config_backend *VAR_7 = ((void*)0);

 if (VAR_5 != ((void*)0)) {
  if (FUNC_1(&VAR_6, VAR_5, VAR_2) != 0)
   return ((void*)0);

  if (VAR_4 || FUNC_5(VAR_6.ptr)) {

   if (FUNC_3(&VAR_7, VAR_6.ptr) < 0)
    VAR_7 = ((void*)0);

   else if (FUNC_4(VAR_7, VAR_1, VAR_3) < 0) {
    FUNC_2(VAR_7);
    VAR_7 = ((void*)0);
   }
  }
 }

 FUNC_0(&VAR_6);

 return VAR_7;
}
