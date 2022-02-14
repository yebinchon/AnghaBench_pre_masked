
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_xdata {struct nl_parser_param* params; int ops; } ;
struct nl_sock {int s_cb; } ;
struct nl_parser_param {int dummy; } ;
struct nl_cb {int dummy; } ;
struct nl_cache {int c_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,struct nl_cache*,int ,...) ;
 int FUNC_1 (struct nl_cache*) ;
 struct nl_cb* FUNC_2 (int ) ;
 int FUNC_3 (struct nl_cb*) ;
 int FUNC_4 (struct nl_cb*,int ,int ,int ,struct update_xdata*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct nl_sock*,struct nl_cb*) ;
 int VAR_3 ;

int FUNC_7(struct nl_sock *VAR_4, struct nl_cache *VAR_5,
     struct nl_parser_param *VAR_6)
{
 int VAR_7;
 struct nl_cb *VAR_8;
 struct update_xdata VAR_9 = {
  .ops = VAR_5->c_ops,
  .params = VAR_6,
 };

 FUNC_0(1, "Picking up answer for cache %p <%s>...\n",
    VAR_5, FUNC_1(VAR_5));

 VAR_8 = FUNC_2(VAR_4->s_cb);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 FUNC_4(VAR_8, VAR_2, VAR_1, VAR_3, &VAR_9);

 VAR_7 = FUNC_6(VAR_4, VAR_8);
 if (VAR_7 < 0)
  FUNC_0(2, "While picking up for %p <%s>, recvmsgs() returned " "%d: %s", VAR_5, FUNC_1(VAR_5),

         VAR_7, FUNC_5(VAR_7));

 FUNC_3(VAR_8);

 return VAR_7;
}
