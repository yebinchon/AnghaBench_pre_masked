
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int rx_ring; int rx_comp_work; int socket; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sdp_sock*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct sdp_sock*) ;
 int FUNC_6 (int ,int *,char*,int,...) ;
 int FUNC_7 (struct sdp_sock*) ;

int
FUNC_8(struct sdp_sock *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 if (!FUNC_1(&VAR_1->rx_ring)) {
  FUNC_4(VAR_1->socket, "ring destroyed. not polling it\n");
  return 0;
 }

 VAR_3 = FUNC_7(VAR_1);

 VAR_2 = FUNC_5(VAR_1);
 FUNC_6(VAR_1->socket, ((void*)0), "processed %d", VAR_2);

 if (VAR_2) {
  FUNC_6(VAR_1->socket, ((void*)0), "credits:  %d -> %d",
    VAR_3, FUNC_7(VAR_1));
  FUNC_0(VAR_0, &VAR_1->rx_comp_work);
 }
 FUNC_3(VAR_1);

 FUNC_2(&VAR_1->rx_ring);

 return (VAR_2);
}
