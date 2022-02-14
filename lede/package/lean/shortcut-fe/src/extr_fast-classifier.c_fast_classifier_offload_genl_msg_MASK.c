
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sfe_connection {int offload_permit; } ;
struct nlattr {int dummy; } ;
struct genl_info {struct nlattr** attrs; } ;
struct fast_classifier_tuple {scalar_t__ ethertype; int proto; int dport; int sport; int dst_saddr; int src_saddr; int dmac; int smac; } ;
typedef int sfe_ip_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 size_t VAR_1 ;
 int FUNC_1 (int *) ;
 struct sfe_connection* FUNC_2 (int *,int *,int ,int ,int ,int) ;
 struct fast_classifier_tuple* FUNC_3 (struct nlattr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct nlattr *VAR_7;
 struct fast_classifier_tuple *VAR_8;
 struct sfe_connection *VAR_9;

 VAR_7 = VAR_6->attrs[VAR_1];
 VAR_8 = FUNC_3(VAR_7);

 FUNC_0("want to offload: %d-%d, %pIS, %pIS, %d, %d SMAC=%pM DMAC=%pM\n",
  VAR_8->ethertype,
  VAR_8->proto,
  &VAR_8->src_saddr,
  &VAR_8->dst_saddr,
  VAR_8->sport,
  VAR_8->dport,
  VAR_8->smac,
  VAR_8->dmac);

 FUNC_4(&VAR_4);
 VAR_9 = FUNC_2((sfe_ip_addr_t *)&VAR_8->src_saddr,
      (sfe_ip_addr_t *)&VAR_8->dst_saddr,
      VAR_8->sport,
      VAR_8->dport,
      VAR_8->proto,
      (VAR_8->ethertype == VAR_0));
 if (!VAR_9) {
  FUNC_5(&VAR_4);
  FUNC_0("REQUEST OFFLOAD NO MATCH\n");
  FUNC_1(&VAR_3);
  return 0;
 }

 VAR_9->offload_permit = 1;
 FUNC_5(&VAR_4);
 FUNC_1(&VAR_2);

 FUNC_0("INFO: calling sfe rule creation!\n");
 return 0;
}
