
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int authDataLength; int cryptDataLength; } ;
union authctx {TYPE_1__ aes_cbc_mac_ctx; } ;
typedef int uint32_t ;
typedef union authctx u_char ;
struct swcr_session {struct swcr_data* swcr_algorithms; } ;
struct swcr_data {scalar_t__ sw_alg; int sw_kschedule; int sw_ictx; struct auth_hash* sw_axf; struct enc_xform* sw_exf; } ;
struct enc_xform {int (* decrypt ) (int ,union authctx*) ;int (* reinit ) (int ,union authctx*) ;int (* encrypt_multi ) (int ,union authctx*,int) ;int (* encrypt ) (int ,union authctx*) ;} ;
struct cryptop {int crp_flags; struct cryptodesc* crp_desc; int crp_session; int crp_buf; } ;
struct cryptodesc {scalar_t__ crd_alg; int crd_flags; scalar_t__ crd_klen; int crd_len; scalar_t__ crd_inject; scalar_t__ crd_skip; int crd_iv; struct cryptodesc* crd_next; } ;
struct auth_hash {int ctxsize; int blocksize; int hashsize; int (* Final ) (union authctx*,union authctx*) ;int (* Update ) (union authctx*,union authctx*,int) ;int (* Reinit ) (union authctx*,union authctx*,int) ;} ;
typedef int caddr_t ;
typedef int blkbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (union authctx*,int,int ) ;
 int FUNC_3 (int ,union authctx*,int) ;
 int FUNC_4 (union authctx*,int) ;
 int FUNC_5 (int ,int ,scalar_t__,int,union authctx*) ;
 int FUNC_6 (int ,int ,scalar_t__,int,union authctx*) ;
 struct swcr_session* FUNC_7 (int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct swcr_data*) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (union authctx*,union authctx*,int) ;
 int FUNC_13 (union authctx*,union authctx*,int) ;
 int FUNC_14 (union authctx*,union authctx*) ;
 int FUNC_15 (int ,union authctx*) ;
 int FUNC_16 (int ,union authctx*) ;
 int FUNC_17 (union authctx*,union authctx*,int) ;
 int FUNC_18 (int ,union authctx*) ;
 int FUNC_19 (union authctx*,union authctx*,int) ;
 int FUNC_20 (int ,union authctx*,int) ;
 int FUNC_21 (int ,union authctx*) ;
 int FUNC_22 (union authctx*,union authctx*,int) ;
 int FUNC_23 (int ,union authctx*) ;
 int FUNC_24 (union authctx*,union authctx*,int) ;
 int FUNC_25 (union authctx*,union authctx*,int) ;

