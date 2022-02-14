
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ assoc_keyid; int * assoc_key; int peer_random; int random; } ;
struct TYPE_6__ {TYPE_1__ authinfo; int peer_hmac_id; int shared_keys; } ;
struct sctp_tcb {TYPE_2__ asoc; } ;
struct sctp_auth_chunk {int hmac; int shared_key_id; } ;
struct mbuf {int dummy; } ;
struct TYPE_7__ {int * key; } ;
typedef TYPE_3__ sctp_sharedkey_t ;
typedef int sctp_key_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;
 int * FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int *,struct mbuf*,int ,int ) ;
 TYPE_3__* FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,char*) ;

void
FUNC_10(struct mbuf *VAR_2, uint32_t VAR_3,
    struct sctp_auth_chunk *VAR_4, struct sctp_tcb *VAR_5, uint16_t VAR_6)
{
 uint32_t VAR_7;
 sctp_sharedkey_t *VAR_8;
 sctp_key_t *VAR_9;

 if ((VAR_5 == ((void*)0)) || (VAR_4 == ((void*)0)))
  return;


 VAR_7 = FUNC_8(VAR_5->asoc.peer_hmac_id);
 FUNC_3(VAR_4->hmac, 0, FUNC_1(VAR_7));


 if ((VAR_6 != VAR_5->asoc.authinfo.assoc_keyid) ||
     (VAR_5->asoc.authinfo.assoc_key == ((void*)0))) {
  if (VAR_5->asoc.authinfo.assoc_key != ((void*)0)) {

   FUNC_7(VAR_5->asoc.authinfo.assoc_key);
  }
  VAR_8 = FUNC_6(&VAR_5->asoc.shared_keys, VAR_6);

  if (VAR_8 != ((void*)0))
   VAR_9 = VAR_8->key;
  else
   VAR_9 = ((void*)0);

  VAR_5->asoc.authinfo.assoc_key =
      FUNC_4(VAR_5->asoc.authinfo.random,
      VAR_5->asoc.authinfo.peer_random, VAR_9);
  VAR_5->asoc.authinfo.assoc_keyid = VAR_6;
  FUNC_0(VAR_1, "caching key id %u\n",
      VAR_5->asoc.authinfo.assoc_keyid);





 }


 VAR_4->shared_key_id = FUNC_2(VAR_6);


 (void)FUNC_5(VAR_5->asoc.peer_hmac_id, VAR_5->asoc.authinfo.assoc_key,
     VAR_2, VAR_3, VAR_4->hmac);
}
