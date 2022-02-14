
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* Init; } ;
struct sctp_nat_msg {int msg; TYPE_3__ sctpchnk; TYPE_1__* ip_hdr; } ;
struct sctp_nat_assoc {void* state; int g_vtag; int l_addr; int l_vtag; int num_Gaddr; } ;
struct libalias {int dummy; } ;
struct TYPE_5__ {int initiate_tag; } ;
struct TYPE_4__ {int ip_src; } ;


 int FUNC_0 (struct sctp_nat_msg*,struct sctp_nat_assoc*,int) ;
 int FUNC_1 (struct libalias*,struct sctp_nat_assoc*) ;
 int FUNC_2 (struct libalias*,struct sctp_nat_assoc*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct libalias*) ;
 int VAR_1 ;
 void* VAR_2 ;



 int VAR_3 ;


 void* VAR_4 ;
 int FUNC_4 (struct libalias*) ;
 int FUNC_5 (struct libalias*,struct sctp_nat_assoc*,int ) ;

__attribute__((used)) static int
FUNC_6(struct libalias *VAR_5, int VAR_6, struct sctp_nat_assoc *VAR_7, struct sctp_nat_msg *VAR_8)
{
 switch (VAR_8->msg) {
 case 131:
  FUNC_5(VAR_5, VAR_7, FUNC_3(VAR_5));
  return (VAR_1);
 case 130:
  switch (VAR_6) {
  case 128:
   if (VAR_7->num_Gaddr)
    FUNC_0(VAR_8, VAR_7, VAR_6);
   VAR_7->l_vtag = VAR_8->sctpchnk.Init->initiate_tag;
   if (FUNC_2(VAR_5, VAR_7, VAR_8->ip_hdr->ip_src)) {
    VAR_7->state = VAR_2;
    return (VAR_3);
   }
   break;
  case 129:
   VAR_7->l_addr = VAR_8->ip_hdr->ip_src;
   VAR_7->g_vtag = VAR_8->sctpchnk.Init->initiate_tag;
   if (FUNC_1(VAR_5, VAR_7)) {
    VAR_7->state = VAR_2;
    return (VAR_3);
   }
   break;
  }
  VAR_7->state = VAR_4;
  FUNC_5(VAR_5,VAR_7, FUNC_4(VAR_5));
  return (VAR_1);
 case 132:
  VAR_7->state = VAR_2;
  return (VAR_1);
 default:
  return (VAR_0);
 }
 return (VAR_0);
}
