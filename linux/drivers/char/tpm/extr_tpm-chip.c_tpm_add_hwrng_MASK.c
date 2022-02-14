
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read; int name; } ;
struct tpm_chip {int dev_num; TYPE_1__ hwrng; int hwrng_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct tpm_chip *VAR_2)
{
 if (!FUNC_0(VAR_0))
  return 0;

 FUNC_2(VAR_2->hwrng_name, sizeof(VAR_2->hwrng_name),
   "tpm-rng-%d", VAR_2->dev_num);
 VAR_2->hwrng.name = VAR_2->hwrng_name;
 VAR_2->hwrng.read = VAR_1;
 return FUNC_1(&VAR_2->hwrng);
}
