
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_parser_param {struct dp_xdata* pp_arg; } ;
struct nl_object {int dummy; } ;
struct dp_xdata {int arg; int (* cb ) (struct nl_object*,int ) ;} ;


 int FUNC_0 (struct nl_object*,int ) ;

__attribute__((used)) static int FUNC_1(struct nl_object *VAR_0, struct nl_parser_param *VAR_1)
{
 struct dp_xdata *VAR_2 = VAR_1->pp_arg;

 VAR_2->cb(VAR_0, VAR_2->arg);
 return 0;
}
