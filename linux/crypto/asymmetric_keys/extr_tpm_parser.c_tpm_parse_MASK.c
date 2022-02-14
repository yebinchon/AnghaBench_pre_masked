
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_parse_context {int blob_len; int blob; } ;
struct tpm_key {int dummy; } ;
typedef int ctx ;


 struct tpm_key* FUNC_0 (long) ;
 long FUNC_1 (int *,struct tpm_parse_context*,void const*,size_t) ;
 int FUNC_2 (struct tpm_parse_context*,int ,int) ;
 int VAR_0 ;
 struct tpm_key* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct tpm_key *FUNC_4(const void *VAR_1, size_t VAR_2)
{
 struct tpm_parse_context VAR_3;
 long VAR_4;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));


 VAR_4 = FUNC_1(&VAR_0, &VAR_3, VAR_1, VAR_2);
 if (VAR_4 < 0)
  goto error;

 return FUNC_3(VAR_3.blob, VAR_3.blob_len);

error:
 return FUNC_0(VAR_4);
}