__attribute__((used)) static int
FUNC_26(struct cryptop *VAR_8)
{
 uint32_t VAR_9[FUNC_8(VAR_5, sizeof(uint32_t))];
 u_char *VAR_10 = (u_char *)VAR_9;
 u_char VAR_11[VAR_0];
 u_char VAR_12[VAR_0];
 u_char VAR_13[VAR_5];
 union authctx VAR_14;
 struct swcr_session *VAR_15;
 struct cryptodesc *VAR_16, *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 struct swcr_data *VAR_19, *VAR_20, *VAR_21 = ((void*)0);
 struct auth_hash *VAR_22 = ((void*)0);
 struct enc_xform *VAR_23 = ((void*)0);
 caddr_t VAR_24 = (caddr_t)VAR_8->crp_buf;
 uint32_t *VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 int VAR_34 = 0;

 VAR_29 = VAR_27 = VAR_31 = VAR_32 = 0;

 VAR_15 = FUNC_7(VAR_8->crp_session);

 for (VAR_16 = VAR_8->crp_desc; VAR_16; VAR_16 = VAR_16->crd_next) {
  for (VAR_28 = 0; VAR_28 < FUNC_10(VAR_15->swcr_algorithms) &&
      VAR_15->swcr_algorithms[VAR_28].sw_alg != VAR_16->crd_alg; VAR_28++)
   ;
  if (VAR_28 == FUNC_10(VAR_15->swcr_algorithms))
   return (VAR_7);

  VAR_19 = &VAR_15->swcr_algorithms[VAR_28];
  switch (VAR_19->sw_alg) {
  case 131:
  case 129:
  case 128:
   VAR_21 = VAR_19;
   VAR_18 = VAR_16;
   VAR_23 = VAR_21->sw_exf;

   VAR_29 = VAR_1;
   break;
  case 130:
   VAR_34 = 1;

  case 134:
  case 133:
  case 132:
   VAR_20 = VAR_19;
   VAR_17 = VAR_16;
   VAR_22 = VAR_20->sw_axf;
   if (VAR_20->sw_ictx == 0)
    return (VAR_7);
   FUNC_3(VAR_20->sw_ictx, &VAR_14, VAR_22->ctxsize);
   VAR_27 = VAR_22->blocksize;
   break;
  default:
   return (VAR_7);
  }
 }
 if (VAR_18 == ((void*)0) || VAR_17 == ((void*)0))
  return (VAR_7);





 if (VAR_18->crd_alg == 129) {
  switch (VAR_17->crd_alg) {
  case 134:
  case 133:
  case 132:
   break;
  default:
   return (VAR_7);
  }
 } else if (VAR_18->crd_alg == 131 &&
     VAR_17->crd_alg != 130)
  return (VAR_7);

 if ((VAR_18->crd_alg == 129 ||
      VAR_18->crd_alg == 131) &&
     (VAR_18->crd_flags & VAR_3) == 0)
  return (VAR_7);

 if (VAR_18->crd_klen != VAR_17->crd_klen)
  return (VAR_7);


 if (VAR_18->crd_flags & VAR_2) {

  if (VAR_18->crd_flags & VAR_3)
   FUNC_3(VAR_18->crd_iv, VAR_13, VAR_29);
  else
   FUNC_2(VAR_13, VAR_29, 0);


  if (!(VAR_18->crd_flags & VAR_4))
   FUNC_5(VAR_8->crp_flags, VAR_24, VAR_18->crd_inject,
       VAR_29, VAR_13);

 } else {

  if (VAR_18->crd_flags & VAR_3)
   FUNC_3(VAR_18->crd_iv, VAR_13, VAR_29);
  else {

   FUNC_6(VAR_8->crp_flags, VAR_24, VAR_18->crd_inject,
       VAR_29, VAR_13);
  }
 }

 if (VAR_20->sw_alg == 130) {





  VAR_14.aes_cbc_mac_ctx.authDataLength = VAR_17->crd_len;
  VAR_14.aes_cbc_mac_ctx.cryptDataLength = VAR_18->crd_len;
 }

 if (VAR_22->Reinit)
  VAR_22->Reinit(&VAR_14, VAR_13, VAR_29);


 VAR_26 = VAR_17->crd_len;

 for (VAR_28 = VAR_31; VAR_28 < VAR_17->crd_len; VAR_28 += VAR_27) {
  VAR_30 = FUNC_1(VAR_17->crd_len - VAR_28, VAR_27 - VAR_32);
  FUNC_6(VAR_8->crp_flags, VAR_24, VAR_17->crd_skip + VAR_28, VAR_30,
      VAR_10 + VAR_32);
  FUNC_4(VAR_10 + VAR_30 + VAR_32, VAR_27 - VAR_30 - VAR_32);
  VAR_22->Update(&VAR_14, VAR_10, VAR_27);
  VAR_32 = 0;
 }

 if (VAR_23->reinit)
  VAR_23->reinit(VAR_21->sw_kschedule, VAR_13);


 for (VAR_28 = 0; VAR_28 < VAR_18->crd_len; VAR_28 += VAR_30) {
  if (VAR_23->encrypt_multi != ((void*)0)) {
   VAR_30 = FUNC_11(VAR_18->crd_len - VAR_28, VAR_27);
   if (VAR_30 == 0)
    VAR_30 = VAR_27;
   else
    VAR_30 = FUNC_1(VAR_30, sizeof(VAR_9));
  } else
   VAR_30 = VAR_27;
  VAR_30 = FUNC_1(VAR_18->crd_len - VAR_28, VAR_30);
  if (VAR_30 < VAR_27)
   FUNC_4(VAR_10, VAR_27);
  FUNC_6(VAR_8->crp_flags, VAR_24, VAR_18->crd_skip + VAR_28, VAR_30,
      VAR_10);






  if (VAR_18->crd_flags & VAR_2) {
   if (VAR_34)
    VAR_22->Update(&VAR_14, VAR_10, VAR_30);
   if (VAR_23->encrypt_multi != ((void*)0))
    VAR_23->encrypt_multi(VAR_21->sw_kschedule, VAR_10,
        VAR_30);
   else
    VAR_23->encrypt(VAR_21->sw_kschedule, VAR_10);
   if (!VAR_34)
    VAR_22->Update(&VAR_14, VAR_10, VAR_30);
   FUNC_5(VAR_8->crp_flags, VAR_24,
       VAR_18->crd_skip + VAR_28, VAR_30, VAR_10);
  } else {
   if (VAR_34) {
    FUNC_0(VAR_23->encrypt_multi == ((void*)0),
        ("assume CCM is single-block only"));
    VAR_23->decrypt(VAR_21->sw_kschedule, VAR_10);
   }
   VAR_22->Update(&VAR_14, VAR_10, VAR_30);
  }
 }


 switch (VAR_17->crd_alg) {
  case 134:
  case 133:
  case 132:

   FUNC_4(VAR_10, VAR_27);
   VAR_25 = (uint32_t *)VAR_10 + 1;
   *VAR_25 = FUNC_9(VAR_26 * 8);
   VAR_25 = (uint32_t *)VAR_10 + 3;
   *VAR_25 = FUNC_9(VAR_18->crd_len * 8);
   VAR_22->Update(&VAR_14, VAR_10, VAR_27);
   break;
 }


 VAR_22->Final(VAR_11, &VAR_14);


 if (!(VAR_18->crd_flags & VAR_2)) {
  FUNC_6(VAR_8->crp_flags, VAR_24, VAR_17->crd_inject,
      VAR_22->hashsize, VAR_12);

  VAR_33 = FUNC_25(VAR_11, VAR_12, VAR_22->hashsize);
  if (VAR_33 == 0) {

   if (VAR_34) {
    FUNC_0(VAR_23->reinit != ((void*)0),
        ("AES-CCM reinit function must be set"));
    VAR_23->reinit(VAR_21->sw_kschedule, VAR_13);
   }
   for (VAR_28 = 0; VAR_28 < VAR_18->crd_len; VAR_28 += VAR_27) {
    VAR_30 = FUNC_1(VAR_18->crd_len - VAR_28, VAR_27);
    if (VAR_30 < VAR_27)
     FUNC_4(VAR_10, VAR_27);
    FUNC_6(VAR_8->crp_flags, VAR_24,
        VAR_18->crd_skip + VAR_28, VAR_30, VAR_10);
    VAR_23->decrypt(VAR_21->sw_kschedule, VAR_10);
    FUNC_5(VAR_8->crp_flags, VAR_24,
        VAR_18->crd_skip + VAR_28, VAR_30, VAR_10);
   }
  } else
   return (VAR_6);
 } else {

  FUNC_5(VAR_8->crp_flags, VAR_24, VAR_17->crd_inject,
      VAR_22->hashsize, VAR_11);
 }

 return (0);
}
