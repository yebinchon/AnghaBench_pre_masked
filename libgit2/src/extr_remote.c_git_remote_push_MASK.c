
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int git_strarray ;
typedef int git_remote_callbacks ;
struct TYPE_11__ {int repo; } ;
typedef TYPE_1__ git_remote ;
struct TYPE_12__ {int proxy_opts; int custom_headers; int callbacks; } ;
typedef TYPE_2__ git_push_options ;
typedef int git_proxy_options ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int const*,int const*,int const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int const*,int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int const*,TYPE_2__ const*) ;

int FUNC_7(git_remote *VAR_4, const git_strarray *VAR_5, const git_push_options *VAR_6)
{
 int VAR_7;
 const git_remote_callbacks *VAR_8 = ((void*)0);
 const git_strarray *VAR_9 = ((void*)0);
 const git_proxy_options *VAR_10 = ((void*)0);

 FUNC_1(VAR_4);

 if (!VAR_4->repo) {
  FUNC_2(VAR_1, "cannot download detached remote");
  return -1;
 }

 if (VAR_6) {
  FUNC_0(&VAR_6->callbacks, VAR_3, "git_remote_callbacks");
  VAR_8 = &VAR_6->callbacks;
  VAR_9 = &VAR_6->custom_headers;
  FUNC_0(&VAR_6->proxy_opts, VAR_2, "git_proxy_options");
  VAR_10 = &VAR_6->proxy_opts;
 }

 FUNC_1(VAR_4);

 if ((VAR_7 = FUNC_3(VAR_4, VAR_0, VAR_8, VAR_10, VAR_9)) < 0)
  return VAR_7;

 if ((VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6)) < 0)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_4, VAR_8, 0, 0, ((void*)0));

 FUNC_4(VAR_4);
 return VAR_7;
}
