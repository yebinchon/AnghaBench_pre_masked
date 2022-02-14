
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_repository ;
typedef int (* git_remote_create_cb ) (int **,int *,char*,char const*,void*) ;
typedef int git_remote ;
struct TYPE_3__ {int (* remote_cb ) (int **,int *,char*,char const*,void*) ;void* remote_cb_payload; } ;
typedef TYPE_1__ git_clone_options ;


 int VAR_0 ;
 int FUNC_0 (int **,int *,char*,char const*,void*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(
  git_remote **VAR_1,
  git_repository *VAR_2,
  const char *VAR_3,
  const git_clone_options *VAR_4)
{
 int VAR_5;
 git_remote *VAR_6 = ((void*)0);
 char VAR_7[VAR_0];
 git_remote_create_cb VAR_8 = VAR_4->remote_cb;
 void *VAR_9 = VAR_4->remote_cb_payload;


 if (FUNC_3(VAR_3) < 0 && FUNC_1(VAR_3) && FUNC_2(VAR_3)) {
  if (FUNC_5(VAR_3, VAR_7) == ((void*)0))
   return -1;

  VAR_3 = VAR_7;
 }

 if (!VAR_8) {
  VAR_8 = FUNC_0;
  VAR_9 = ((void*)0);
 }

 if ((VAR_5 = VAR_8(&VAR_6, VAR_2, "origin", VAR_3, VAR_9)) < 0)
  goto on_error;

 *VAR_1 = VAR_6;
 return 0;

on_error:
 FUNC_4(VAR_6);
 return VAR_5;
}
