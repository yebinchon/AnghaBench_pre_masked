
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t keylen; int * key; } ;
typedef TYPE_1__ sctp_key_t ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(sctp_key_t *VAR_0, const char *VAR_1)
{
 uint32_t VAR_2;

 if (VAR_0 == ((void*)0)) {
  FUNC_0("%s: [Null key]\n", VAR_1);
  return;
 }
 FUNC_0("%s: len %u, ", VAR_1, VAR_0->keylen);
 if (VAR_0->keylen) {
  for (VAR_2 = 0; VAR_2 < VAR_0->keylen; VAR_2++)
   FUNC_0("%02x", VAR_0->key[VAR_2]);
  FUNC_0("\n");
 } else {
  FUNC_0("[Null key]\n");
 }
}
