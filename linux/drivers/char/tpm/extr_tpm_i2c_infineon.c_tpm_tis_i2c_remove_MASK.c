
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpm_chip {int dummy; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int * client; int locality; struct tpm_chip* chip; } ;


 int FUNC_0 (struct tpm_chip*,int ,int) ;
 int FUNC_1 (struct tpm_chip*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1)
{
 struct tpm_chip *VAR_2 = VAR_0.chip;

 FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_0.locality, 1);
 VAR_0.client = ((void*)0);

 return 0;
}
