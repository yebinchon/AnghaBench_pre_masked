
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct ocf_session {int crda_alg; int lock; int sid; } ;
struct TYPE_2__ {int cipher_algorithm; int cipher_key_len; scalar_t__ tls_vmajor; scalar_t__ tls_vminor; int cipher_key; int iv_len; } ;
struct ktls_session {int free; int sw_encrypt; struct ocf_session* cipher; TYPE_1__ params; } ;
struct cryptoini {int cri_alg; int cri_klen; struct cryptoini* cri_next; int cri_key; } ;
typedef int crie ;
typedef int cria ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int *,struct cryptoini*,int) ;
 int FUNC_1 (struct ocf_session*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 struct ocf_session* FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct cryptoini*,int ,int) ;
 int FUNC_4 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_17, struct ktls_session *VAR_18)
{
 struct cryptoini VAR_19, VAR_20;
 struct ocf_session *VAR_21;
 int VAR_22;

 FUNC_3(&VAR_19, 0, sizeof(VAR_19));
 FUNC_3(&VAR_20, 0, sizeof(VAR_20));

 switch (VAR_18->params.cipher_algorithm) {
 case 128:
  if (VAR_18->params.iv_len != VAR_11)
   return (VAR_4);
  switch (VAR_18->params.cipher_key_len) {
  case 128 / 8:
   VAR_19.cri_alg = VAR_0;
   break;
  case 256 / 8:
   VAR_19.cri_alg = VAR_1;
   break;
  default:
   return (VAR_4);
  }
  VAR_19.cri_key = VAR_18->params.cipher_key;
  VAR_19.cri_klen = VAR_18->params.cipher_key_len * 8;
  break;
 default:
  return (VAR_6);
 }


 if (VAR_18->params.tls_vmajor != VAR_12 ||
     VAR_18->params.tls_vminor < VAR_13 ||
     VAR_18->params.tls_vminor > VAR_14)
  return (VAR_6);

 VAR_21 = FUNC_2(sizeof(*VAR_21), VAR_8, VAR_9 | VAR_10);
 if (VAR_21 == ((void*)0))
  return (VAR_5);

 VAR_20.cri_alg = VAR_18->params.cipher_algorithm;
 VAR_20.cri_key = VAR_18->params.cipher_key;
 VAR_20.cri_klen = VAR_18->params.cipher_key_len * 8;

 VAR_20.cri_next = &VAR_19;
 VAR_22 = FUNC_0(&VAR_21->sid, &VAR_20,
     VAR_2 | VAR_3);
 if (VAR_22) {
  FUNC_1(VAR_21, VAR_8);
  return (VAR_22);
 }

 VAR_21->crda_alg = VAR_19.cri_alg;
 FUNC_4(&VAR_21->lock, "ktls_ocf", ((void*)0), VAR_7);
 VAR_18->cipher = VAR_21;
 VAR_18->sw_encrypt = VAR_15;
 VAR_18->free = VAR_16;
 return (0);
}
