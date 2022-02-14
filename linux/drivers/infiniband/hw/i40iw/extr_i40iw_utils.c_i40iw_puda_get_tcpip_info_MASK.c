
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct vlan_ethhdr {int h_vlan_TCI; } ;
struct tcphdr {int doff; int seq; } ;
struct ipv6hdr {int payload_len; } ;
struct iphdr {int tot_len; } ;
struct i40iw_puda_completion_info {int vlan_valid; scalar_t__ payload_len; scalar_t__ l3proto; } ;
struct TYPE_2__ {scalar_t__ va; } ;
struct i40iw_puda_buf {int vlan_id; int maclen; int ipv4; int totallen; int tcphlen; int datalen; int hdrlen; int seqnum; int * tcph; int * data; int * iph; TYPE_1__ mem; } ;
struct ethhdr {scalar_t__ h_proto; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

enum i40iw_status_code FUNC_4(struct i40iw_puda_completion_info *VAR_2,
       struct i40iw_puda_buf *VAR_3)
{
 struct iphdr *VAR_4;
 struct ipv6hdr *VAR_5;
 struct tcphdr *VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 u8 *VAR_9 = (u8 *)VAR_3->mem.va;
 struct ethhdr *VAR_10 = (struct ethhdr *)VAR_3->mem.va;

 if (VAR_10->h_proto == FUNC_0(0x8100)) {
  VAR_2->vlan_valid = 1;
  VAR_3->vlan_id = FUNC_3(((struct vlan_ethhdr *)VAR_10)->h_vlan_TCI) & VAR_1;
 }
 VAR_3->maclen = (VAR_2->vlan_valid) ? 18 : 14;
 VAR_7 = (VAR_2->l3proto) ? 40 : 20;
 VAR_3->ipv4 = (VAR_2->l3proto) ? 0 : 1;
 VAR_3->iph = VAR_9 + VAR_3->maclen;
 VAR_4 = (struct iphdr *)VAR_3->iph;

 VAR_3->tcph = VAR_3->iph + VAR_7;
 VAR_6 = (struct tcphdr *)VAR_3->tcph;

 if (VAR_3->ipv4) {
  VAR_8 = FUNC_3(VAR_4->tot_len);
 } else {
  VAR_5 = (struct ipv6hdr *)VAR_3->iph;
  VAR_8 = FUNC_3(VAR_5->payload_len) + VAR_7;
 }

 VAR_3->totallen = VAR_8 + VAR_3->maclen;

 if (VAR_2->payload_len < VAR_3->totallen) {
  FUNC_1("payload_len = 0x%x totallen expected0x%x\n",
        VAR_2->payload_len, VAR_3->totallen);
  return VAR_0;
 }

 VAR_3->tcphlen = (VAR_6->doff) << 2;
 VAR_3->datalen = VAR_8 - VAR_7 - VAR_3->tcphlen;
 VAR_3->data = (VAR_3->datalen) ? VAR_3->tcph + VAR_3->tcphlen : ((void*)0);
 VAR_3->hdrlen = VAR_3->maclen + VAR_7 + VAR_3->tcphlen;
 VAR_3->seqnum = FUNC_2(VAR_6->seq);
 return 0;
}
