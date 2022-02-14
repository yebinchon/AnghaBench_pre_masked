
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct sctp_auth_hmac_algo {int * hmac_ids; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1(struct sctp_auth_hmac_algo *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (FUNC_0(VAR_1->hmac_ids[VAR_3]) == VAR_0) {
   return (0);
  }
 }
 return (-1);
}
