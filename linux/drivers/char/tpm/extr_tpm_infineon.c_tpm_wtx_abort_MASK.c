
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tpm_chip*,int) ;

__attribute__((used)) static void FUNC_3(struct tpm_chip *VAR_4)
{
 FUNC_0(&VAR_4->dev, "Aborting WTX\n");
 FUNC_2(VAR_4, VAR_1);
 FUNC_2(VAR_4, VAR_0);
 FUNC_2(VAR_4, 0x00);
 FUNC_2(VAR_4, 0x00);
 VAR_3 = 0;
 FUNC_1(VAR_2);
}
