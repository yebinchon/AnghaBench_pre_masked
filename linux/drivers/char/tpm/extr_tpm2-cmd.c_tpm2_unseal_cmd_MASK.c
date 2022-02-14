
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct trusted_key_payload {int key_len; int migratable; int key; } ;
struct trusted_key_options {int blobauth; scalar_t__ policyhandle; } ;
struct tpm_chip {int dummy; } ;
struct tpm_buf {int * data; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct tpm_buf*,scalar_t__,int *,int ,int ,int ,int ) ;
 int FUNC_3 (struct tpm_buf*,int ) ;
 int FUNC_4 (struct tpm_buf*) ;
 int FUNC_5 (struct tpm_buf*,int ,int ) ;
 int FUNC_6 (struct tpm_buf*) ;
 int FUNC_7 (struct tpm_chip*,struct tpm_buf*,int,char*) ;

__attribute__((used)) static int FUNC_8(struct tpm_chip *VAR_10,
      struct trusted_key_payload *VAR_11,
      struct trusted_key_options *VAR_12,
      u32 VAR_13)
{
 struct tpm_buf VAR_14;
 u16 VAR_15;
 u8 *VAR_16;
 int VAR_17;

 VAR_17 = FUNC_5(&VAR_14, VAR_7, VAR_4);
 if (VAR_17)
  return VAR_17;

 FUNC_3(&VAR_14, VAR_13);
 FUNC_2(&VAR_14,
        VAR_12->policyhandle ?
        VAR_12->policyhandle : VAR_5,
        ((void*)0) , 0,
        VAR_6,
        VAR_12->blobauth ,
        VAR_8);

 VAR_17 = FUNC_7(VAR_10, &VAR_14, 6, "unsealing");
 if (VAR_17 > 0)
  VAR_17 = -VAR_1;

 if (!VAR_17) {
  VAR_15 = FUNC_0(
   (__be16 *) &VAR_14.data[VAR_9 + 4]);
  if (VAR_15 < VAR_3 || VAR_15 > VAR_2 + 1) {
   VAR_17 = -VAR_0;
   goto out;
  }

  if (FUNC_6(&VAR_14) < VAR_9 + 6 + VAR_15) {
   VAR_17 = -VAR_0;
   goto out;
  }
  VAR_16 = &VAR_14.data[VAR_9 + 6];

  FUNC_1(VAR_11->key, VAR_16, VAR_15 - 1);
  VAR_11->key_len = VAR_15 - 1;
  VAR_11->migratable = VAR_16[VAR_15 - 1];
 }

out:
 FUNC_4(&VAR_14);
 return VAR_17;
}
