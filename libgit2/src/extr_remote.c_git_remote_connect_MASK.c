
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_strarray ;
struct TYPE_3__ {int const* custom_headers; int const* proxy; } ;
typedef TYPE_1__ git_remote_connection_opts ;
typedef int git_remote_callbacks ;
typedef int git_remote ;
typedef int git_proxy_options ;
typedef int git_direction ;


 int FUNC_0 (int *,int ,int const*,TYPE_1__*) ;

int FUNC_1(git_remote *VAR_0, git_direction VAR_1, const git_remote_callbacks *VAR_2, const git_proxy_options *VAR_3, const git_strarray *VAR_4)
{
 git_remote_connection_opts VAR_5;

 VAR_5.proxy = VAR_3;
 VAR_5.custom_headers = VAR_4;

 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5);
}
