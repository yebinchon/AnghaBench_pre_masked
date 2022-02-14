
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_8__ {int active_keyid; int recv_keyid; int assoc_keyid; scalar_t__ random_len; TYPE_5__* random; } ;
struct TYPE_11__ {int shared_keys; TYPE_1__ authinfo; int * local_hmacs; int peer_hmacs; int peer_hmac_id; int * local_auth_chunks; } ;
struct sctp_tcb {TYPE_4__ asoc; TYPE_3__* sctp_ep; } ;
struct sctp_paramhdr {int param_length; int param_type; } ;
struct sctp_auth_random {int * chunk_types; int * hmac_ids; } ;
struct sctp_auth_hmac_algo {int * chunk_types; int * hmac_ids; } ;
struct sctp_auth_chunk_list {int * chunk_types; int * hmac_ids; } ;
struct mbuf {int dummy; } ;
struct TYPE_12__ {scalar_t__ key; } ;
typedef TYPE_5__ sctp_key_t ;
typedef int random_store ;
typedef int hmacs_store ;
typedef int chunks_store ;
struct TYPE_9__ {int shared_keys; int default_keyid; } ;
struct TYPE_10__ {TYPE_2__ sctp_ep; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct sctp_auth_random*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 () ;
 int * FUNC_4 (scalar_t__) ;
 TYPE_5__* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (struct sctp_tcb*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_5__*) ;
 struct sctp_paramhdr* FUNC_13 (struct mbuf*,scalar_t__,struct sctp_paramhdr*,scalar_t__) ;
 scalar_t__ FUNC_14 (struct mbuf*,scalar_t__,int,int *) ;
 int FUNC_15 (int ,int *) ;

void
FUNC_16(struct sctp_tcb *VAR_4, struct mbuf *VAR_5,
    uint32_t VAR_6, uint32_t VAR_7)
{
 struct sctp_paramhdr *VAR_8, VAR_9;
 uint16_t VAR_10, VAR_11;
 uint8_t VAR_12[VAR_2];
 struct sctp_auth_random *VAR_13 = ((void*)0);
 uint16_t VAR_14 = 0;
 uint8_t VAR_15[VAR_2];
 struct sctp_auth_hmac_algo *VAR_16 = ((void*)0);
 uint16_t VAR_17 = 0;
 uint8_t VAR_18[VAR_2];
 struct sctp_auth_chunk_list *VAR_19 = ((void*)0);
 uint16_t VAR_20 = 0;
 sctp_key_t *VAR_21;
 uint32_t VAR_22;


 VAR_7 += VAR_6;

 VAR_8 = (struct sctp_paramhdr *)FUNC_14(VAR_5, VAR_6,
     sizeof(struct sctp_paramhdr), (uint8_t *)&VAR_9);
 while (VAR_8 != ((void*)0)) {
  VAR_11 = FUNC_2(VAR_8->param_type);
  VAR_10 = FUNC_2(VAR_8->param_length);

  if ((VAR_10 == 0) || (VAR_6 + VAR_10 > VAR_7))
   break;

  if (VAR_11 == VAR_3) {
   if (VAR_10 > sizeof(VAR_12))
    break;
   VAR_8 = FUNC_13(VAR_5, VAR_6,
       (struct sctp_paramhdr *)VAR_12, VAR_10);
   if (VAR_8 == ((void*)0))
    return;

   VAR_13 = (struct sctp_auth_random *)VAR_8;
   VAR_14 = VAR_10 - sizeof(*VAR_13);
  } else if (VAR_11 == VAR_1) {
   uint16_t VAR_23;
   uint16_t VAR_24;

   if (VAR_10 > sizeof(VAR_15))
    break;
   VAR_8 = FUNC_13(VAR_5, VAR_6,
       (struct sctp_paramhdr *)VAR_15, VAR_10);
   if (VAR_8 == ((void*)0))
    return;

   VAR_16 = (struct sctp_auth_hmac_algo *)VAR_8;
   VAR_17 = VAR_10 - sizeof(*VAR_16);
   VAR_23 = VAR_17 / sizeof(VAR_16->hmac_ids[0]);
   if (VAR_4->asoc.local_hmacs != ((void*)0))
    FUNC_11(VAR_4->asoc.local_hmacs);
   VAR_4->asoc.local_hmacs = FUNC_4(VAR_23);
   if (VAR_4->asoc.local_hmacs != ((void*)0)) {
    for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
     (void)FUNC_7(VAR_4->asoc.local_hmacs,
         FUNC_2(VAR_16->hmac_ids[VAR_24]));
    }
   }
  } else if (VAR_11 == VAR_0) {
   int VAR_25;

   if (VAR_10 > sizeof(VAR_18))
    break;
   VAR_8 = FUNC_13(VAR_5, VAR_6,
       (struct sctp_paramhdr *)VAR_18, VAR_10);
   if (VAR_8 == ((void*)0))
    return;
   VAR_19 = (struct sctp_auth_chunk_list *)VAR_8;
   VAR_20 = VAR_10 - sizeof(*VAR_19);

   if (VAR_4->asoc.local_auth_chunks != ((void*)0))
    FUNC_9(VAR_4->asoc.local_auth_chunks);
   else
    VAR_4->asoc.local_auth_chunks = FUNC_3();
   for (VAR_25 = 0; VAR_25 < VAR_20; VAR_25++) {
    (void)FUNC_6(VAR_19->chunk_types[VAR_25],
        VAR_4->asoc.local_auth_chunks);
   }
  }

  VAR_6 += FUNC_0(VAR_10);
  if (VAR_6 + sizeof(struct sctp_paramhdr) > VAR_7)
   break;
  VAR_8 = (struct sctp_paramhdr *)FUNC_14(VAR_5, VAR_6, sizeof(struct sctp_paramhdr),
      (uint8_t *)&VAR_9);
 }

