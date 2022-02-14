
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
struct uio {int uio_iovcnt; struct iovec* uio_iov; } ;
struct swcr_data {int sw_kschedule; struct enc_xform* sw_exf; } ;
struct mbuf {int dummy; } ;
struct iovec {int iov_len; scalar_t__ iov_base; } ;
struct enc_xform {int blocksize; int ivsize; int (* setkey ) (int *,int ,int) ;int (* decrypt ) (int ,unsigned char*) ;int (* encrypt ) (int ,unsigned char*) ;int (* decrypt_multi ) (int ,unsigned char*,size_t) ;int (* encrypt_multi ) (int ,unsigned char*,size_t) ;int (* reinit ) (int ,unsigned char*) ;int (* zerokey ) (int *) ;} ;
struct cryptodesc {int crd_len; scalar_t__ crd_alg; int crd_flags; unsigned char* crd_iv; int crd_klen; int crd_skip; int crd_key; int crd_inject; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t FUNC_0 (size_t,size_t) ;
 int VAR_9 ;
 int FUNC_1 (unsigned char*,int,int ) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (int,scalar_t__,int ,int,unsigned char*) ;
 int FUNC_4 (int,scalar_t__,int ,int,unsigned char*) ;
 int FUNC_5 (struct mbuf*,struct iovec**,int*,int*) ;
 int FUNC_6 (struct uio*,int,int,unsigned char*) ;
 int FUNC_7 (struct uio*,int,int,unsigned char*) ;
 int FUNC_8 (struct uio*,int,int*) ;
 int FUNC_9 (struct iovec*,int ) ;
 int FUNC_10 (struct iovec*) ;
 size_t FUNC_11 (size_t,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,unsigned char*) ;
 int FUNC_14 (int ,unsigned char*,size_t) ;
 int FUNC_15 (int ,unsigned char*) ;
 int FUNC_16 (int ,unsigned char*) ;
 int FUNC_17 (int *,int ,int) ;
 int FUNC_18 (int ,unsigned char*) ;
 int FUNC_19 (int ,unsigned char*) ;
 int FUNC_20 (int ,unsigned char*) ;
 int FUNC_21 (int ,unsigned char*) ;
 int FUNC_22 (int ,unsigned char*) ;
 int FUNC_23 (int ,unsigned char*) ;
 int FUNC_24 (int ,unsigned char*,size_t) ;

__attribute__((used)) static int
FUNC_25(struct cryptodesc *VAR_10, struct swcr_data *VAR_11, caddr_t VAR_12,
    int VAR_13)
{
 unsigned char VAR_14[VAR_7], VAR_15[VAR_7];
 unsigned char *VAR_16, *VAR_17, VAR_18[VAR_7];
 struct enc_xform *VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 struct uio *VAR_27, VAR_28;
 struct iovec VAR_29[4];
 struct iovec *VAR_30;
 int VAR_31, VAR_32;
 int VAR_33;

 VAR_33 = 0;

 VAR_19 = VAR_11->sw_exf;
 VAR_23 = VAR_19->blocksize;
 VAR_26 = VAR_19->ivsize;


 if (VAR_10->crd_len % VAR_23)
  return VAR_8;

 if (VAR_10->crd_alg == VAR_4 &&
     (VAR_10->crd_flags & VAR_1) == 0)
  return (VAR_8);


 if (VAR_10->crd_flags & VAR_0) {

  if (VAR_10->crd_flags & VAR_1)
   FUNC_2(VAR_10->crd_iv, VAR_14, VAR_26);
  else
   FUNC_1(VAR_14, VAR_26, 0);


  if (!(VAR_10->crd_flags & VAR_2))
   FUNC_3(VAR_13, VAR_12, VAR_10->crd_inject, VAR_26, VAR_14);

 } else {

  if (VAR_10->crd_flags & VAR_1)
   FUNC_2(VAR_10->crd_iv, VAR_14, VAR_26);
  else {

   FUNC_4(VAR_13, VAR_12, VAR_10->crd_inject, VAR_26, VAR_14);
  }
 }

 if (VAR_10->crd_flags & VAR_3) {
  int VAR_34;

  if (VAR_11->sw_kschedule)
   VAR_19->zerokey(&(VAR_11->sw_kschedule));

  VAR_34 = VAR_19->setkey(&VAR_11->sw_kschedule,
    VAR_10->crd_key, VAR_10->crd_klen / 8);
  if (VAR_34)
   return (VAR_34);
 }

 VAR_30 = VAR_29;
 VAR_31 = FUNC_10(VAR_29);
 VAR_32 = 0;
 VAR_27 = &VAR_28;
 if ((VAR_13 & VAR_5) != 0) {
  VAR_33 = FUNC_5((struct mbuf *)VAR_12, &VAR_30, &VAR_31,
      &VAR_32);
  if (VAR_33)
   return (VAR_33);
  VAR_27->uio_iov = VAR_30;
  VAR_27->uio_iovcnt = VAR_31;
 } else if ((VAR_13 & VAR_6) != 0)
  VAR_27 = (struct uio *)VAR_12;
 else {
  VAR_30[0].iov_base = VAR_12;
  VAR_30[0].iov_len = VAR_10->crd_skip + VAR_10->crd_len;
  VAR_27->uio_iov = VAR_30;
  VAR_27->uio_iovcnt = 1;
 }

 VAR_16 = VAR_14;

 if (VAR_19->reinit) {




  VAR_19->reinit(VAR_11->sw_kschedule, VAR_14);
 }

 VAR_25 = VAR_10->crd_skip;
 VAR_24 = FUNC_8(VAR_27, VAR_25, &VAR_22);
 if (VAR_24 == -1) {
  VAR_33 = VAR_8;
  goto out;
 }

 VAR_20 = VAR_10->crd_len;

 while (VAR_20 > 0) {




  if (VAR_27->uio_iov[VAR_24].iov_len < VAR_22 + VAR_23 &&
      VAR_27->uio_iov[VAR_24].iov_len != VAR_22) {
   FUNC_7(VAR_27, VAR_25, VAR_23, VAR_15);


   if (VAR_19->reinit) {
    if (VAR_10->crd_flags & VAR_0) {
     VAR_19->encrypt(VAR_11->sw_kschedule,
         VAR_15);
    } else {
     VAR_19->decrypt(VAR_11->sw_kschedule,
         VAR_15);
    }
   } else if (VAR_10->crd_flags & VAR_0) {

    for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++)
     VAR_15[VAR_21] ^= VAR_16[VAR_21];

    VAR_19->encrypt(VAR_11->sw_kschedule, VAR_15);





    FUNC_2(VAR_15, VAR_14, VAR_23);
    VAR_16 = VAR_14;
   } else {




    VAR_17 = (VAR_16 == VAR_14) ? VAR_18 : VAR_14;
    FUNC_2(VAR_15, VAR_17, VAR_23);

    VAR_19->decrypt(VAR_11->sw_kschedule, VAR_15);


    for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++)
     VAR_15[VAR_21] ^= VAR_16[VAR_21];

    VAR_16 = VAR_17;
   }


   FUNC_6(VAR_27, VAR_25, VAR_23, VAR_15);

   VAR_25 += VAR_23;


   VAR_24 = FUNC_8(VAR_27, VAR_25, &VAR_22);
   if (VAR_24 == -1) {
    VAR_33 = VAR_8;
    goto out;
   }

   VAR_20 -= VAR_23;


   if (VAR_20 == 0)
    break;
  }

