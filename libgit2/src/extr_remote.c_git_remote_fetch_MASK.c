
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int git_strarray ;
struct TYPE_14__ {int * proxy; int * custom_headers; } ;
typedef TYPE_1__ git_remote_connection_opts ;
typedef int git_remote_callbacks ;
typedef int git_remote_autotag_option_t ;
struct TYPE_15__ {int prune_refs; scalar_t__ url; scalar_t__ name; int download_tags; } ;
typedef TYPE_2__ git_remote ;
struct TYPE_16__ {int update_fetchhead; scalar_t__ prune; int proxy_opts; int download_tags; int custom_headers; int callbacks; } ;
typedef TYPE_3__ git_fetch_options ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (TYPE_2__*,int ,int const*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int const*,TYPE_3__ const*) ;
 int FUNC_8 (TYPE_2__*,int const*) ;
 int FUNC_9 (TYPE_2__*,int const*,int,int ,int ) ;

int FUNC_10(
  git_remote *VAR_8,
  const git_strarray *VAR_9,
  const git_fetch_options *VAR_10,
  const char *VAR_11)
{
 int VAR_12, VAR_13 = 1;
 git_remote_autotag_option_t VAR_14 = VAR_8->download_tags;
 bool VAR_15 = 0;
 git_buf VAR_16 = VAR_0;
 const git_remote_callbacks *VAR_17 = ((void*)0);
 git_remote_connection_opts VAR_18 = VAR_7;

 if (VAR_10) {
  FUNC_0(&VAR_10->callbacks, VAR_6, "git_remote_callbacks");
  VAR_17 = &VAR_10->callbacks;
  VAR_18.custom_headers = &VAR_10->custom_headers;
  VAR_13 = VAR_10->update_fetchhead;
  VAR_14 = VAR_10->download_tags;
  FUNC_0(&VAR_10->proxy_opts, VAR_5, "git_proxy_options");
  VAR_18.proxy = &VAR_10->proxy_opts;
 }


 if ((VAR_12 = FUNC_5(VAR_8, VAR_1, VAR_17, &VAR_18)) != 0)
  return VAR_12;

 VAR_12 = FUNC_7(VAR_8, VAR_9, VAR_10);


 FUNC_6(VAR_8);


 if (VAR_12 != 0)
  return VAR_12;


 if (VAR_11)
  FUNC_4(&VAR_16, VAR_11);
 else {
  FUNC_3(&VAR_16, "fetch %s",
    VAR_8->name ? VAR_8->name : VAR_8->url);
 }


 VAR_12 = FUNC_9(VAR_8, VAR_17, VAR_13, VAR_14, FUNC_1(&VAR_16));
 FUNC_2(&VAR_16);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_10 && VAR_10->prune == VAR_3)
  VAR_15 = 1;
 else if (VAR_10 && VAR_10->prune == VAR_4 && VAR_8->prune_refs)
  VAR_15 = 1;
 else if (VAR_10 && VAR_10->prune == VAR_2)
  VAR_15 = 0;
 else
  VAR_15 = VAR_8->prune_refs;

 if (VAR_15)
  VAR_12 = FUNC_8(VAR_8, VAR_17);

 return VAR_12;
}
