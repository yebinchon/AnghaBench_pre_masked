
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct trusted_key_payload {unsigned int blob_len; int blob; int migratable; scalar_t__ key_len; int key; } ;
struct trusted_key_options {scalar_t__ hash; scalar_t__ policydigest_len; int policydigest; int blobauth; int keyauth; int keyhandle; } ;
struct tpm_chip {int dummy; } ;
struct tpm_buf {int flags; int * data; } ;
typedef int __be32 ;
struct TYPE_3__ {scalar_t__ crypto_id; scalar_t__ tpm_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,unsigned int) ;
 int FUNC_3 (struct tpm_buf*,int ,int *,int ,int ,int ,scalar_t__) ;
 TYPE_1__* VAR_15 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct tpm_buf*,int ,scalar_t__) ;
 int FUNC_6 (struct tpm_buf*,scalar_t__) ;
 int FUNC_7 (struct tpm_buf*,int ) ;
 int FUNC_8 (struct tpm_buf*,int ) ;
 int FUNC_9 (struct tpm_buf*) ;
 int FUNC_10 (struct tpm_buf*,int ,int ) ;
 size_t FUNC_11 (struct tpm_buf*) ;
 int FUNC_12 (struct tpm_chip*,struct tpm_buf*,int,char*) ;

int FUNC_13(struct tpm_chip *VAR_16,
        struct trusted_key_payload *VAR_17,
        struct trusted_key_options *VAR_18)
{
 unsigned int VAR_19;
 struct tpm_buf VAR_20;
 u32 VAR_21;
 int VAR_22;
 int VAR_23;

 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_15); VAR_22++) {
  if (VAR_18->hash == VAR_15[VAR_22].crypto_id) {
   VAR_21 = VAR_15[VAR_22].tpm_id;
   break;
  }
 }

 if (VAR_22 == FUNC_0(VAR_15))
  return -VAR_2;

 VAR_23 = FUNC_10(&VAR_20, VAR_9, VAR_5);
 if (VAR_23)
  return VAR_23;

 FUNC_7(&VAR_20, VAR_18->keyhandle);
 FUNC_3(&VAR_20, VAR_8,
        ((void*)0) , 0,
        0 ,
        VAR_18->keyauth ,
        VAR_13);


 FUNC_6(&VAR_20, 4 + VAR_13 + VAR_17->key_len + 1);

 FUNC_6(&VAR_20, VAR_13);
 FUNC_5(&VAR_20, VAR_18->blobauth, VAR_13);
 FUNC_6(&VAR_20, VAR_17->key_len + 1);
 FUNC_5(&VAR_20, VAR_17->key, VAR_17->key_len);
 FUNC_8(&VAR_20, VAR_17->migratable);


 FUNC_6(&VAR_20, 14 + VAR_18->policydigest_len);
 FUNC_6(&VAR_20, VAR_10);
 FUNC_6(&VAR_20, VAR_21);


 if (VAR_18->policydigest_len) {
  FUNC_7(&VAR_20, 0);
  FUNC_6(&VAR_20, VAR_18->policydigest_len);
  FUNC_5(&VAR_20, VAR_18->policydigest,
          VAR_18->policydigest_len);
 } else {
  FUNC_7(&VAR_20, VAR_6);
  FUNC_6(&VAR_20, 0);
 }


 FUNC_6(&VAR_20, VAR_11);
 FUNC_6(&VAR_20, 0);


 FUNC_6(&VAR_20, 0);


 FUNC_7(&VAR_20, 0);

 if (VAR_20.flags & VAR_12) {
  VAR_23 = -VAR_0;
  goto out;
 }

 VAR_23 = FUNC_12(VAR_16, &VAR_20, 4, "sealing data");
 if (VAR_23)
  goto out;

 VAR_19 = FUNC_1((__be32 *) &VAR_20.data[VAR_14]);
 if (VAR_19 > VAR_4) {
  VAR_23 = -VAR_0;
  goto out;
 }
 if (FUNC_11(&VAR_20) < VAR_14 + 4 + VAR_19) {
  VAR_23 = -VAR_1;
  goto out;
 }

 FUNC_2(VAR_17->blob, &VAR_20.data[VAR_14 + 4], VAR_19);
 VAR_17->blob_len = VAR_19;

out:
 FUNC_9(&VAR_20);

 if (VAR_23 > 0) {
  if (FUNC_4(VAR_23) == VAR_7)
   VAR_23 = -VAR_2;
  else
   VAR_23 = -VAR_3;
 }

 return VAR_23;
}
