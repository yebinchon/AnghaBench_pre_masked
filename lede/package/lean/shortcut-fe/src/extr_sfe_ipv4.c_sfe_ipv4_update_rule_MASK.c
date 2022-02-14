
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sfe_ipv4_connection {int dummy; } ;
struct sfe_ipv4 {int lock; } ;
struct TYPE_4__ {int ip; } ;
struct TYPE_3__ {int ip; } ;
struct sfe_connection_create {int dest_port; TYPE_2__ dest_ip; int src_port; TYPE_1__ src_ip; int protocol; } ;


 struct sfe_ipv4 VAR_0 ;
 struct sfe_ipv4_connection* FUNC_0 (struct sfe_ipv4*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct sfe_ipv4_connection*,struct sfe_connection_create*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct sfe_connection_create *VAR_1)
{
 struct sfe_ipv4_connection *VAR_2;
 struct sfe_ipv4 *VAR_3 = &VAR_0;

 FUNC_2(&VAR_3->lock);

 VAR_2 = FUNC_0(VAR_3,
           VAR_1->protocol,
           VAR_1->src_ip.ip,
           VAR_1->src_port,
           VAR_1->dest_ip.ip,
           VAR_1->dest_port);
 if (VAR_2 != ((void*)0)) {
  FUNC_1(VAR_2, VAR_1);
 }

 FUNC_3(&VAR_3->lock);
}
