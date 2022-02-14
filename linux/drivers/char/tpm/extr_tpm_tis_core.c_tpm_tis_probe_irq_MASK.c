
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tpm_tis_data {int locality; } ;
struct tpm_chip {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct tpm_tis_data* FUNC_2 (int *) ;
 int FUNC_3 (struct tpm_chip*,int ,int ,int) ;
 int FUNC_4 (struct tpm_tis_data*,int ,int*) ;

__attribute__((used)) static void FUNC_5(struct tpm_chip *VAR_1, u32 VAR_2)
{
 struct tpm_tis_data *VAR_3 = FUNC_2(&VAR_1->dev);
 u8 VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_4(VAR_3, FUNC_1(VAR_3->locality),
      &VAR_4);
 if (VAR_6 < 0)
  return;

 if (!VAR_4) {
  if (FUNC_0(VAR_0))
   for (VAR_5 = 3; VAR_5 <= 15; VAR_5++)
    if (!FUNC_3(VAR_1, VAR_2, 0,
             VAR_5))
     return;
 } else if (!FUNC_3(VAR_1, VAR_2, 0,
          VAR_4))
  return;
}
