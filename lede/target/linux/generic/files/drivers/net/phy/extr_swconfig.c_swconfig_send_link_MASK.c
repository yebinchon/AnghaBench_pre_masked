
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_port_link {int eee; int speed; scalar_t__ rx_flow; scalar_t__ tx_flow; scalar_t__ aneg; scalar_t__ duplex; scalar_t__ link; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct sk_buff *VAR_10, struct genl_info *VAR_11, int VAR_12,
     const struct switch_port_link *VAR_13)
{
 struct nlattr *VAR_14 = ((void*)0);
 int VAR_15 = 0;

 VAR_14 = FUNC_2(VAR_10, VAR_12);
 if (VAR_13->link) {
  if (FUNC_3(VAR_10, VAR_6))
   goto nla_put_failure;
 }
 if (VAR_13->duplex) {
  if (FUNC_3(VAR_10, VAR_3))
   goto nla_put_failure;
 }
 if (VAR_13->aneg) {
  if (FUNC_3(VAR_10, VAR_2))
   goto nla_put_failure;
 }
 if (VAR_13->tx_flow) {
  if (FUNC_3(VAR_10, VAR_8))
   goto nla_put_failure;
 }
 if (VAR_13->rx_flow) {
  if (FUNC_3(VAR_10, VAR_7))
   goto nla_put_failure;
 }
 if (FUNC_4(VAR_10, VAR_9, VAR_13->speed))
  goto nla_put_failure;
 if (VAR_13->eee & VAR_1) {
  if (FUNC_3(VAR_10, VAR_5))
   goto nla_put_failure;
 }
 if (VAR_13->eee & VAR_0) {
  if (FUNC_3(VAR_10, VAR_4))
   goto nla_put_failure;
 }
 FUNC_1(VAR_10, VAR_14);

 return VAR_15;

nla_put_failure:
 FUNC_0(VAR_10, VAR_14);
 return -1;
}
