
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_nsc_priv {scalar_t__ base; } ;
struct tpm_chip {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 struct tpm_nsc_priv* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct tpm_chip*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct tpm_chip*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct tpm_chip *VAR_8, u8 * VAR_9, size_t VAR_10)
{
 struct tpm_nsc_priv *VAR_11 = FUNC_1(&VAR_8->dev);
 u8 VAR_12;
 int VAR_13;







 FUNC_3(VAR_2, VAR_11->base + VAR_1);

 if (FUNC_2(VAR_8) != 0)
  return -VAR_0;

 if (FUNC_4(VAR_8, VAR_6, 0, &VAR_12) < 0) {
  FUNC_0(&VAR_8->dev, "IBF timeout\n");
  return -VAR_0;
 }

 FUNC_3(VAR_4, VAR_11->base + VAR_1);
 if (FUNC_4(VAR_8, VAR_7, VAR_7, &VAR_12) < 0) {
  FUNC_0(&VAR_8->dev, "IBR timeout\n");
  return -VAR_0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  if (FUNC_4(VAR_8, VAR_6, 0, &VAR_12) < 0) {
   FUNC_0(&VAR_8->dev,
    "IBF timeout (while writing data)\n");
   return -VAR_0;
  }
  FUNC_3(VAR_9[VAR_13], VAR_11->base + VAR_5);
 }

 if (FUNC_4(VAR_8, VAR_6, 0, &VAR_12) < 0) {
  FUNC_0(&VAR_8->dev, "IBF timeout\n");
  return -VAR_0;
 }
 FUNC_3(VAR_3, VAR_11->base + VAR_1);

 return 0;
}
