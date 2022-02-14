
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostinfo {int tcp_port; int ip_address; int canon_hostname; int hostname; } ;


 int FUNC_0 (struct hostinfo*,int ,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct hostinfo *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 FUNC_1(&VAR_0->hostname, 0);
 FUNC_1(&VAR_0->canon_hostname, 0);
 FUNC_1(&VAR_0->ip_address, 0);
 FUNC_1(&VAR_0->tcp_port, 0);
}
