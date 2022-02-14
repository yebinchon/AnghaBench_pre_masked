
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int num_algo; scalar_t__* hmac; } ;
typedef TYPE_1__ sctp_hmaclist_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

uint16_t
FUNC_1(sctp_hmaclist_t *VAR_2, sctp_hmaclist_t *VAR_3)
{
 int VAR_4, VAR_5;

 if ((VAR_3 == ((void*)0)) || (VAR_2 == ((void*)0)))
  return (VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_2->num_algo; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_3->num_algo; VAR_5++) {
   if (VAR_2->hmac[VAR_4] == VAR_3->hmac[VAR_5]) {

    FUNC_0(VAR_1,
        "SCTP: negotiated peer HMAC id %u\n",
        VAR_2->hmac[VAR_4]);
    return (VAR_2->hmac[VAR_4]);
   }
  }
 }

 return (VAR_0);
}
