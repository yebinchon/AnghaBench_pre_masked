
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_9__ {int gid; int uid; } ;
struct TYPE_8__ {TYPE_2__* udp; TYPE_1__* tcp; } ;
struct pf_pdesc {int proto; int af; TYPE_4__ lookup; struct pf_addr* src; struct pf_addr* dst; TYPE_3__ hdr; } ;
struct pf_addr {int v6; int v4; } ;
struct mbuf {int dummy; } ;
struct inpcbinfo {int dummy; } ;
struct inpcb {TYPE_5__* inp_cred; } ;
struct TYPE_10__ {int * cr_groups; int cr_uid; } ;
struct TYPE_7__ {int uh_dport; int uh_sport; } ;
struct TYPE_6__ {int th_dport; int th_sport; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;


 int VAR_3 ;
 int VAR_4 ;
 struct inpcbinfo VAR_5 ;
 struct inpcbinfo VAR_6 ;
 struct inpcb* FUNC_2 (struct inpcbinfo*,int *,int ,int *,int ,int,int *,struct mbuf*) ;
 struct inpcb* FUNC_3 (struct inpcbinfo*,int ,int ,int ,int ,int,int *,struct mbuf*) ;

int
FUNC_4(int VAR_7, struct pf_pdesc *VAR_8, struct mbuf *VAR_9)
{
 struct pf_addr *VAR_10, *VAR_11;
 u_int16_t VAR_12, VAR_13;
 struct inpcbinfo *VAR_14;
 struct inpcb *VAR_15;

 VAR_8->lookup.uid = VAR_4;
 VAR_8->lookup.gid = VAR_0;

 switch (VAR_8->proto) {
 case 129:
  if (VAR_8->hdr.tcp == ((void*)0))
   return (-1);
  VAR_12 = VAR_8->hdr.tcp->th_sport;
  VAR_13 = VAR_8->hdr.tcp->th_dport;
  VAR_14 = &VAR_5;
  break;
 case 128:
  if (VAR_8->hdr.udp == ((void*)0))
   return (-1);
  VAR_12 = VAR_8->hdr.udp->uh_sport;
  VAR_13 = VAR_8->hdr.udp->uh_dport;
  VAR_14 = &VAR_6;
  break;
 default:
  return (-1);
 }
 if (VAR_7 == VAR_3) {
  VAR_10 = VAR_8->src;
  VAR_11 = VAR_8->dst;
 } else {
  u_int16_t VAR_16;

  VAR_16 = VAR_12;
  VAR_12 = VAR_13;
  VAR_13 = VAR_16;
  VAR_10 = VAR_8->dst;
  VAR_11 = VAR_8->src;
 }
 switch (VAR_8->af) {
 default:
  return (-1);
 }
 FUNC_0(VAR_15);
 VAR_8->lookup.uid = VAR_15->inp_cred->cr_uid;
 VAR_8->lookup.gid = VAR_15->inp_cred->cr_groups[0];
 FUNC_1(VAR_15);

 return (1);
}
