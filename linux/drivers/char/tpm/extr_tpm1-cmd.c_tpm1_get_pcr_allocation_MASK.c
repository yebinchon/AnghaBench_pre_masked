
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpm_chip {int nr_allocated_banks; TYPE_1__* allocated_banks; } ;
struct TYPE_2__ {size_t crypto_id; int digest_size; int alg_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_1__* FUNC_0 (int,int,int ) ;

int FUNC_1(struct tpm_chip *VAR_5)
{
 VAR_5->allocated_banks = FUNC_0(1, sizeof(*VAR_5->allocated_banks),
     VAR_1);
 if (!VAR_5->allocated_banks)
  return -VAR_0;

 VAR_5->allocated_banks[0].alg_id = VAR_3;
 VAR_5->allocated_banks[0].digest_size = VAR_4[VAR_2];
 VAR_5->allocated_banks[0].crypto_id = VAR_2;
 VAR_5->nr_allocated_banks = 1;

 return 0;
}
