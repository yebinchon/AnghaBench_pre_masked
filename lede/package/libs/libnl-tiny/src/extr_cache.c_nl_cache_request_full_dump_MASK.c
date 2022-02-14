
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nl_sock {int dummy; } ;
struct nl_cache {TYPE_1__* c_ops; } ;
struct TYPE_2__ {int (* co_request_update ) (struct nl_cache*,struct nl_sock*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,char*,struct nl_cache*,int ) ;
 int FUNC_1 (struct nl_cache*) ;
 int FUNC_2 (struct nl_cache*,struct nl_sock*) ;

int FUNC_3(struct nl_sock *VAR_1, struct nl_cache *VAR_2)
{
 FUNC_0(2, "Requesting dump from kernel for cache %p <%s>...\n",
           VAR_2, FUNC_1(VAR_2));

 if (VAR_2->c_ops->co_request_update == ((void*)0))
  return -VAR_0;

 return VAR_2->c_ops->co_request_update(VAR_2, VAR_1);
}
