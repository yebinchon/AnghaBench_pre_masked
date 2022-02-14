
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int num_algo; int * hmac; } ;
typedef TYPE_1__ sctp_hmaclist_t ;
typedef int hmac_id ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;

int
FUNC_2(sctp_hmaclist_t *VAR_0, uint8_t *VAR_1)
{
 int VAR_2;
 uint16_t VAR_3;

 if (VAR_0 == ((void*)0))
  return (0);

 for (VAR_2 = 0; VAR_2 < VAR_0->num_algo; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0->hmac[VAR_2]);
  FUNC_1(VAR_1, &VAR_3, sizeof(VAR_3));
  VAR_1 += sizeof(VAR_3);
 }
 return (VAR_0->num_algo * sizeof(VAR_3));
}