 VAR_22 = sizeof(*VAR_13) + VAR_14 + sizeof(*VAR_16) + VAR_17;
 if (VAR_19 != ((void*)0)) {
  VAR_22 += sizeof(*VAR_19) + VAR_20;
 }
 VAR_21 = FUNC_5(VAR_22);
 if (VAR_21 != ((void*)0)) {

  if (VAR_13 != ((void*)0)) {
   VAR_22 = sizeof(*VAR_13) + VAR_14;
   FUNC_1(VAR_21->key, VAR_13, VAR_22);
  } else {
   VAR_22 = 0;
  }

  if (VAR_19 != ((void*)0)) {
   FUNC_1(VAR_21->key + VAR_22, VAR_19,
       sizeof(*VAR_19) + VAR_20);
   VAR_22 += sizeof(*VAR_19) + VAR_20;
  }

  if (VAR_16 != ((void*)0)) {
   FUNC_1(VAR_21->key + VAR_22, VAR_16,
       sizeof(*VAR_16) + VAR_17);
  }
 }
 if (VAR_4->asoc.authinfo.random != ((void*)0))
  FUNC_12(VAR_4->asoc.authinfo.random);
 VAR_4->asoc.authinfo.random = VAR_21;
 VAR_4->asoc.authinfo.random_len = VAR_14;
 FUNC_8(VAR_4, VAR_4->asoc.authinfo.assoc_keyid);
 FUNC_8(VAR_4, VAR_4->asoc.authinfo.recv_keyid);


 VAR_4->asoc.peer_hmac_id = FUNC_15(VAR_4->asoc.peer_hmacs,
     VAR_4->asoc.local_hmacs);



 VAR_4->asoc.authinfo.active_keyid = VAR_4->sctp_ep->sctp_ep.default_keyid;

 (void)FUNC_10(&VAR_4->sctp_ep->sctp_ep.shared_keys,
     &VAR_4->asoc.shared_keys);
}
