
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
struct TYPE_2__ {struct switch_val* link; int s; int i; struct switch_val* ports; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_port_link {int dummy; } ;
struct switch_port {int dummy; } ;
struct switch_dev {int ports; struct switch_val linkbuf; struct switch_val* portbuf; } ;
struct switch_attr {int (* get ) (struct switch_dev*,struct switch_attr const*,struct switch_val*) ;int type; } ;
struct sk_buff {int len; } ;
struct genlmsghdr {int cmd; } ;
struct genl_info {int snd_seq; int snd_portid; int nlhdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct genlmsghdr*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_1 (struct sk_buff*,struct genlmsghdr*) ;
 struct genlmsghdr* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 int FUNC_4 (struct switch_val*,int ,int) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;
 struct genlmsghdr* FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct switch_dev*,struct switch_attr const*,struct switch_val*) ;
 struct switch_dev* FUNC_12 (struct genl_info*) ;
 struct switch_attr* FUNC_13 (struct switch_dev*,struct genl_info*,struct switch_val*) ;
 int FUNC_14 (struct switch_dev*) ;
 int FUNC_15 (struct sk_buff*,struct genl_info*,int ,struct switch_val*) ;
 int FUNC_16 (struct sk_buff**,struct genl_info*,int ,struct switch_val*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_17(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct genlmsghdr *VAR_11 = FUNC_7(VAR_10->nlhdr);
 const struct switch_attr *VAR_12;
 struct switch_dev *VAR_13;
 struct sk_buff *VAR_14 = ((void*)0);
 struct switch_val VAR_15;
 int VAR_16 = -VAR_0;
 int VAR_17 = VAR_11->cmd;

 VAR_13 = FUNC_12(VAR_10);
 if (!VAR_13)
  return -VAR_0;

 FUNC_4(&VAR_15, 0, sizeof(VAR_15));
 VAR_12 = FUNC_13(VAR_13, VAR_10, &VAR_15);
 if (!VAR_12 || !VAR_12->get)
  goto error;

 if (VAR_12->type == 129) {
  VAR_15.value.ports = VAR_13->portbuf;
  FUNC_4(VAR_13->portbuf, 0,
   sizeof(struct switch_port) * VAR_13->ports);
 } else if (VAR_12->type == 130) {
  VAR_15.value.link = &VAR_13->linkbuf;
  FUNC_4(&VAR_13->linkbuf, 0, sizeof(struct switch_port_link));
 }

 VAR_16 = VAR_12->get(VAR_13, VAR_12, &VAR_15);
 if (VAR_16)
  goto error;

 VAR_14 = FUNC_9(VAR_3, VAR_2);
 if (!VAR_14)
  goto error;

 VAR_11 = FUNC_2(VAR_14, VAR_10->snd_portid, VAR_10->snd_seq, &VAR_8,
   0, VAR_17);
 if (FUNC_0(VAR_11))
  goto nla_put_failure;

 switch (VAR_12->type) {
 case 131:
  if (FUNC_6(VAR_14, VAR_4, VAR_15.value.i))
   goto nla_put_failure;
  break;
 case 128:
  if (FUNC_5(VAR_14, VAR_7, VAR_15.value.s))
   goto nla_put_failure;
  break;
 case 129:
  VAR_16 = FUNC_16(&VAR_14, VAR_10,
    VAR_6, &VAR_15);
  if (VAR_16 < 0)
   goto nla_put_failure;
  break;
 case 130:
  VAR_16 = FUNC_15(VAR_14, VAR_10,
      VAR_5, VAR_15.value.link);
  if (VAR_16 < 0)
   goto nla_put_failure;
  break;
 default:
  FUNC_10("invalid type in attribute\n");
  VAR_16 = -VAR_0;
  goto nla_put_failure;
 }
 FUNC_1(VAR_14, VAR_11);
 VAR_16 = VAR_14->len;
 if (VAR_16 < 0)
  goto nla_put_failure;

 FUNC_14(VAR_13);
 return FUNC_3(VAR_14, VAR_10);

nla_put_failure:
 if (VAR_14)
  FUNC_8(VAR_14);
error:
 FUNC_14(VAR_13);
 if (!VAR_16)
  VAR_16 = -VAR_1;
 return VAR_16;
}
