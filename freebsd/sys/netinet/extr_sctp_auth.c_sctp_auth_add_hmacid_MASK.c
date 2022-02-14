
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int num_algo; int max_algo; scalar_t__* hmac; } ;
typedef TYPE_1__ sctp_hmaclist_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

int
FUNC_1(sctp_hmaclist_t *VAR_3, uint16_t VAR_4)
{
 int VAR_5;

 if (VAR_3 == ((void*)0))
  return (-1);
 if (VAR_3->num_algo == VAR_3->max_algo) {
  FUNC_0(VAR_2,
      "SCTP: HMAC id list full, ignoring add %u\n", VAR_4);
  return (-1);
 }
 if ((VAR_4 != VAR_0) &&
     (VAR_4 != VAR_1)) {
  return (-1);
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_algo; VAR_5++) {
  if (VAR_3->hmac[VAR_5] == VAR_4) {

   return (-1);
  }
 }
 FUNC_0(VAR_2, "SCTP: add HMAC id %u to list\n", VAR_4);
 VAR_3->hmac[VAR_3->num_algo++] = VAR_4;
 return (0);
}
