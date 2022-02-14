
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trusted_key_payload {int blob_len; int * blob; } ;
struct trusted_key_options {int keyauth; int keyhandle; } ;
struct tpm_chip {int dummy; } ;
struct tpm_buf {int flags; int * data; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tpm_buf*,int ,int *,int ,int ,int ,int ) ;
 int FUNC_3 (struct tpm_buf*,int *,unsigned int) ;
 int FUNC_4 (struct tpm_buf*,int ) ;
 int FUNC_5 (struct tpm_buf*) ;
 int FUNC_6 (struct tpm_buf*,int ,int ) ;
 int FUNC_7 (struct tpm_chip*,struct tpm_buf*,int,char*) ;

__attribute__((used)) static int FUNC_8(struct tpm_chip *VAR_8,
    struct trusted_key_payload *VAR_9,
    struct trusted_key_options *VAR_10,
    u32 *VAR_11)
{
 struct tpm_buf VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 VAR_13 = FUNC_0((__be16 *) &VAR_9->blob[0]);
 if (VAR_13 > (VAR_9->blob_len - 2))
  return -VAR_0;

 VAR_14 = FUNC_0((__be16 *) &VAR_9->blob[2 + VAR_13]);
 VAR_15 = VAR_13 + VAR_14 + 4;
 if (VAR_15 > VAR_9->blob_len)
  return -VAR_0;

 VAR_16 = FUNC_6(&VAR_12, VAR_4, VAR_2);
 if (VAR_16)
  return VAR_16;

 FUNC_4(&VAR_12, VAR_10->keyhandle);
 FUNC_2(&VAR_12, VAR_3,
        ((void*)0) , 0,
        0 ,
        VAR_10->keyauth ,
        VAR_6);

 FUNC_3(&VAR_12, VAR_9->blob, VAR_15);

 if (VAR_12.flags & VAR_5) {
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_16 = FUNC_7(VAR_8, &VAR_12, 4, "loading blob");
 if (!VAR_16)
  *VAR_11 = FUNC_1(
   (__be32 *) &VAR_12.data[VAR_7]);

out:
 FUNC_5(&VAR_12);

 if (VAR_16 > 0)
  VAR_16 = -VAR_1;

 return VAR_16;
}
