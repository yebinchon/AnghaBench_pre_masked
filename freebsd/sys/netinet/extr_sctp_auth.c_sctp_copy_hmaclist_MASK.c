
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_algo; int * hmac; int max_algo; } ;
typedef TYPE_1__ sctp_hmaclist_t ;


 TYPE_1__* FUNC_0 (int ) ;

sctp_hmaclist_t *
FUNC_1(sctp_hmaclist_t *VAR_0)
{
 sctp_hmaclist_t *VAR_1;
 int VAR_2;

 if (VAR_0 == ((void*)0))
  return (((void*)0));

 VAR_1 = FUNC_0(VAR_0->max_algo);
 if (VAR_1 == ((void*)0))
  return (((void*)0));

 VAR_1->max_algo = VAR_0->max_algo;
 VAR_1->num_algo = VAR_0->num_algo;
 for (VAR_2 = 0; VAR_2 < VAR_0->num_algo; VAR_2++)
  VAR_1->hmac[VAR_2] = VAR_0->hmac[VAR_2];
 return (VAR_1);
}
