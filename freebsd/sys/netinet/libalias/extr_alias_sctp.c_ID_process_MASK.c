
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* Init; } ;
struct sctp_nat_msg {int msg; TYPE_4__* ip_hdr; TYPE_3__ sctpchnk; TYPE_1__* sctp_hdr; } ;
struct sctp_nat_assoc {int exp; int state; int TableRegister; int l_vtag; int g_port; int l_port; int a_addr; int l_addr; int g_vtag; } ;
struct libalias {int dummy; } ;
struct TYPE_8__ {int ip_src; int ip_dst; } ;
struct TYPE_6__ {int initiate_tag; } ;
struct TYPE_5__ {int src_port; int dest_port; } ;


 int FUNC_0 (struct sctp_nat_msg*,struct sctp_nat_assoc*,int) ;
 int FUNC_1 (struct libalias*,struct sctp_nat_assoc*) ;
 int FUNC_2 (struct libalias*,struct sctp_nat_assoc*,int ) ;
 int FUNC_3 (struct libalias*,int ) ;
 int FUNC_4 (struct libalias*,struct sctp_nat_msg*) ;
 int FUNC_5 (struct libalias*,struct sctp_nat_msg*,int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct libalias*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct libalias*,struct sctp_nat_assoc*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_8(struct libalias *VAR_10, int VAR_11, struct sctp_nat_assoc *VAR_12, struct sctp_nat_msg *VAR_13)
{
 switch (VAR_13->msg) {
 case 131:
  if (!VAR_8 && (VAR_11 == 128))
   return (VAR_0);

  if (!FUNC_5(VAR_10, VAR_13, &(VAR_12->l_vtag), &(VAR_12->g_vtag), VAR_11))
   return (VAR_0);

 case 130:
  if (VAR_9)
   FUNC_0(VAR_13, VAR_12, VAR_11);
  switch (VAR_11) {
  case 129:
   VAR_12->l_addr = VAR_13->ip_hdr->ip_src;
   VAR_12->a_addr = FUNC_3(VAR_10, VAR_12->l_addr);
   VAR_12->l_port = VAR_13->sctp_hdr->src_port;
   VAR_12->g_port = VAR_13->sctp_hdr->dest_port;
   if (VAR_13->msg == 130)
    VAR_12->g_vtag = VAR_13->sctpchnk.Init->initiate_tag;
   if (FUNC_1(VAR_10, VAR_12))
    return ((VAR_13->msg == 130) ? VAR_4 : VAR_5);
   if (VAR_13->msg == 131) {
    if (FUNC_2(VAR_10, VAR_12, VAR_13->ip_hdr->ip_dst))
     return (VAR_5);
    VAR_12->TableRegister |= VAR_7;
   }
  break;
  case 128:
   VAR_12->l_addr = FUNC_4(VAR_10, VAR_13);
   VAR_12->a_addr = VAR_13->ip_hdr->ip_dst;
   VAR_12->l_port = VAR_13->sctp_hdr->dest_port;
   VAR_12->g_port = VAR_13->sctp_hdr->src_port;
   if (VAR_13->msg == 130)
    VAR_12->l_vtag = VAR_13->sctpchnk.Init->initiate_tag;
   if (FUNC_2(VAR_10, VAR_12, VAR_13->ip_hdr->ip_src))
    return ((VAR_13->msg == 130) ? VAR_4 : VAR_5);
   if (VAR_13->msg == 131) {
    if (FUNC_1(VAR_10, VAR_12))
     return (VAR_5);
    VAR_12->TableRegister |= VAR_6;
     }
   break;
  }
  VAR_12->state = (VAR_13->msg == 130) ? VAR_2 : VAR_1;
  VAR_12->exp = FUNC_6(VAR_10);
  FUNC_7(VAR_10,VAR_12);
  return (VAR_3);
 default:
  return (VAR_0);
 }
 return (VAR_0);
}
