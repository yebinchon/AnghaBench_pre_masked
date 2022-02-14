
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ default_keyid; int shared_keys; } ;
struct sctp_inpcb {TYPE_1__ sctp_ep; } ;
typedef int sctp_sharedkey_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sctp_inpcb*,scalar_t__) ;
 int * FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct sctp_inpcb *VAR_1, uint16_t VAR_2)
{
 sctp_sharedkey_t *VAR_3;

 if (VAR_1 == ((void*)0))
  return (-1);


 if (VAR_2 == VAR_1->sctp_ep.default_keyid)
  return (-1);


 VAR_3 = FUNC_2(&VAR_1->sctp_ep.shared_keys, VAR_2);
 if (VAR_3 == ((void*)0))
  return (-1);




 FUNC_0(VAR_3, VAR_0);
 FUNC_3(VAR_3);


 FUNC_1(VAR_1, VAR_2);
 return (0);
}
