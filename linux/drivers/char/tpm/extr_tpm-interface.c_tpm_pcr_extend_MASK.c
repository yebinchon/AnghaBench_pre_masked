
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tpm_digest {scalar_t__ alg_id; int digest; } ;
struct tpm_chip {int nr_allocated_banks; int flags; TYPE_1__* allocated_banks; } ;
struct TYPE_2__ {scalar_t__ alg_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tpm_chip*,int ,int ,char*) ;
 int FUNC_1 (struct tpm_chip*,int ,struct tpm_digest*) ;
 struct tpm_chip* FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (struct tpm_chip*) ;

int FUNC_4(struct tpm_chip *VAR_3, u32 VAR_4,
     struct tpm_digest *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_3 = FUNC_2(VAR_3);
 if (!VAR_3)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_3->nr_allocated_banks; VAR_7++) {
  if (VAR_5[VAR_7].alg_id != VAR_3->allocated_banks[VAR_7].alg_id) {
   VAR_6 = VAR_0;
   goto out;
  }
 }

 if (VAR_3->flags & VAR_2) {
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
  goto out;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5[0].digest,
        "attempting extend a PCR value");

out:
 FUNC_3(VAR_3);
 return VAR_6;
}
