
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct rxe_qp {int src_port; } ;
struct rxe_pkt_info {struct rxe_qp* qp; } ;
struct TYPE_10__ {int hop_limit; int traffic_class; } ;
struct in6_addr {int dummy; } ;
struct TYPE_8__ {struct in6_addr sin6_addr; } ;
struct TYPE_9__ {TYPE_3__ _sockaddr_in6; } ;
struct TYPE_6__ {struct in6_addr sin6_addr; } ;
struct TYPE_7__ {TYPE_1__ _sockaddr_in6; } ;
struct rxe_av {TYPE_5__ grh; TYPE_4__ dgid_addr; TYPE_2__ sgid_addr; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dst_entry*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct dst_entry*,struct sk_buff*,struct in6_addr*,struct in6_addr*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 struct dst_entry* FUNC_5 (int ,struct rxe_qp*,struct rxe_av*) ;
 struct rxe_av* FUNC_6 (struct rxe_pkt_info*) ;

__attribute__((used)) static int FUNC_7(struct rxe_pkt_info *VAR_3, struct sk_buff *VAR_4)
{
 struct rxe_qp *VAR_5 = VAR_3->qp;
 struct dst_entry *VAR_6;
 struct rxe_av *VAR_7 = FUNC_6(VAR_3);
 struct in6_addr *VAR_8 = &VAR_7->sgid_addr._sockaddr_in6.sin6_addr;
 struct in6_addr *VAR_9 = &VAR_7->dgid_addr._sockaddr_in6.sin6_addr;

 VAR_6 = FUNC_5(VAR_4->dev, VAR_5, VAR_7);
 if (!VAR_6) {
  FUNC_2("Host not reachable\n");
  return -VAR_0;
 }

 FUNC_4(VAR_4, FUNC_0(VAR_5->src_port),
   FUNC_0(VAR_2));

 FUNC_3(VAR_6, VAR_4, VAR_8, VAR_9, VAR_1,
    VAR_7->grh.traffic_class,
    VAR_7->grh.hop_limit);

 FUNC_1(VAR_6);
 return 0;
}
