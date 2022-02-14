
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int default_keyid; int shared_keys; } ;
struct sctp_inpcb {TYPE_1__ sctp_ep; } ;
typedef int sctp_sharedkey_t ;


 int * FUNC_0 (int *,int ) ;

int
FUNC_1(struct sctp_inpcb *VAR_0, uint16_t VAR_1)
{
 sctp_sharedkey_t *VAR_2;


 VAR_2 = FUNC_0(&VAR_0->sctp_ep.shared_keys, VAR_1);
 if (VAR_2 == ((void*)0)) {

  return (-1);
 }
 VAR_0->sctp_ep.default_keyid = VAR_1;
 return (0);
}
