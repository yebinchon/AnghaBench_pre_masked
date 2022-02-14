
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct sockopt_data {int valsize; } ;
struct nptv6_cfg {int dummy; } ;
struct TYPE_5__ {size_t length; int type; } ;
struct ipfw_nptv6_stats {int count; int objsize; int version; TYPE_2__ head; } ;
struct ip_fw_chain {int dummy; } ;
typedef int stats ;
struct TYPE_4__ {scalar_t__ set; int name; } ;
struct TYPE_6__ {TYPE_1__ ntlv; } ;
typedef TYPE_3__ ipfw_obj_header ;
typedef struct ipfw_nptv6_stats ipfw_obj_ctlv ;
typedef int ip_fw3_opheader ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*,struct nptv6_cfg*,struct ipfw_nptv6_stats*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sockopt_data*,size_t) ;
 int FUNC_6 (struct ipfw_nptv6_stats*,struct ipfw_nptv6_stats*,int) ;
 int FUNC_7 (struct ipfw_nptv6_stats*,int ,int) ;
 struct nptv6_cfg* FUNC_8 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct ip_fw_chain *VAR_5, ip_fw3_opheader *VAR_6,
    struct sockopt_data *VAR_7)
{
 struct ipfw_nptv6_stats VAR_8;
 struct nptv6_cfg *VAR_9;
 ipfw_obj_header *VAR_10;
 ipfw_obj_ctlv *VAR_11;
 size_t VAR_12;

 VAR_12 = sizeof(ipfw_obj_header) + sizeof(ipfw_obj_ctlv) + sizeof(VAR_8);
 if (VAR_7->valsize % sizeof(uint64_t))
  return (VAR_0);
 if (VAR_7->valsize < VAR_12)
  return (VAR_1);
 VAR_10 = (ipfw_obj_header *)FUNC_5(VAR_7, VAR_12);
 if (VAR_10 == ((void*)0))
  return (VAR_0);
 if (FUNC_4(VAR_10->ntlv.name) != 0 ||
     VAR_10->ntlv.set >= VAR_3)
  return (VAR_0);
 FUNC_7(&VAR_8, 0, sizeof(VAR_8));

 FUNC_1(VAR_5);
 VAR_9 = FUNC_8(FUNC_0(VAR_5), VAR_10->ntlv.name, VAR_10->ntlv.set);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_5);
  return (VAR_2);
 }
 FUNC_3(VAR_5, VAR_9, &VAR_8);
 FUNC_2(VAR_5);

 VAR_11 = (ipfw_obj_ctlv *)(VAR_10 + 1);
 FUNC_7(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->head.type = VAR_4;
 VAR_11->head.length = VAR_12 - sizeof(ipfw_obj_header);
 VAR_11->count = sizeof(VAR_8) / sizeof(uint64_t);
 VAR_11->objsize = sizeof(uint64_t);
 VAR_11->version = 1;
 FUNC_6(VAR_11 + 1, &VAR_8, sizeof(VAR_8));
 return (0);
}
