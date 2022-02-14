
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int socket; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct sdp_sock*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct sdp_sock*) ;
 int FUNC_5 (int ,int *,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(struct ib_cq *VAR_1, void *VAR_2)
{
 struct sdp_sock *VAR_3;

 VAR_3 = VAR_2;
 FUNC_5(VAR_3->socket, ((void*)0), "tx irq");
 FUNC_3(VAR_3->socket, "Got tx comp interrupt\n");
 FUNC_0(VAR_0);
 FUNC_1(VAR_3);
 FUNC_4(VAR_3);
 FUNC_2(VAR_3);
}
