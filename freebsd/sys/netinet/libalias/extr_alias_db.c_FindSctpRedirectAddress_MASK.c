
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctp_nat_msg {TYPE_4__* ip_hdr; TYPE_1__* sctp_hdr; } ;
struct TYPE_7__ {scalar_t__ s_addr; } ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct libalias {TYPE_3__ targetAddress; TYPE_2__ aliasAddress; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct alias_link {struct in_addr src_addr; } ;
struct TYPE_8__ {int ip_dst; int ip_src; } ;
struct TYPE_5__ {int dest_port; } ;


 struct alias_link* FUNC_0 (struct libalias*,int ,int ,int ,int ,int ,int) ;
 struct in_addr FUNC_1 (struct libalias*,int ) ;
 int FUNC_2 (struct libalias*) ;
 int VAR_0 ;
 int VAR_1 ;

struct in_addr
FUNC_3(struct libalias *VAR_2, struct sctp_nat_msg *VAR_3)
{
 struct alias_link *VAR_4;
 struct in_addr VAR_5;

 FUNC_2(VAR_2);
 VAR_4 = FUNC_0(VAR_2, VAR_3->ip_hdr->ip_src, VAR_3->ip_hdr->ip_dst,
     VAR_3->sctp_hdr->dest_port,VAR_3->sctp_hdr->dest_port, VAR_0, 1);
 if (VAR_4 != ((void*)0)) {
  return(VAR_4->src_addr);
 } else {
  VAR_5 = FUNC_1(VAR_2,VAR_3->ip_hdr->ip_dst);
  if (VAR_5.s_addr == VAR_2->aliasAddress.s_addr ||
      VAR_5.s_addr == VAR_2->targetAddress.s_addr) {
   VAR_4 = FUNC_0(VAR_2, VAR_3->ip_hdr->ip_src, VAR_3->ip_hdr->ip_dst,
       VAR_1, 0, VAR_0, 1);
   if (VAR_4 != ((void*)0))
    return(VAR_4->src_addr);
  }
  return(VAR_5);
 }
}
