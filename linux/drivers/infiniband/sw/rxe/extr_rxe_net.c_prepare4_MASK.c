
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
struct in_addr {int s_addr; } ;
struct TYPE_8__ {struct in_addr sin_addr; } ;
struct TYPE_9__ {TYPE_3__ _sockaddr_in; } ;
struct TYPE_6__ {struct in_addr sin_addr; } ;
struct TYPE_7__ {TYPE_1__ _sockaddr_in; } ;
struct rxe_av {TYPE_5__ grh; TYPE_4__ dgid_addr; TYPE_2__ sgid_addr; } ;
struct dst_entry {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dst_entry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct dst_entry*,struct sk_buff*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 struct dst_entry* FUNC_6 (int ,struct rxe_qp*,struct rxe_av*) ;
 struct rxe_av* FUNC_7 (struct rxe_pkt_info*) ;

__attribute__((used)) static int FUNC_8(struct rxe_pkt_info *VAR_4, struct sk_buff *VAR_5)
{
 struct rxe_qp *VAR_6 = VAR_4->qp;
 struct dst_entry *VAR_7;
 bool VAR_8 = 0;
 __be16 VAR_9 = FUNC_2(VAR_2);
 struct rxe_av *VAR_10 = FUNC_7(VAR_4);
 struct in_addr *VAR_11 = &VAR_10->sgid_addr._sockaddr_in.sin_addr;
 struct in_addr *VAR_12 = &VAR_10->dgid_addr._sockaddr_in.sin_addr;

 VAR_7 = FUNC_6(VAR_5->dev, VAR_6, VAR_10);
 if (!VAR_7) {
  FUNC_3("Host not reachable\n");
  return -VAR_0;
 }

 FUNC_5(VAR_5, FUNC_0(VAR_6->src_port),
   FUNC_0(VAR_3));

 FUNC_4(VAR_7, VAR_5, VAR_11->s_addr, VAR_12->s_addr, VAR_1,
    VAR_10->grh.traffic_class, VAR_10->grh.hop_limit, VAR_9, VAR_8);

 FUNC_1(VAR_7);
 return 0;
}
