
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_nl {int dummy; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; } ;
struct nl_parser_param {int dummy; } ;
struct nl_cache_ops {int (* co_msg_parser ) (struct nl_cache_ops*,struct sockaddr_nl*,struct nlmsghdr*,struct nl_parser_param*) ;TYPE_1__* co_msgtypes; int co_hdrsize; } ;
struct TYPE_2__ {scalar_t__ mt_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nlmsghdr*,int ) ;
 int FUNC_1 (struct nl_cache_ops*,struct sockaddr_nl*,struct nlmsghdr*,struct nl_parser_param*) ;

int FUNC_2(struct nl_cache_ops *VAR_3, struct sockaddr_nl *VAR_4,
     struct nlmsghdr *VAR_5, struct nl_parser_param *VAR_6)
{
 int VAR_7, VAR_8;

 if (!FUNC_0(VAR_5, VAR_3->co_hdrsize))
  return -VAR_1;

 for (VAR_7 = 0; VAR_3->co_msgtypes[VAR_7].mt_id >= 0; VAR_7++) {
  if (VAR_3->co_msgtypes[VAR_7].mt_id == VAR_5->nlmsg_type) {
   VAR_8 = VAR_3->co_msg_parser(VAR_3, VAR_4, VAR_5, VAR_6);
   if (VAR_8 != -VAR_2)
    goto errout;
  }
 }


 VAR_8 = -VAR_0;
errout:
 return VAR_8;
}
