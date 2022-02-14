
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nl_parser_param {struct dp_xdata* pp_arg; int pp_cb; } ;
struct nl_msg {int dummy; } ;
struct nl_cache_ops {int dummy; } ;
struct dp_xdata {void (* cb ) (struct nl_object*,void*) ;void* arg; } ;
struct TYPE_3__ {int nlmsg_type; } ;


 int VAR_0 ;
 struct nl_cache_ops* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nl_cache_ops*,int *,TYPE_1__*,struct nl_parser_param*) ;
 int FUNC_2 (struct nl_msg*) ;
 TYPE_1__* FUNC_3 (struct nl_msg*) ;
 int VAR_1 ;

int FUNC_4(struct nl_msg *VAR_2, void (*VAR_3)(struct nl_object *, void *),
   void *VAR_4)
{
 struct nl_cache_ops *VAR_5;
 struct nl_parser_param VAR_6 = {
  .pp_cb = VAR_1
 };
 struct dp_xdata VAR_7 = {
  .cb = VAR_3,
  .arg = VAR_4,
 };

 VAR_5 = FUNC_0(FUNC_2(VAR_2),
         FUNC_3(VAR_2)->nlmsg_type);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_6.pp_arg = &VAR_7;

 return FUNC_1(VAR_5, ((void*)0), FUNC_3(VAR_2), &VAR_6);
}
