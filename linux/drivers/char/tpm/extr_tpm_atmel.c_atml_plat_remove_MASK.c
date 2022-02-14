
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tpm_chip {int dev; } ;
struct tpm_atmel_priv {int iobase; int region_size; int base; scalar_t__ have_region; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct tpm_chip*) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct tpm_chip *VAR_1 = FUNC_2(&VAR_0->dev);
 struct tpm_atmel_priv *VAR_2 = FUNC_2(&VAR_1->dev);

 FUNC_4(VAR_1);
 if (VAR_2->have_region)
  FUNC_1(VAR_2->base, VAR_2->region_size);
 FUNC_0(VAR_2->iobase);
 FUNC_3(VAR_0);
}
