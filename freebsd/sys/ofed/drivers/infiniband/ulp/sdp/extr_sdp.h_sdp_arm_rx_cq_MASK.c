
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cq; } ;
struct sdp_sock {TYPE_1__ rx_ring; int socket; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *,char*) ;

__attribute__((used)) static inline void FUNC_3(struct sdp_sock *VAR_1)
{
 FUNC_2(VAR_1->socket, ((void*)0), "Arming RX cq");
 FUNC_1(VAR_1->socket, "Arming RX cq\n");

 FUNC_0(VAR_1->rx_ring.cq, VAR_0);
}
