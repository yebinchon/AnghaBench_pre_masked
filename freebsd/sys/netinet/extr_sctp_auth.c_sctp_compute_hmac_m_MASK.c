
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct mbuf {int dummy; } ;
struct TYPE_3__ {scalar_t__ keylen; int key; } ;
typedef TYPE_1__ sctp_key_t ;
typedef int sctp_hash_context_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,struct mbuf*,scalar_t__,int *,int ) ;
 int FUNC_6 (int ,int *,int ,scalar_t__) ;

uint32_t
FUNC_7(uint16_t VAR_1, sctp_key_t *VAR_2, struct mbuf *VAR_3,
    uint32_t VAR_4, uint8_t *VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7;
 sctp_hash_context_t VAR_8;
 uint8_t VAR_9[VAR_0];


 if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_5 == ((void*)0))) {

  return (0);
 }

 VAR_6 = FUNC_2(VAR_1);
 if (VAR_6 == 0)
  return (0);


 VAR_7 = FUNC_1(VAR_1);
 if (VAR_2->keylen > VAR_7) {
  FUNC_4(VAR_1, &VAR_8);
  FUNC_6(VAR_1, &VAR_8, VAR_2->key, VAR_2->keylen);
  FUNC_3(VAR_1, &VAR_8, VAR_9);

  VAR_2->keylen = VAR_6;
  FUNC_0(VAR_2->key, VAR_9, VAR_2->keylen);
 }
 return (FUNC_5(VAR_1, VAR_2->key, VAR_2->keylen, VAR_3, VAR_4, VAR_5, 0));
}
