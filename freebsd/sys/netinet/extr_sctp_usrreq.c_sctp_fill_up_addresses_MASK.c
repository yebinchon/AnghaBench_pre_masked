
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sctp_tcb {int dummy; } ;
struct sctp_inpcb {int def_vrf_id; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 size_t FUNC_2 (struct sctp_inpcb*,struct sctp_tcb*,size_t,struct sockaddr_storage*,int ) ;

__attribute__((used)) static size_t
FUNC_3(struct sctp_inpcb *VAR_0,
    struct sctp_tcb *VAR_1,
    size_t VAR_2,
    struct sockaddr_storage *VAR_3)
{
 size_t VAR_4 = 0;

 FUNC_0();

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_0->def_vrf_id);
 FUNC_1();
 return (VAR_4);
}
