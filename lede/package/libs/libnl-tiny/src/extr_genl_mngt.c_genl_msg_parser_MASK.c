
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_nl {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nl_parser_param {int dummy; } ;
struct nl_cache_ops {int co_hdrsize; TYPE_1__* co_genl; } ;
struct genlmsghdr {scalar_t__ cmd; } ;
struct genl_info {struct nlattr** attrs; int userhdr; struct genlmsghdr* genlhdr; struct nlmsghdr* nlh; struct sockaddr_nl* who; } ;
struct genl_cmd {scalar_t__ c_id; int (* c_msg_parser ) (struct nl_cache_ops*,struct genl_cmd*,struct genl_info*,struct nl_parser_param*) ;int c_attr_policy; int c_maxattr; } ;
struct TYPE_2__ {int o_ncmds; struct genl_cmd* o_cmds; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct genlmsghdr*) ;
 struct genlmsghdr* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct nlmsghdr*,int ,struct nlattr**,int ,int ) ;
 int FUNC_4 (struct nl_cache_ops*,struct genl_cmd*,struct genl_info*,struct nl_parser_param*) ;

__attribute__((used)) static int FUNC_5(struct nl_cache_ops *VAR_2, struct sockaddr_nl *VAR_3,
      struct nlmsghdr *VAR_4, struct nl_parser_param *VAR_5)
{
 int VAR_6, VAR_7;
 struct genlmsghdr *VAR_8;
 struct genl_cmd *VAR_9;

 VAR_8 = FUNC_2(VAR_4);

 if (VAR_2->co_genl == ((void*)0))
  FUNC_0();

 for (VAR_6 = 0; VAR_6 < VAR_2->co_genl->o_ncmds; VAR_6++) {
  VAR_9 = &VAR_2->co_genl->o_cmds[VAR_6];
  if (VAR_9->c_id == VAR_8->cmd)
   goto found;
 }

 VAR_7 = -VAR_0;
 goto errout;

found:
 if (VAR_9->c_msg_parser == ((void*)0))
  VAR_7 = -VAR_1;
 else {
  struct nlattr *VAR_10[VAR_9->c_maxattr + 1];
  struct genl_info VAR_11 = {
   .who = VAR_3,
   .nlh = VAR_4,
   .genlhdr = VAR_8,
   .userhdr = FUNC_1(VAR_8),
   .attrs = VAR_10,
  };

  VAR_7 = FUNC_3(VAR_4, VAR_2->co_hdrsize, VAR_10, VAR_9->c_maxattr,
      VAR_9->c_attr_policy);
  if (VAR_7 < 0)
   goto errout;

  VAR_7 = VAR_9->c_msg_parser(VAR_2, VAR_9, &VAR_11, VAR_5);
 }
errout:
 return VAR_7;

}