  while (VAR_27->uio_iov[VAR_24].iov_len >= VAR_22 + VAR_23 && VAR_20 > 0) {
   uint8_t *VAR_35;
   size_t VAR_36, VAR_37;

   VAR_36 = VAR_23;
   VAR_37 = FUNC_0((size_t)VAR_20,
       VAR_27->uio_iov[VAR_24].iov_len - (size_t)VAR_22);
   VAR_35 = (uint8_t *)VAR_27->uio_iov[VAR_24].iov_base + VAR_22;

   if (VAR_19->reinit) {
    if ((VAR_10->crd_flags & VAR_0) != 0 &&
        VAR_19->encrypt_multi == ((void*)0))
     VAR_19->encrypt(VAR_11->sw_kschedule,
         VAR_35);
    else if ((VAR_10->crd_flags & VAR_0) != 0) {
     VAR_36 = FUNC_11(VAR_37, VAR_23);
     VAR_19->encrypt_multi(VAR_11->sw_kschedule,
         VAR_35, VAR_36);
    } else if (VAR_19->decrypt_multi == ((void*)0))
     VAR_19->decrypt(VAR_11->sw_kschedule,
         VAR_35);
    else {
     VAR_36 = FUNC_11(VAR_37, VAR_23);
     VAR_19->decrypt_multi(VAR_11->sw_kschedule,
         VAR_35, VAR_36);
    }
   } else if (VAR_10->crd_flags & VAR_0) {

    for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++)
     VAR_35[VAR_21] ^= VAR_16[VAR_21];

    VAR_19->encrypt(VAR_11->sw_kschedule, VAR_35);
    VAR_16 = VAR_35;
   } else {




    VAR_17 = (VAR_16 == VAR_14) ? VAR_18 : VAR_14;
    FUNC_2(VAR_35, VAR_17, VAR_23);

    VAR_19->decrypt(VAR_11->sw_kschedule, VAR_35);


    for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++)
     VAR_35[VAR_21] ^= VAR_16[VAR_21];

    VAR_16 = VAR_17;
   }

   VAR_25 += VAR_36;
   VAR_22 += VAR_36;
   VAR_20 -= VAR_36;
  }







  if (VAR_20 > 0 && VAR_22 == VAR_27->uio_iov[VAR_24].iov_len) {
   VAR_22 = 0;
   VAR_24++;
   if (VAR_24 >= VAR_27->uio_iovcnt) {
    VAR_33 = VAR_8;
    goto out;
   }
  }
 }

out:
 if (VAR_32)
  FUNC_9(VAR_30, VAR_9);

 return (VAR_33);
}
