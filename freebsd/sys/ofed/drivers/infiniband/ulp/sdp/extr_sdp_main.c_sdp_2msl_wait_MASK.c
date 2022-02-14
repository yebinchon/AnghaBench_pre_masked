
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int keep2msl; int socket; int state; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdp_sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,struct sdp_sock*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct sdp_sock *VAR_4)
{

 FUNC_0(VAR_4);
 VAR_4->flags |= VAR_0;
 VAR_4->state = VAR_1;
 FUNC_2(VAR_4->socket);
 FUNC_1(&VAR_4->keep2msl, VAR_2, VAR_3, VAR_4);
}
