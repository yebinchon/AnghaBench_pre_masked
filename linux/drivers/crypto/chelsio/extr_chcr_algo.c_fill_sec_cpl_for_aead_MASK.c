
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct cpl_tx_sec_pdu {int ivgen_hdrlen; int seqno_numivs; int cipherstop_lo_authinsert; int aadstart_cipherstop_hi; int pldlen; int op_ivinsrtofst; } ;
struct chcr_aead_ctx {int hmac_ctrl; } ;
struct aead_request {int assoclen; unsigned char cryptlen; } ;
struct TYPE_3__ {unsigned int tx_chan_id; } ;


 struct chcr_aead_ctx* FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,unsigned char,unsigned char,unsigned char) ;
 int FUNC_2 (int,int,int,int ) ;
 int FUNC_3 (int ,int ,int,int ,int ,unsigned int) ;
 int FUNC_4 (unsigned int,int,int) ;
 int FUNC_5 (unsigned short,int,unsigned int,unsigned int,int ,int) ;
 int VAR_7 ;
 TYPE_1__* FUNC_6 (struct crypto_aead*) ;
 unsigned char FUNC_7 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_8 (struct aead_request*) ;
 scalar_t__ FUNC_9 (struct crypto_aead*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct cpl_tx_sec_pdu *VAR_8,
      unsigned int VAR_9,
      struct aead_request *VAR_10,
      unsigned short VAR_11)
{
 struct crypto_aead *VAR_12 = FUNC_8(VAR_10);
 struct chcr_aead_ctx *VAR_13 = FUNC_0(FUNC_6(VAR_12));
 unsigned int VAR_14 = VAR_5;
 unsigned int VAR_15 = VAR_4;
 unsigned int VAR_16 = FUNC_6(VAR_12)->tx_chan_id;
 unsigned int VAR_17;
 unsigned char VAR_18 = 0, VAR_19 = 0;
 unsigned int VAR_20;

 if (FUNC_9(VAR_12) == VAR_6)
  VAR_20 = VAR_10->assoclen - 8;
 else
  VAR_20 = VAR_10->assoclen;
 VAR_17 = VAR_1 +
  ((VAR_20) ? VAR_0 : 0);

 VAR_19 = VAR_10->cryptlen ?
  (VAR_10->assoclen + VAR_7 + 1 + VAR_17) : 0;
 if (VAR_11 == VAR_2) {
  if (FUNC_7(VAR_12) != VAR_10->cryptlen)
   VAR_18 = FUNC_7(VAR_12);
  else
   VAR_19 = 0;
 }


 VAR_8->op_ivinsrtofst = FUNC_4(VAR_16,
      2, 1);
 VAR_8->pldlen =
  FUNC_10(VAR_10->assoclen + VAR_7 + VAR_10->cryptlen + VAR_17);

 VAR_8->aadstart_cipherstop_hi = FUNC_2(
    1 + VAR_7, VAR_7 + VAR_20 + VAR_17,
    VAR_10->assoclen + VAR_7 + 1 + VAR_17, 0);

 VAR_8->cipherstop_lo_authinsert = FUNC_1(0,
     VAR_19, VAR_18,
     (VAR_11 == VAR_3) ? 0 :
     FUNC_7(VAR_12));
 VAR_8->seqno_numivs = FUNC_5(VAR_11,
     (VAR_11 == VAR_3) ? 0 : 1,
     VAR_14, VAR_15,
     VAR_13->hmac_ctrl, VAR_7 >> 1);

 VAR_8->ivgen_hdrlen = FUNC_3(0, 0, 1, 0,
     0, VAR_9);
}
