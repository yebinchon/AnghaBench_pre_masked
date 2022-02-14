
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int num_algo; scalar_t__* hmac; } ;
typedef TYPE_1__ sctp_hmaclist_t ;


 scalar_t__ VAR_0 ;

int
FUNC_0(sctp_hmaclist_t *VAR_1, uint16_t VAR_2)
{
 int VAR_3;

 if ((VAR_1 == ((void*)0)) || (VAR_2 == VAR_0))
  return (0);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_algo; VAR_3++)
  if (VAR_1->hmac[VAR_3] == VAR_2)
   return (1);


 return (0);
}
