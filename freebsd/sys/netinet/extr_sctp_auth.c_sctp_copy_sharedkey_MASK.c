
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int keyid; TYPE_2__* key; } ;
typedef TYPE_1__ sctp_sharedkey_t ;
struct TYPE_7__ {int keylen; int key; } ;


 TYPE_1__* FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ) ;

__attribute__((used)) static sctp_sharedkey_t *
FUNC_2(const sctp_sharedkey_t *VAR_0)
{
 sctp_sharedkey_t *VAR_1;

 if (VAR_0 == ((void*)0))
  return (((void*)0));
 VAR_1 = FUNC_0();
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 if (VAR_0->key != ((void*)0))
  VAR_1->key = FUNC_1(VAR_0->key->key, VAR_0->key->keylen);
 else
  VAR_1->key = ((void*)0);
 VAR_1->keyid = VAR_0->keyid;
 return (VAR_1);
}
