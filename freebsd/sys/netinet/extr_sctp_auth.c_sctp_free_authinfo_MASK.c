
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * recv_key; int * assoc_key; int * peer_random; int * random; } ;
typedef TYPE_1__ sctp_authinfo_t ;


 int FUNC_0 (int *) ;

void
FUNC_1(sctp_authinfo_t *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->random != ((void*)0))
  FUNC_0(VAR_0->random);
 if (VAR_0->peer_random != ((void*)0))
  FUNC_0(VAR_0->peer_random);
 if (VAR_0->assoc_key != ((void*)0))
  FUNC_0(VAR_0->assoc_key);
 if (VAR_0->recv_key != ((void*)0))
  FUNC_0(VAR_0->recv_key);



}
