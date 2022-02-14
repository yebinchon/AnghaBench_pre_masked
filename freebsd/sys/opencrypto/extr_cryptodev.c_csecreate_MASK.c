
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef void* u_int32_t ;
struct fcrypt {int dummy; } ;
struct enc_xform {int dummy; } ;
struct csession {int keylen; int mackeylen; struct auth_hash* thash; struct enc_xform* txform; void* mac; void* cipher; int cses; void* mackey; void* key; int lock; } ;
struct auth_hash {int dummy; } ;
typedef int crypto_session_t ;
typedef void* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fcrypt*,struct csession*) ;
 struct csession* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,char*,char*,int ) ;

struct csession *
FUNC_3(struct fcrypt *VAR_4, crypto_session_t VAR_5, caddr_t VAR_6, u_int64_t VAR_7,
    caddr_t VAR_8, u_int64_t VAR_9, u_int32_t VAR_10, u_int32_t VAR_11,
    struct enc_xform *VAR_12, struct auth_hash *VAR_13)
{
 struct csession *VAR_14;

 VAR_14 = FUNC_1(sizeof(struct csession), VAR_2, VAR_1 | VAR_3);
 if (VAR_14 == ((void*)0))
  return ((void*)0);
 FUNC_2(&VAR_14->lock, "cryptodev", "crypto session lock", VAR_0);
 VAR_14->key = VAR_6;
 VAR_14->keylen = VAR_7/8;
 VAR_14->mackey = VAR_8;
 VAR_14->mackeylen = VAR_9/8;
 VAR_14->cses = VAR_5;
 VAR_14->cipher = VAR_10;
 VAR_14->mac = VAR_11;
 VAR_14->txform = VAR_12;
 VAR_14->thash = VAR_13;
 FUNC_0(VAR_4, VAR_14);
 return (VAR_14);
}
