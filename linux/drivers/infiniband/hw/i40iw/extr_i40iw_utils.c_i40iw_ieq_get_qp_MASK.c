
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tcphdr {int source; int dest; } ;
struct TYPE_7__ {int u6_addr32; } ;
struct TYPE_8__ {TYPE_3__ in6_u; } ;
struct TYPE_5__ {int u6_addr32; } ;
struct TYPE_6__ {TYPE_1__ in6_u; } ;
struct ipv6hdr {TYPE_4__ saddr; TYPE_2__ daddr; } ;
struct iphdr {int version; int saddr; int daddr; } ;
struct i40iw_sc_qp {int dummy; } ;
struct i40iw_sc_dev {scalar_t__ back_dev; } ;
struct i40iw_qp {struct i40iw_sc_qp sc_qp; } ;
struct i40iw_puda_buf {scalar_t__ iph; scalar_t__ tcph; } ;
struct i40iw_device {int cm_core; } ;
struct i40iw_cm_node {struct i40iw_qp* iwqp; } ;
typedef int rem_addr ;
typedef int loc_addr ;


 int FUNC_0 (int *,int ) ;
 struct i40iw_cm_node* FUNC_1 (int *,int ,int *,int ,int *,int,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

struct i40iw_sc_qp *FUNC_5(struct i40iw_sc_dev *VAR_0,
         struct i40iw_puda_buf *VAR_1)
{
 struct i40iw_device *VAR_2 = (struct i40iw_device *)VAR_0->back_dev;
 struct i40iw_qp *VAR_3;
 struct i40iw_cm_node *VAR_4;
 u32 VAR_5[4], VAR_6[4];
 u16 VAR_7, VAR_8;
 struct ipv6hdr *VAR_9;
 struct iphdr *VAR_10 = (struct iphdr *)VAR_1->iph;
 struct tcphdr *VAR_11 = (struct tcphdr *)VAR_1->tcph;

 if (VAR_10->version == 4) {
  FUNC_2(VAR_5, 0, sizeof(VAR_5));
  VAR_5[0] = FUNC_3(VAR_10->daddr);
  FUNC_2(VAR_6, 0, sizeof(VAR_6));
  VAR_6[0] = FUNC_3(VAR_10->saddr);
 } else {
  VAR_9 = (struct ipv6hdr *)VAR_1->iph;
  FUNC_0(VAR_5, VAR_9->daddr.in6_u.u6_addr32);
  FUNC_0(VAR_6, VAR_9->saddr.in6_u.u6_addr32);
 }
 VAR_7 = FUNC_4(VAR_11->dest);
 VAR_8 = FUNC_4(VAR_11->source);

 VAR_4 = FUNC_1(&VAR_2->cm_core, VAR_8, VAR_6, VAR_7,
      VAR_5, 0, 1);
 if (!VAR_4)
  return ((void*)0);
 VAR_3 = VAR_4->iwqp;
 return &VAR_3->sc_qp;
}
