
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int (* git_transport_cb ) (TYPE_1__**,TYPE_2__*,void*) ;
struct TYPE_26__ {int (* connect ) (TYPE_1__*,int ,int *,void*,TYPE_5__ const*,int ,int) ;int (* free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ git_transport ;
struct TYPE_28__ {TYPE_5__ const* proxy; int custom_headers; } ;
typedef TYPE_4__ git_remote_connection_opts ;
struct TYPE_29__ {int (* transport ) (TYPE_1__**,TYPE_2__*,void*) ;void* payload; int * credentials; } ;
typedef TYPE_5__ git_remote_callbacks ;
struct TYPE_27__ {TYPE_1__* transport; } ;
typedef TYPE_2__ git_remote ;
typedef int git_direction ;
typedef int * git_cred_acquire_cb ;
struct TYPE_30__ {int ptr; } ;
typedef TYPE_7__ git_buf ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (TYPE_5__ const*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,TYPE_2__*,int ,TYPE_5__ const*) ;
 int FUNC_4 (TYPE_1__**,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_5__ const*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int *,void*,TYPE_5__ const*,int ,int) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(git_remote *VAR_4, git_direction VAR_5, const git_remote_callbacks *VAR_6, const git_remote_connection_opts *VAR_7)
{
 git_transport *VAR_8;
 git_buf VAR_9 = VAR_0;
 int VAR_10 = VAR_3;
 int VAR_11;
 void *VAR_12 = ((void*)0);
 git_cred_acquire_cb VAR_13 = ((void*)0);
 git_transport_cb VAR_14 = ((void*)0);

 FUNC_1(VAR_4);

 if (VAR_6) {
  FUNC_0(VAR_6, VAR_2, "git_remote_callbacks");
  VAR_13 = VAR_6->credentials;
  VAR_14 = VAR_6->transport;
  VAR_12 = VAR_6->payload;
 }

 if (VAR_7->proxy)
  FUNC_0(VAR_7->proxy, VAR_1, "git_proxy_options");

 VAR_8 = VAR_4->transport;

 if ((VAR_11 = FUNC_3(&VAR_9, VAR_4, VAR_5, VAR_6)) < 0)
  goto on_error;



 if (!VAR_8 && VAR_14 &&
  (VAR_11 = VAR_14(&VAR_8, VAR_4, VAR_12)) < 0)
  goto on_error;



 if (!VAR_8 && (VAR_11 = FUNC_4(&VAR_8, VAR_4, VAR_9.ptr)) < 0)
  goto on_error;

 if ((VAR_11 = FUNC_6(VAR_8, VAR_7->custom_headers)) != 0)
  goto on_error;

 if ((VAR_11 = FUNC_5(VAR_8, VAR_6)) < 0 ||
     (VAR_11 = VAR_8->connect(VAR_8, VAR_9.ptr, VAR_13, VAR_12, VAR_7->proxy, VAR_5, VAR_10)) != 0)
  goto on_error;

 VAR_4->transport = VAR_8;

 FUNC_2(&VAR_9);

 return 0;

on_error:
 if (VAR_8)
  VAR_8->free(VAR_8);

 FUNC_2(&VAR_9);

 if (VAR_8 == VAR_4->transport)
  VAR_4->transport = ((void*)0);

 return VAR_11;
}
