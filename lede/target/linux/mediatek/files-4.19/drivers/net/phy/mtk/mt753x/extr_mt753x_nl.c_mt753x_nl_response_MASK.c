
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct mt753x_nl_cmd_item {scalar_t__ cmd; int nr_required_attrs; size_t* required_attrs; int (* process ) (struct genl_info*,struct gsw_mt753x*) ;scalar_t__ require_dev; } ;
struct gsw_mt753x {int dummy; } ;
struct genlmsghdr {scalar_t__ cmd; } ;
struct genl_info {scalar_t__* attrs; int nlhdr; } ;


 int FUNC_0 (struct mt753x_nl_cmd_item*) ;
 int VAR_0 ;
 struct mt753x_nl_cmd_item* VAR_1 ;
 struct gsw_mt753x* FUNC_1 (struct genl_info*) ;
 int FUNC_2 () ;
 struct genlmsghdr* FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct genl_info*,struct gsw_mt753x*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 struct genlmsghdr *VAR_4 = FUNC_3(VAR_3->nlhdr);
 const struct mt753x_nl_cmd_item *VAR_5 = ((void*)0);
 struct gsw_mt753x *VAR_6 = ((void*)0);
 u32 VAR_7 = 0;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  if (VAR_4->cmd == VAR_1[VAR_8].cmd) {
   VAR_5 = &VAR_1[VAR_8];
   break;
  }
 }

 if (!VAR_5) {
  FUNC_4("mt753x-nl: unknown cmd %u\n", VAR_4->cmd);
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->nr_required_attrs; VAR_8++) {
  if (VAR_3->attrs[VAR_5->required_attrs[VAR_8]])
   VAR_7++;
 }

 if (VAR_7 != VAR_5->nr_required_attrs) {
  FUNC_4("mt753x-nl: missing required attr(s) for cmd %u\n",
   VAR_4->cmd);
  return -VAR_0;
 }

 if (VAR_5->require_dev) {
  VAR_6 = FUNC_1(VAR_3);
  if (!VAR_6) {
   FUNC_4("mt753x-nl: failed to find switch dev\n");
   return -VAR_0;
  }
 }

 VAR_9 = VAR_5->process(VAR_3, VAR_6);

 FUNC_2();

 return VAR_9;
}
