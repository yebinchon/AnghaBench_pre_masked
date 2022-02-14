
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sfe_ipv6_connection {int dummy; } ;
struct sfe_ipv6 {int lock; int connection_destroy_misses; int connection_destroy_requests; } ;
struct TYPE_4__ {int ip6; } ;
struct TYPE_3__ {int ip6; } ;
struct sfe_connection_destroy {int dest_port; TYPE_2__ dest_ip; int src_port; TYPE_1__ src_ip; int protocol; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 struct sfe_ipv6 VAR_1 ;
 int FUNC_2 (int ) ;
 struct sfe_ipv6_connection* FUNC_3 (struct sfe_ipv6*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct sfe_ipv6*,struct sfe_ipv6_connection*,int ) ;
 int FUNC_5 (struct sfe_ipv6*,struct sfe_ipv6_connection*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct sfe_connection_destroy *VAR_2)
{
 struct sfe_ipv6 *VAR_3 = &VAR_1;
 struct sfe_ipv6_connection *VAR_4;

 FUNC_6(&VAR_3->lock);
 VAR_3->connection_destroy_requests++;





 VAR_4 = FUNC_3(VAR_3, VAR_2->protocol, VAR_2->src_ip.ip6, VAR_2->src_port,
         VAR_2->dest_ip.ip6, VAR_2->dest_port);
 if (!VAR_4) {
  VAR_3->connection_destroy_misses++;
  FUNC_7(&VAR_3->lock);

  FUNC_1("connection does not exist - p: %d, s: %pI6:%u, d: %pI6:%u\n",
       VAR_2->protocol, VAR_2->src_ip.ip6, FUNC_2(VAR_2->src_port),
       VAR_2->dest_ip.ip6, FUNC_2(VAR_2->dest_port));
  return;
 }




 FUNC_5(VAR_3, VAR_4);
 FUNC_7(&VAR_3->lock);

 FUNC_4(VAR_3, VAR_4, VAR_0);

 FUNC_0("connection destroyed - p: %d, s: %pI6:%u, d: %pI6:%u\n",
     VAR_2->protocol, VAR_2->src_ip.ip6, FUNC_2(VAR_2->src_port),
     VAR_2->dest_ip.ip6, FUNC_2(VAR_2->dest_port));
}
