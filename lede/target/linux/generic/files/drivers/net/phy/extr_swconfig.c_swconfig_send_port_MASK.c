
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_port {int flags; int id; } ;
struct swconfig_callback {struct nlattr** nest; int msg; int cmd; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct nlattr*) ;
 int FUNC_1 (int ,struct nlattr*) ;
 void* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct swconfig_callback *VAR_3, void *VAR_4)
{
 const struct switch_port *VAR_5 = VAR_4;
 struct nlattr *VAR_6 = ((void*)0);

 if (!VAR_3->nest[0]) {
  VAR_3->nest[0] = FUNC_2(VAR_3->msg, VAR_3->cmd);
  if (!VAR_3->nest[0])
   return -1;
 }

 VAR_6 = FUNC_2(VAR_3->msg, VAR_0);
 if (!VAR_6)
  goto error;

 if (FUNC_4(VAR_3->msg, VAR_2, VAR_5->id))
  goto nla_put_failure;
 if (VAR_5->flags & (1 << VAR_1)) {
  if (FUNC_3(VAR_3->msg, VAR_1))
   goto nla_put_failure;
 }

 FUNC_1(VAR_3->msg, VAR_6);
 return 0;

nla_put_failure:
  FUNC_0(VAR_3->msg, VAR_6);
error:
 FUNC_0(VAR_3->msg, VAR_3->nest[0]);
 return -1;
}
