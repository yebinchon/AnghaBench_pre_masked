
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct public_key_signature {scalar_t__ digest_size; scalar_t__ digest; int hash_algo; } ;
struct pkcs7_signed_info {scalar_t__ msgdigest_len; int authattrs_len; int authattrs; int index; int msgdigest; struct public_key_signature* sig; } ;
struct pkcs7_message {int data_len; int data; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct crypto_shash*) ;
 int FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (struct shash_desc*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct crypto_shash*) ;
 int FUNC_7 (struct shash_desc*,int ,int ,scalar_t__) ;
 int FUNC_8 (struct shash_desc*) ;
 int FUNC_9 (struct shash_desc*,int*,int) ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (struct shash_desc*) ;
 int FUNC_12 (char*,int) ;
 scalar_t__ FUNC_13 (scalar_t__,int ) ;
 struct shash_desc* FUNC_14 (size_t,int ) ;
 scalar_t__ FUNC_15 (scalar_t__,int ,scalar_t__) ;
 int FUNC_16 (scalar_t__,int ,scalar_t__) ;
 int FUNC_17 (char*,int ,...) ;
 int FUNC_18 (char*,int,scalar_t__) ;
 int FUNC_19 (char*,int ) ;

__attribute__((used)) static int FUNC_20(struct pkcs7_message *VAR_8,
   struct pkcs7_signed_info *VAR_9)
{
 struct public_key_signature *VAR_10 = VAR_9->sig;
 struct crypto_shash *VAR_11;
 struct shash_desc *VAR_12;
 size_t VAR_13;
 int VAR_14;

 FUNC_10(",%u,%s", VAR_9->index, VAR_9->sig->hash_algo);


 if (VAR_10->digest)
  return 0;

 if (!VAR_9->sig->hash_algo)
  return -VAR_6;




 VAR_11 = FUNC_2(VAR_9->sig->hash_algo, 0, 0);
 if (FUNC_0(VAR_11))
  return (FUNC_1(VAR_11) == -VAR_4) ? -VAR_6 : FUNC_1(VAR_11);

 VAR_13 = FUNC_4(VAR_11) + sizeof(*VAR_12);
 VAR_10->digest_size = FUNC_6(VAR_11);

 VAR_14 = -VAR_5;
 VAR_10->digest = FUNC_13(VAR_10->digest_size, VAR_7);
 if (!VAR_10->digest)
  goto error_no_desc;

 VAR_12 = FUNC_14(VAR_13, VAR_7);
 if (!VAR_12)
  goto error_no_desc;

 VAR_12->tfm = VAR_11;


 VAR_14 = FUNC_5(VAR_12, VAR_8->data, VAR_8->data_len,
      VAR_10->digest);
 if (VAR_14 < 0)
  goto error;
 FUNC_18("MsgDigest = [%*ph]\n", 8, VAR_10->digest);





 if (VAR_9->authattrs) {
  u8 VAR_15;

  if (!VAR_9->msgdigest) {
   FUNC_19("Sig %u: No messageDigest\n", VAR_9->index);
   VAR_14 = -VAR_3;
   goto error;
  }

  if (VAR_9->msgdigest_len != VAR_10->digest_size) {
   FUNC_17("Sig %u: Invalid digest size (%u)\n",
     VAR_9->index, VAR_9->msgdigest_len);
   VAR_14 = -VAR_2;
   goto error;
  }

  if (FUNC_15(VAR_10->digest, VAR_9->msgdigest,
      VAR_9->msgdigest_len) != 0) {
   FUNC_17("Sig %u: Message digest doesn't match\n",
     VAR_9->index);
   VAR_14 = -VAR_3;
   goto error;
  }






  FUNC_16(VAR_10->digest, 0, VAR_10->digest_size);

  VAR_14 = FUNC_8(VAR_12);
  if (VAR_14 < 0)
   goto error;
  VAR_15 = VAR_0 | VAR_1;
  VAR_14 = FUNC_9(VAR_12, &VAR_15, 1);
  if (VAR_14 < 0)
   goto error;
  VAR_14 = FUNC_7(VAR_12, VAR_9->authattrs,
      VAR_9->authattrs_len, VAR_10->digest);
  if (VAR_14 < 0)
   goto error;
  FUNC_18("AADigest = [%*ph]\n", 8, VAR_10->digest);
 }

error:
 FUNC_11(VAR_12);
error_no_desc:
 FUNC_3(VAR_11);
 FUNC_12(" = %d", VAR_14);
 return VAR_14;
}
