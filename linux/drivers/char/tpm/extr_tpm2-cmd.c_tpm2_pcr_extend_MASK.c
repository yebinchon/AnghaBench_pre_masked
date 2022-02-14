
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tpm_digest {int digest; int alg_id; } ;
struct tpm_chip {int nr_allocated_banks; TYPE_1__* allocated_banks; } ;
struct tpm_buf {int dummy; } ;
struct tpm2_null_auth_area {scalar_t__ auth_size; scalar_t__ attributes; scalar_t__ nonce_size; int handle; } ;
typedef int auth_area ;
struct TYPE_2__ {int digest_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tpm_buf*,unsigned char const*,int) ;
 int FUNC_2 (struct tpm_buf*,int ) ;
 int FUNC_3 (struct tpm_buf*,int) ;
 int FUNC_4 (struct tpm_buf*) ;
 int FUNC_5 (struct tpm_buf*,int ,int ) ;
 int FUNC_6 (struct tpm_chip*,struct tpm_buf*,int ,char*) ;

int FUNC_7(struct tpm_chip *VAR_3, u32 VAR_4,
      struct tpm_digest *VAR_5)
{
 struct tpm_buf VAR_6;
 struct tpm2_null_auth_area VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(&VAR_6, VAR_2, VAR_0);
 if (VAR_8)
  return VAR_8;

 FUNC_3(&VAR_6, VAR_4);

 VAR_7.handle = FUNC_0(VAR_1);
 VAR_7.nonce_size = 0;
 VAR_7.attributes = 0;
 VAR_7.auth_size = 0;

 FUNC_3(&VAR_6, sizeof(struct tpm2_null_auth_area));
 FUNC_1(&VAR_6, (const unsigned char *)&VAR_7,
         sizeof(VAR_7));
 FUNC_3(&VAR_6, VAR_3->nr_allocated_banks);

 for (VAR_9 = 0; VAR_9 < VAR_3->nr_allocated_banks; VAR_9++) {
  FUNC_2(&VAR_6, VAR_5[VAR_9].alg_id);
  FUNC_1(&VAR_6, (const unsigned char *)&VAR_5[VAR_9].digest,
          VAR_3->allocated_banks[VAR_9].digest_size);
 }

 VAR_8 = FUNC_6(VAR_3, &VAR_6, 0, "attempting extend a PCR value");

 FUNC_4(&VAR_6);

 return VAR_8;
}
