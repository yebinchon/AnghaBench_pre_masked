
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_chip {int dev; } ;
struct tpm_atmel_priv {int iobase; } ;


 int FUNC_0 (int *,char*,...) ;
 struct tpm_atmel_priv* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tpm_chip *VAR_0, u8 *VAR_1, size_t VAR_2)
{
 struct tpm_atmel_priv *VAR_3 = FUNC_1(&VAR_0->dev);
 int VAR_4;

 FUNC_0(&VAR_0->dev, "tpm_atml_send:\n");
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_0(&VAR_0->dev, "%d 0x%x(%d)\n", VAR_4, VAR_1[VAR_4], VAR_1[VAR_4]);
  FUNC_2(VAR_1[VAR_4], VAR_3->iobase);
 }

 return 0;
}
