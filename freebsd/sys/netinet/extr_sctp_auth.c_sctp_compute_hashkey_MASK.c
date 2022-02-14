
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ keylen; int * key; } ;
typedef TYPE_1__ sctp_key_t ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

sctp_key_t *
FUNC_4(sctp_key_t *VAR_0, sctp_key_t *VAR_1, sctp_key_t *VAR_2)
{
 uint32_t VAR_3;
 sctp_key_t *VAR_4;
 uint8_t *VAR_5;

 VAR_3 = FUNC_3(VAR_0) + FUNC_3(VAR_1) +
     FUNC_3(VAR_2);

 if (VAR_3 > 0) {

  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 == ((void*)0)) {

   return (((void*)0));
  }
  VAR_4->keylen = VAR_3;
  VAR_5 = VAR_4->key;
 } else {

  return (((void*)0));
 }


 if (FUNC_2(VAR_0, VAR_1) <= 0) {

  if (FUNC_3(VAR_2)) {
   FUNC_0(VAR_5, VAR_2->key, VAR_2->keylen);
   VAR_5 += VAR_2->keylen;
  }
  if (FUNC_3(VAR_0)) {
   FUNC_0(VAR_5, VAR_0->key, VAR_0->keylen);
   VAR_5 += VAR_0->keylen;
  }
  if (FUNC_3(VAR_1)) {
   FUNC_0(VAR_5, VAR_1->key, VAR_1->keylen);
  }
 } else {

  if (FUNC_3(VAR_2)) {
   FUNC_0(VAR_5, VAR_2->key, VAR_2->keylen);
   VAR_5 += VAR_2->keylen;
  }
  if (FUNC_3(VAR_1)) {
   FUNC_0(VAR_5, VAR_1->key, VAR_1->keylen);
   VAR_5 += VAR_1->keylen;
  }
  if (FUNC_3(VAR_0)) {
   FUNC_0(VAR_5, VAR_0->key, VAR_0->keylen);
  }
 }
 return (VAR_4);
}
