
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ip_fw_chain {int dummy; } ;
struct ip_fw {int set; } ;
struct dyn_ipv4_state {scalar_t__ type; int kidx; TYPE_2__* data; TYPE_1__* limit; } ;
typedef int ipfw_range_tlv ;
struct TYPE_4__ {int rulenum; struct ip_fw* parent; } ;
struct TYPE_3__ {struct ip_fw* parent; int rulenum; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ip_fw_chain*,TYPE_2__*,struct ip_fw*,int ) ;
 int FUNC_1 (int ,int ,int const*) ;

__attribute__((used)) static int
FUNC_2(struct ip_fw_chain *VAR_3, struct dyn_ipv4_state *VAR_4,
    const ipfw_range_tlv *VAR_5)
{
 struct ip_fw *VAR_6;
 int VAR_7;

 if (VAR_4->type == VAR_1) {
  VAR_6 = VAR_4->limit->parent;
  return (FUNC_1(VAR_4->limit->rulenum, VAR_6->set, VAR_5));
 }

 VAR_6 = VAR_4->data->parent;
 if (VAR_4->type == VAR_0)
  VAR_6 = ((struct dyn_ipv4_state *)VAR_6)->limit->parent;

 VAR_7 = FUNC_1(VAR_4->data->rulenum, VAR_6->set, VAR_5);
 if (VAR_7 == 0 || VAR_2 == 0 || VAR_7 > 1)
  return (VAR_7);

 FUNC_0(VAR_3, VAR_4->data, VAR_6, VAR_4->kidx);
 return (0);
}
