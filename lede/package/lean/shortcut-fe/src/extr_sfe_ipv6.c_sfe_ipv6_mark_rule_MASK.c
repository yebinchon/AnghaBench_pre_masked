
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sfe_ipv6_connection {scalar_t__ mark; } ;
struct sfe_ipv6 {int lock; } ;
struct TYPE_4__ {int ip6; } ;
struct TYPE_3__ {int ip6; } ;
struct sfe_connection_mark {scalar_t__ mark; int dest_port; TYPE_2__ dest_ip; int src_port; TYPE_1__ src_ip; int protocol; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 struct sfe_ipv6 VAR_0 ;
 struct sfe_ipv6_connection* FUNC_2 (struct sfe_ipv6*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct sfe_connection_mark *VAR_1)
{
 struct sfe_ipv6 *VAR_2 = &VAR_0;
 struct sfe_ipv6_connection *VAR_3;

 FUNC_3(&VAR_2->lock);
 VAR_3 = FUNC_2(VAR_2, VAR_1->protocol,
         VAR_1->src_ip.ip6, VAR_1->src_port,
         VAR_1->dest_ip.ip6, VAR_1->dest_port);
 if (VAR_3) {
  FUNC_1((0 != VAR_3->mark) && (0 == VAR_1->mark));
  VAR_3->mark = VAR_1->mark;
 }
 FUNC_4(&VAR_2->lock);

 if (VAR_3) {
  FUNC_0("Matching connection found for mark, "
       "setting from %08x to %08x\n",
       VAR_3->mark, VAR_1->mark);
 }
}
