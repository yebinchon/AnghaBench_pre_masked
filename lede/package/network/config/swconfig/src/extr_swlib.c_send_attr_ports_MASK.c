
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct switch_port* ports; } ;
struct switch_val {int len; TYPE_1__ value; } ;
struct switch_port {int flags; int id; } ;
struct nlattr {int dummy; } ;
struct nl_msg {int dummy; } ;


 int FUNC_0 (struct nl_msg*,int ) ;
 int FUNC_1 (struct nl_msg*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct nl_msg*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct nl_msg*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nl_msg *VAR_5, struct switch_val *VAR_6)
{
 struct nlattr *VAR_7;
 int VAR_8;


 if (VAR_6->len == 0)
  goto done;
 VAR_7 = FUNC_3(VAR_5, VAR_0);
 if (!VAR_7)
  goto nla_put_failure;
 for (VAR_8 = 0; VAR_8 < VAR_6->len; VAR_8++) {
  struct switch_port *VAR_9 = &VAR_6->value.ports[VAR_8];
  struct nlattr *VAR_10;

  VAR_10 = FUNC_3(VAR_5, VAR_1);
  if (!VAR_10)
   goto nla_put_failure;

  FUNC_1(VAR_5, VAR_3, VAR_9->id);
  if (VAR_9->flags & VAR_4)
   FUNC_0(VAR_5, VAR_2);

  FUNC_2(VAR_5, VAR_10);
 }
 FUNC_2(VAR_5, VAR_7);
done:
 return 0;

nla_put_failure:
 return -1;
}
