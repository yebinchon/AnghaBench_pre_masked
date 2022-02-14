
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tpm_key {scalar_t__ blob_len; struct tpm_key* blob; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tpm_key* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct tpm_key*) ;
 int FUNC_2 (struct tpm_key*) ;
 struct tpm_key* FUNC_3 (void const*,scalar_t__,int ) ;
 struct tpm_key* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

struct tpm_key *FUNC_6(const void *VAR_3, uint32_t VAR_4)
{
 int VAR_5;
 struct tpm_key *VAR_6;

 VAR_5 = FUNC_5(((void*)0));
 if (VAR_5 < 0)
  goto error;


 if (VAR_5 > 0) {
  VAR_5 = -VAR_0;
  goto error;
 }

 VAR_5 = -VAR_1;
 VAR_6 = FUNC_4(sizeof(struct tpm_key), VAR_2);
 if (!VAR_6)
  goto error;

 VAR_6->blob = FUNC_3(VAR_3, VAR_4, VAR_2);
 if (!VAR_6->blob)
  goto error_memdup;

 VAR_6->blob_len = VAR_4;

 VAR_5 = FUNC_1(VAR_6);
 if (VAR_5 < 0)
  goto error_extract;

 return VAR_6;

error_extract:
 FUNC_2(VAR_6->blob);
 VAR_6->blob_len = 0;
error_memdup:
 FUNC_2(VAR_6);
error:
 return FUNC_0(VAR_5);
}
